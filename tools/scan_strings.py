"""Scan PEs for persistence / shell / download / destructive string indicators. Read-only."""
import re, sys

BS = rb"\x5c"  # a literal backslash inside a bytes regex
pats = {
    "persistence": rb"(?i)(CurrentVersion" + BS + rb"Run|RunOnce|schtasks|" + BS + rb"Startup" + BS + rb"|Winlogon|taskkill|tasklist|bcdedit|vssadmin)",
    "shell/script": rb"(?i)(powershell|cmd\.exe|cmd /c|wscript|cscript|mshta|rundll32|regsvr32|\.vbs|\.bat\b|\.ps1)",
    "wallpaper/registry": rb"(?i)(wallpaper|Control Panel" + BS + rb"Desktop|SystemParametersInfo|RegSetValue|RegCreateKey|RegDeleteKey)",
    "download/net": rb"(?i)(URLDownloadToFile|InternetOpenUrl|WinHttp|curl |wget |bitsadmin|\.onion)",
    "destructive": rb"(?i)(format c|shutdown|ExitWindowsEx|InitiateSystemShutdown|BlockInput|NtRaiseHardError|PhysicalDrive)",
}

for path in sys.argv[1:]:
    data = open(path, "rb").read()
    asc = b"\n".join(re.findall(rb"[\x20-\x7e]{5,}", data))
    u16 = "\n".join(s.decode("utf-16le") for s in re.findall(rb"(?:[\x20-\x7e]\x00){5,}", data)).encode()
    blob = asc + b"\n" + u16
    print("=" * 60, path.split("\\")[-1].split("/")[-1])
    for cat, p in pats.items():
        hits = sorted(set(m.group(0).decode(errors="replace") for m in re.finditer(p, blob)))
        print("  %-20s %s" % (cat, hits[:14] if hits else "-"))
