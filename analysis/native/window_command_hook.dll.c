/* window_command_hook.dll  sha256=97c0d4759e12b6b50e48cec270a9bc4bbb6e7011cf2fb912805131bd63f55461 */
/* IDA 9.3, image base 0x10000000, 499 functions */

/* ---------------- exports ---------------- */
export  ord=1    0x10001360  window_command_bind_raw
export  ord=2    0x100017d0  window_command_check
export  ord=3    0x100012d0  window_command_cleanup
export  ord=4    0x10001760  window_command_get_active_raw
export  ord=5    0x10001390  window_command_hook_raw
export  ord=6    0x10001350  window_command_init_raw
export  ord=7    0x10001290  window_command_run_raw
export  ord=8    0x10001790  window_command_set_active_raw
export  ord=9    0x10001410  window_command_unhook_raw
export  ord=10   0x100018a0  window_get_background_redraw
export  ord=11   0x10001900  window_get_taskbar_button_visible_raw
export  ord=12   0x100018c0  window_set_background_redraw_raw
export  ord=13   0x10001930  window_set_taskbar_button_visible_raw
export  ord=14   0x10001840  window_set_topmost_raw
export  ord=15   0x10001870  window_set_visible_raw
export  ord=268445607 0x100027a7  DllEntryPoint

/* ---------------- imports ---------------- */
import  USER32: SetWindowPos, GetWindowLongW, GetSystemMenu, GetMenuState, CallWindowProcW, EnableMenuItem, SendMessageW, ShowWindow, SetWindowLongW
import  KERNEL32: HeapAlloc, DecodePointer, WriteConsoleW, CloseHandle, CreateFileW, SetFilePointerEx, UnhandledExceptionFilter, SetUnhandledExceptionFilter, GetCurrentProcess, TerminateProcess, IsProcessorFeaturePresent, IsDebuggerPresent, GetStartupInfoW, GetModuleHandleW, QueryPerformanceCounter, GetCurrentProcessId, GetCurrentThreadId, GetSystemTimeAsFileTime, InitializeSListHead, RtlUnwind, RaiseException, InterlockedFlushSList, GetLastError, SetLastError, EncodePointer, EnterCriticalSection, LeaveCriticalSection, DeleteCriticalSection, InitializeCriticalSectionAndSpinCount, TlsAlloc, TlsGetValue, TlsSetValue, TlsFree, FreeLibrary, GetProcAddress, LoadLibraryExW, ExitProcess, GetModuleHandleExW, GetModuleFileNameW, GetConsoleCP, HeapFree, FindClose, FindFirstFileExW, FindNextFileW, IsValidCodePage, GetACP, GetOEMCP, GetCPInfo, GetCommandLineA, GetCommandLineW, MultiByteToWideChar, WideCharToMultiByte, GetEnvironmentStringsW, FreeEnvironmentStringsW, LCMapStringW, GetProcessHeap, GetStdHandle, GetFileType, GetStringTypeW, HeapSize, HeapReAlloc, SetStdHandle, FlushFileBuffers, WriteFile, GetConsoleMode

/* ---------------- strings (len>=5) ---------------- */
str  0x1000f1ac  'bad allocation'
str  0x1000f1f0  'bad exception'
str  0x1000f580  '__based('
str  0x1000f58c  '__cdecl'
str  0x1000f594  '__pascal'
str  0x1000f5a0  '__stdcall'
str  0x1000f5ac  '__thiscall'
str  0x1000f5b8  '__fastcall'
str  0x1000f5c4  '__vectorcall'
str  0x1000f5d4  '__clrcall'
str  0x1000f5e0  '__eabi'
str  0x1000f5e8  '__swift_1'
str  0x1000f5f4  '__swift_2'
str  0x1000f600  '__ptr64'
str  0x1000f608  '__restrict'
str  0x1000f614  '__unaligned'
str  0x1000f620  'restrict('
str  0x1000f634  ' delete'
str  0x1000f658  'operator'
str  0x1000f6e0  "`vftable'"
str  0x1000f6ec  "`vbtable'"
str  0x1000f6f8  "`vcall'"
str  0x1000f700  "`typeof'"
str  0x1000f70c  "`local static guard'"
str  0x1000f724  "`string'"
str  0x1000f730  "`vbase destructor'"
str  0x1000f744  "`vector deleting destructor'"
str  0x1000f764  "`default constructor closure'"
str  0x1000f784  "`scalar deleting destructor'"
str  0x1000f7a4  "`vector constructor iterator'"
str  0x1000f7c4  "`vector destructor iterator'"
str  0x1000f7e4  "`vector vbase constructor iterator'"
str  0x1000f808  "`virtual displacement map'"
str  0x1000f824  "`eh vector constructor iterator'"
str  0x1000f848  "`eh vector destructor iterator'"
str  0x1000f868  "`eh vector vbase constructor iterator'"
str  0x1000f890  "`copy constructor closure'"
str  0x1000f8ac  "`udt returning'"
str  0x1000f8c0  '`RTTI'
str  0x1000f8c8  "`local vftable'"
str  0x1000f8d8  "`local vftable constructor closure'"
str  0x1000f8fc  ' new[]'
str  0x1000f904  ' delete[]'
str  0x1000f910  "`omni callsig'"
str  0x1000f920  "`placement delete closure'"
str  0x1000f93c  "`placement delete[] closure'"
str  0x1000f95c  "`managed vector constructor iterator'"
str  0x1000f984  "`managed vector destructor iterator'"
str  0x1000f9ac  "`eh vector copy constructor iterator'"
str  0x1000f9d4  "`eh vector vbase copy constructor iterator'"
str  0x1000fa00  "`dynamic initializer for '"
str  0x1000fa1c  "`dynamic atexit destructor for '"
str  0x1000fa40  "`vector copy constructor iterator'"
str  0x1000fa64  "`vector vbase copy constructor iterator'"
str  0x1000fa90  "`managed vector copy constructor iterator'"
str  0x1000fabc  "`local static thread guard'"
str  0x1000fad8  'operator "" '
str  0x1000fae8  'operator co_await'
str  0x1000fafc  'operator<=>'
str  0x1000fb08  " Type Descriptor'"
str  0x1000fb1c  ' Base Class Descriptor at ('
str  0x1000fb38  " Base Class Array'"
str  0x1000fb4c  " Class Hierarchy Descriptor'"
str  0x1000fb6c  " Complete Object Locator'"
str  0x1000fb88  "`anonymous namespace'"
str  0x1000fbac  'api-ms-win-core-fibers-l1-1-1'
str  0x1000fbe8  'api-ms-win-core-synch-l1-2-0'
str  0x1000fc24  'kernel32'
str  0x1000fc38  'api-ms-'
str  0x1000fc50  'FlsAlloc'
str  0x1000fc64  'FlsFree'
str  0x1000fc74  'FlsGetValue'
str  0x1000fc88  'FlsSetValue'
str  0x1000fc9c  'InitializeCriticalSectionEx'
str  0x1000fd54  'mscoree.dll'
str  0x1000fd6c  'CorExitProcess'
str  0x1000ff78  'ja-JP'
str  0x1000ff84  'zh-CN'
str  0x1000ff90  'ko-KR'
str  0x1000ff9c  'zh-TW'
str  0x1000fff8  'api-ms-win-core-datetime-l1-1-1'
str  0x10010038  'api-ms-win-core-file-l1-2-2'
str  0x10010070  'api-ms-win-core-localization-l1-2-1'
str  0x100100b8  'api-ms-win-core-localization-obsolete-l1-2-0'
str  0x10010118  'api-ms-win-core-processthreads-l1-1-2'
str  0x10010164  'api-ms-win-core-string-l1-1-0'
str  0x100101a0  'api-ms-win-core-sysinfo-l1-2-1'
str  0x100101e0  'api-ms-win-core-winrt-l1-1-0'
str  0x1001021c  'api-ms-win-core-xstate-l2-1-0'
str  0x10010258  'api-ms-win-rtcore-ntuser-window-l1-1-0'
str  0x100102a8  'api-ms-win-security-systemfunctions-l1-1-0'
str  0x10010300  'ext-ms-win-ntuser-dialogbox-l1-1-0'
str  0x10010348  'ext-ms-win-ntuser-windowstation-l1-1-0'
str  0x10010398  'advapi32'
str  0x100103ac  'ntdll'
str  0x100103b8  'api-ms-win-appmodel-runtime-l1-1-2'
str  0x10010400  'user32'
str  0x10010410  'ext-ms-'
str  0x10010424  'AreFileApisANSI'
str  0x10010464  'LCMapStringEx'
str  0x1001047c  'LocaleNameToLCID'
str  0x10010494  'AppPolicyGetProcessTerminationMethod'
str  0x10010640  'Sunday'
str  0x10010648  'Monday'
str  0x10010650  'Tuesday'
str  0x10010658  'Wednesday'
str  0x10010664  'Thursday'
str  0x10010670  'Friday'
str  0x10010678  'Saturday'
str  0x100106b4  'January'
str  0x100106bc  'February'
str  0x100106c8  'March'
str  0x100106d0  'April'
str  0x100106e8  'August'
str  0x100106f0  'September'
str  0x100106fc  'October'
str  0x10010704  'November'
str  0x10010710  'December'
str  0x10010724  'MM/dd/yy'
str  0x10010730  'dddd, MMMM dd, yyyy'
str  0x10010744  'HH:mm:ss'
str  0x10010788  'Sunday'
str  0x10010798  'Monday'
str  0x100107a8  'Tuesday'
str  0x100107b8  'Wednesday'
str  0x100107cc  'Thursday'
str  0x100107e0  'Friday'
str  0x100107f0  'Saturday'
str  0x10010864  'January'
str  0x10010874  'February'
str  0x10010888  'March'
str  0x10010894  'April'
str  0x100108b8  'August'
str  0x100108c8  'September'
str  0x100108dc  'October'
str  0x100108ec  'November'
str  0x10010900  'December'
str  0x10010924  'MM/dd/yy'
str  0x10010938  'dddd, MMMM dd, yyyy'
str  0x10010960  'HH:mm:ss'
str  0x10010974  'en-US'
str  0x10010a80  '         (((((                  H'
str  0x10010d07  '\x07\x08\t\n\x0b'
str  0x10010d20  ' !"#$%&\'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~'
str  0x10010e87  '\x07\x08\t\n\x0b'
str  0x10010ea0  ' !"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~'
str  0x100116b8  'zh-CHS'
str  0x100118bc  'ar-SA'
str  0x100118c8  'bg-BG'
str  0x100118d4  'ca-ES'
str  0x100118e0  'cs-CZ'
str  0x100118ec  'da-DK'
str  0x100118f8  'de-DE'
str  0x10011904  'el-GR'
str  0x10011910  'fi-FI'
str  0x1001191c  'fr-FR'
str  0x10011928  'he-IL'
str  0x10011934  'hu-HU'
str  0x10011940  'is-IS'
str  0x1001194c  'it-IT'
str  0x10011958  'nl-NL'
str  0x10011964  'nb-NO'
str  0x10011970  'pl-PL'
str  0x1001197c  'pt-BR'
str  0x10011988  'ro-RO'
str  0x10011994  'ru-RU'
str  0x100119a0  'hr-HR'
str  0x100119ac  'sk-SK'
str  0x100119b8  'sq-AL'
str  0x100119c4  'sv-SE'
str  0x100119d0  'th-TH'
str  0x100119dc  'tr-TR'
str  0x100119e8  'ur-PK'
str  0x100119f4  'id-ID'
str  0x10011a00  'uk-UA'
str  0x10011a0c  'be-BY'
str  0x10011a18  'sl-SI'
str  0x10011a24  'et-EE'
str  0x10011a30  'lv-LV'
str  0x10011a3c  'lt-LT'
str  0x10011a48  'fa-IR'
str  0x10011a54  'vi-VN'
str  0x10011a60  'hy-AM'
str  0x10011a6c  'az-AZ-Latn'
str  0x10011a84  'eu-ES'
str  0x10011a90  'mk-MK'
str  0x10011a9c  'tn-ZA'
str  0x10011aa8  'xh-ZA'
str  0x10011ab4  'zu-ZA'
str  0x10011ac0  'af-ZA'
str  0x10011acc  'ka-GE'
str  0x10011ad8  'fo-FO'
str  0x10011ae4  'hi-IN'
str  0x10011af0  'mt-MT'
str  0x10011afc  'se-NO'
str  0x10011b08  'ms-MY'
str  0x10011b14  'kk-KZ'
str  0x10011b20  'ky-KG'
str  0x10011b2c  'sw-KE'
str  0x10011b38  'uz-UZ-Latn'
str  0x10011b50  'tt-RU'
str  0x10011b5c  'bn-IN'
str  0x10011b68  'pa-IN'
str  0x10011b74  'gu-IN'
str  0x10011b80  'ta-IN'
str  0x10011b8c  'te-IN'
str  0x10011b98  'kn-IN'
str  0x10011ba4  'ml-IN'
str  0x10011bb0  'mr-IN'
str  0x10011bbc  'sa-IN'
str  0x10011bc8  'mn-MN'
str  0x10011bd4  'cy-GB'
str  0x10011be0  'gl-ES'
str  0x10011bec  'kok-IN'
str  0x10011bfc  'syr-SY'
str  0x10011c0c  'div-MV'
str  0x10011c1c  'quz-BO'
str  0x10011c2c  'ns-ZA'
str  0x10011c38  'mi-NZ'
str  0x10011c44  'ar-IQ'
str  0x10011c50  'de-CH'
str  0x10011c5c  'en-GB'
str  0x10011c68  'es-MX'
str  0x10011c74  'fr-BE'
str  0x10011c80  'it-CH'
str  0x10011c8c  'nl-BE'
str  0x10011c98  'nn-NO'
str  0x10011ca4  'pt-PT'
str  0x10011cb0  'sr-SP-Latn'
str  0x10011cc8  'sv-FI'
str  0x10011cd4  'az-AZ-Cyrl'
str  0x10011cec  'se-SE'
str  0x10011cf8  'ms-BN'
str  0x10011d04  'uz-UZ-Cyrl'
str  0x10011d1c  'quz-EC'
str  0x10011d2c  'ar-EG'
str  0x10011d38  'zh-HK'
str  0x10011d44  'de-AT'
str  0x10011d50  'en-AU'
str  0x10011d5c  'es-ES'
str  0x10011d68  'fr-CA'
str  0x10011d74  'sr-SP-Cyrl'
str  0x10011d8c  'se-FI'
str  0x10011d98  'quz-PE'
str  0x10011da8  'ar-LY'
str  0x10011db4  'zh-SG'
str  0x10011dc0  'de-LU'
str  0x10011dcc  'en-CA'
str  0x10011dd8  'es-GT'
str  0x10011de4  'fr-CH'
str  0x10011df0  'hr-BA'
str  0x10011dfc  'smj-NO'
str  0x10011e0c  'ar-DZ'
str  0x10011e18  'zh-MO'
str  0x10011e24  'de-LI'
str  0x10011e30  'en-NZ'
str  0x10011e3c  'es-CR'
str  0x10011e48  'fr-LU'
str  0x10011e54  'bs-BA-Latn'
str  0x10011e6c  'smj-SE'
str  0x10011e7c  'ar-MA'
str  0x10011e88  'en-IE'
str  0x10011e94  'es-PA'
str  0x10011ea0  'fr-MC'
str  0x10011eac  'sr-BA-Latn'
str  0x10011ec4  'sma-NO'
str  0x10011ed4  'ar-TN'
str  0x10011ee0  'en-ZA'
str  0x10011eec  'es-DO'
str  0x10011ef8  'sr-BA-Cyrl'
str  0x10011f10  'sma-SE'
str  0x10011f20  'ar-OM'
str  0x10011f2c  'en-JM'
str  0x10011f38  'es-VE'
str  0x10011f44  'sms-FI'
str  0x10011f54  'ar-YE'
str  0x10011f60  'en-CB'
str  0x10011f6c  'es-CO'
str  0x10011f78  'smn-FI'
str  0x10011f88  'ar-SY'
str  0x10011f94  'en-BZ'
str  0x10011fa0  'es-PE'
str  0x10011fac  'ar-JO'
str  0x10011fb8  'en-TT'
str  0x10011fc4  'es-AR'
str  0x10011fd0  'ar-LB'
str  0x10011fdc  'en-ZW'
str  0x10011fe8  'es-EC'
str  0x10011ff4  'ar-KW'
str  0x10012000  'en-PH'
str  0x1001200c  'es-CL'
str  0x10012018  'ar-AE'
str  0x10012024  'es-UY'
str  0x10012030  'ar-BH'
str  0x1001203c  'es-PY'
str  0x10012048  'ar-QA'
str  0x10012054  'es-BO'
str  0x10012060  'es-SV'
str  0x1001206c  'es-HN'
str  0x10012078  'es-NI'
str  0x10012084  'es-PR'
str  0x10012090  'zh-CHT'
str  0x100127c8  'af-za'
str  0x100127d4  'ar-ae'
str  0x100127e0  'ar-bh'
str  0x100127ec  'ar-dz'
str  0x100127f8  'ar-eg'
str  0x10012804  'ar-iq'
str  0x10012810  'ar-jo'
str  0x1001281c  'ar-kw'
str  0x10012828  'ar-lb'
str  0x10012834  'ar-ly'
str  0x10012840  'ar-ma'
str  0x1001284c  'ar-om'
str  0x10012858  'ar-qa'
str  0x10012864  'ar-sa'
str  0x10012870  'ar-sy'
str  0x1001287c  'ar-tn'
str  0x10012888  'ar-ye'
str  0x10012894  'az-az-cyrl'
str  0x100128ac  'az-az-latn'
str  0x100128c4  'be-by'
str  0x100128d0  'bg-bg'
str  0x100128dc  'bn-in'
str  0x100128e8  'bs-ba-latn'
str  0x10012900  'ca-es'
str  0x1001290c  'cs-cz'
str  0x10012918  'cy-gb'
str  0x10012924  'da-dk'
str  0x10012930  'de-at'
str  0x1001293c  'de-ch'
str  0x10012948  'de-de'
str  0x10012954  'de-li'
str  0x10012960  'de-lu'
str  0x1001296c  'div-mv'
str  0x1001297c  'el-gr'
str  0x10012988  'en-au'
str  0x10012994  'en-bz'
str  0x100129a0  'en-ca'
str  0x100129ac  'en-cb'
str  0x100129b8  'en-gb'
str  0x100129c4  'en-ie'
str  0x100129d0  'en-jm'
str  0x100129dc  'en-nz'
str  0x100129e8  'en-ph'
str  0x100129f4  'en-tt'
str  0x10012a00  'en-us'
str  0x10012a0c  'en-za'
str  0x10012a18  'en-zw'
str  0x10012a24  'es-ar'
str  0x10012a30  'es-bo'
str  0x10012a3c  'es-cl'
str  0x10012a48  'es-co'
str  0x10012a54  'es-cr'
str  0x10012a60  'es-do'
str  0x10012a6c  'es-ec'
str  0x10012a78  'es-es'
str  0x10012a84  'es-gt'
str  0x10012a90  'es-hn'
str  0x10012a9c  'es-mx'
str  0x10012aa8  'es-ni'
str  0x10012ab4  'es-pa'
str  0x10012ac0  'es-pe'
str  0x10012acc  'es-pr'
str  0x10012ad8  'es-py'
str  0x10012ae4  'es-sv'
str  0x10012af0  'es-uy'
str  0x10012afc  'es-ve'
str  0x10012b08  'et-ee'
str  0x10012b14  'eu-es'
str  0x10012b20  'fa-ir'
str  0x10012b2c  'fi-fi'
str  0x10012b38  'fo-fo'
str  0x10012b44  'fr-be'
str  0x10012b50  'fr-ca'
str  0x10012b5c  'fr-ch'
str  0x10012b68  'fr-fr'
str  0x10012b74  'fr-lu'
str  0x10012b80  'fr-mc'
str  0x10012b8c  'gl-es'
str  0x10012b98  'gu-in'
str  0x10012ba4  'he-il'
str  0x10012bb0  'hi-in'
str  0x10012bbc  'hr-ba'
str  0x10012bc8  'hr-hr'
str  0x10012bd4  'hu-hu'
str  0x10012be0  'hy-am'
str  0x10012bec  'id-id'
str  0x10012bf8  'is-is'
str  0x10012c04  'it-ch'
str  0x10012c10  'it-it'
str  0x10012c1c  'ja-jp'
str  0x10012c28  'ka-ge'
str  0x10012c34  'kk-kz'
str  0x10012c40  'kn-in'
str  0x10012c4c  'kok-in'
str  0x10012c5c  'ko-kr'
str  0x10012c68  'ky-kg'
str  0x10012c74  'lt-lt'
str  0x10012c80  'lv-lv'
str  0x10012c8c  'mi-nz'
str  0x10012c98  'mk-mk'
str  0x10012ca4  'ml-in'
str  0x10012cb0  'mn-mn'
str  0x10012cbc  'mr-in'
str  0x10012cc8  'ms-bn'
str  0x10012cd4  'ms-my'
str  0x10012ce0  'mt-mt'
str  0x10012cec  'nb-no'
str  0x10012cf8  'nl-be'
str  0x10012d04  'nl-nl'
str  0x10012d10  'nn-no'
str  0x10012d1c  'ns-za'
str  0x10012d28  'pa-in'
str  0x10012d34  'pl-pl'
str  0x10012d40  'pt-br'
str  0x10012d4c  'pt-pt'
str  0x10012d58  'quz-bo'
str  0x10012d68  'quz-ec'
str  0x10012d78  'quz-pe'
str  0x10012d88  'ro-ro'
str  0x10012d94  'ru-ru'
str  0x10012da0  'sa-in'
str  0x10012dac  'se-fi'
str  0x10012db8  'se-no'
str  0x10012dc4  'se-se'
str  0x10012dd0  'sk-sk'
str  0x10012ddc  'sl-si'
str  0x10012de8  'sma-no'
str  0x10012df8  'sma-se'
str  0x10012e08  'smj-no'
str  0x10012e18  'smj-se'
str  0x10012e28  'smn-fi'
str  0x10012e38  'sms-fi'
str  0x10012e48  'sq-al'
str  0x10012e54  'sr-ba-cyrl'
str  0x10012e6c  'sr-ba-latn'
str  0x10012e84  'sr-sp-cyrl'
str  0x10012e9c  'sr-sp-latn'
str  0x10012eb4  'sv-fi'
str  0x10012ec0  'sv-se'
str  0x10012ecc  'sw-ke'
str  0x10012ed8  'syr-sy'
str  0x10012ee8  'ta-in'
str  0x10012ef4  'te-in'
str  0x10012f00  'th-th'
str  0x10012f0c  'tn-za'
str  0x10012f18  'tr-tr'
str  0x10012f24  'tt-ru'
str  0x10012f30  'uk-ua'
str  0x10012f3c  'ur-pk'
str  0x10012f48  'uz-uz-cyrl'
str  0x10012f60  'uz-uz-latn'
str  0x10012f78  'vi-vn'
str  0x10012f84  'xh-za'
str  0x10012f90  'zh-chs'
str  0x10012fa0  'zh-cht'
str  0x10012fb0  'zh-cn'
str  0x10012fbc  'zh-hk'
str  0x10012fc8  'zh-mo'
str  0x10012fd4  'zh-sg'
str  0x10012fe0  'zh-tw'
str  0x10012fec  'zu-za'
str  0x10013000  'log10'
str  0x10013058  'CONOUT$'
str  0x10013258  'log10'
str  0x100132fb  '\tQ*\x1b='
str  0x100133b7  '?5Wg4p'
str  0x1001347b  'BC .='
str  0x100135c9  '%S#[k'
str  0x1001361a  '"B <1='
str  0x1001364b  "#.X'="
str  0x10013bc8  'atan2'
str  0x10013be4  'floor'
str  0x10013bfc  'ldexp'
str  0x10013c04  '_cabs'
str  0x10013c0c  '_hypot'
str  0x10013c1c  'frexp'
str  0x10013c30  '_logb'
str  0x10013c38  '_nextafter'
str  0x10013c6c  'Unknown exception'
str  0x10013c80  'bad array new length'
str  0x10013c98  'map/set too long'
str  0x1001403c  '.text$di'
str  0x10014050  '.text$mn'
str  0x10014064  '.text$x'
str  0x10014074  '.text$yd'
str  0x10014088  '.idata$5'
str  0x1001409c  '.00cfg'
str  0x100140ac  '.CRT$XCA'
str  0x100140c0  '.CRT$XCU'
str  0x100140d4  '.CRT$XCZ'
str  0x100140e8  '.CRT$XIA'
str  0x100140fc  '.CRT$XIC'
str  0x10014110  '.CRT$XIZ'
str  0x10014124  '.CRT$XPA'
str  0x10014138  '.CRT$XPX'
str  0x1001414c  '.CRT$XPXA'
str  0x10014160  '.CRT$XPZ'
str  0x10014174  '.CRT$XTA'
str  0x10014188  '.CRT$XTZ'
str  0x1001419c  '.rdata'
str  0x100141ac  '.rdata$r'
str  0x100141c0  '.rdata$sxdata'
str  0x100141d8  '.rdata$zzzdbg'
str  0x100141f0  '.rtc$IAA'
str  0x10014204  '.rtc$IZZ'
str  0x10014218  '.rtc$TAA'
str  0x1001422c  '.rtc$TZZ'
str  0x10014240  '.xdata$x'
str  0x10014254  '.edata'
str  0x10014264  '.idata$2'
str  0x10014278  '.idata$3'
str  0x1001428c  '.idata$4'
str  0x100142a0  '.idata$6'
str  0x100142b4  '.data'
str  0x100142c4  '.data$r'
str  0x100142e4  '.rsrc$01'
str  0x100142f8  '.rsrc$02'
str  0x100149ee  'window_command_hook.dll'
str  0x10014a06  'window_command_bind_raw'
str  0x10014a1e  'window_command_check'
str  0x10014a33  'window_command_cleanup'
str  0x10014a4a  'window_command_get_active_raw'
str  0x10014a68  'window_command_hook_raw'
str  0x10014a80  'window_command_init_raw'
str  0x10014a98  'window_command_run_raw'
str  0x10014aaf  'window_command_set_active_raw'
str  0x10014acd  'window_command_unhook_raw'
str  0x10014ae7  'window_get_background_redraw'
str  0x10014b04  'window_get_taskbar_button_visible_raw'
str  0x10014b2a  'window_set_background_redraw_raw'
str  0x10014b4b  'window_set_taskbar_button_visible_raw'
str  0x10014b71  'window_set_topmost_raw'
str  0x10014b88  'window_set_visible_raw'
str  0x10014d0e  'EnableMenuItem'
str  0x10014d20  'SetWindowLongW'
str  0x10014d32  'ShowWindow'
str  0x10014d40  'SendMessageW'
str  0x10014d50  'SetWindowPos'
str  0x10014d60  'CallWindowProcW'
str  0x10014d72  'GetMenuState'
str  0x10014d82  'GetSystemMenu'
str  0x10014d92  'GetWindowLongW'
str  0x10014da2  'USER32.dll'
str  0x10014db0  'UnhandledExceptionFilter'
str  0x10014dcc  'SetUnhandledExceptionFilter'
str  0x10014dea  'GetCurrentProcess'
str  0x10014dfe  'TerminateProcess'
str  0x10014e12  'IsProcessorFeaturePresent'
str  0x10014e2e  'IsDebuggerPresent'
str  0x10014e42  'GetStartupInfoW'
str  0x10014e54  'GetModuleHandleW'
str  0x10014e68  'QueryPerformanceCounter'
str  0x10014e82  'GetCurrentProcessId'
str  0x10014e98  'GetCurrentThreadId'
str  0x10014eae  'GetSystemTimeAsFileTime'
str  0x10014ec8  'InitializeSListHead'
str  0x10014ede  'RtlUnwind'
str  0x10014eea  'RaiseException'
str  0x10014efc  'InterlockedFlushSList'
str  0x10014f14  'GetLastError'
str  0x10014f24  'SetLastError'
str  0x10014f34  'EncodePointer'
str  0x10014f44  'EnterCriticalSection'
str  0x10014f5c  'LeaveCriticalSection'
str  0x10014f74  'DeleteCriticalSection'
str  0x10014f8c  'InitializeCriticalSectionAndSpinCount'
str  0x10014fb4  'TlsAlloc'
str  0x10014fc0  'TlsGetValue'
str  0x10014fce  'TlsSetValue'
str  0x10014fdc  'TlsFree'
str  0x10014fe6  'FreeLibrary'
str  0x10014ff4  'GetProcAddress'
str  0x10015006  'LoadLibraryExW'
str  0x10015018  'ExitProcess'
str  0x10015026  'GetModuleHandleExW'
str  0x1001503c  'GetModuleFileNameW'
str  0x10015052  'HeapAlloc'
str  0x1001505e  'HeapFree'
str  0x1001506a  'FindClose'
str  0x10015076  'FindFirstFileExW'
str  0x1001508a  'FindNextFileW'
str  0x1001509a  'IsValidCodePage'
str  0x100150ac  'GetACP'
str  0x100150b6  'GetOEMCP'
str  0x100150c2  'GetCPInfo'
str  0x100150ce  'GetCommandLineA'
str  0x100150e0  'GetCommandLineW'
str  0x100150f2  'MultiByteToWideChar'
str  0x10015108  'WideCharToMultiByte'
str  0x1001511e  'GetEnvironmentStringsW'
str  0x10015138  'FreeEnvironmentStringsW'
str  0x10015152  'LCMapStringW'
str  0x10015162  'GetProcessHeap'
str  0x10015174  'GetStdHandle'
str  0x10015184  'GetFileType'
str  0x10015192  'GetStringTypeW'
str  0x100151a4  'HeapSize'
str  0x100151b0  'HeapReAlloc'
str  0x100151be  'SetStdHandle'
str  0x100151ce  'FlushFileBuffers'
str  0x100151e2  'WriteFile'
str  0x100151ee  'GetConsoleCP'
str  0x100151fe  'GetConsoleMode'
str  0x10015210  'SetFilePointerEx'
str  0x10015224  'CreateFileW'
str  0x10015232  'CloseHandle'
str  0x10015240  'WriteConsoleW'
str  0x10015250  'DecodePointer'
str  0x1001525e  'KERNEL32.dll'
str  0x100160ca  '                          '
str  0x100161aa  'abcdefghijklmnopqrstuvwxyz'
str  0x100161ca  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
str  0x100162d2  '                          '
str  0x100163b9  'abcdefghijklmnopqrstuvwxyz'
str  0x100163d9  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
str  0x10016868  '.?AVtype_info@@'
str  0x10016880  '.?AVlogic_error@std@@'
str  0x100168a0  '.?AVlength_error@std@@'
str  0x100168c0  '.?AVbad_exception@std@@'
str  0x100168e0  '.?AVbad_alloc@std@@'
str  0x100168fc  '.?AVexception@std@@'
str  0x10016918  '.?AVbad_array_new_length@std@@'

/* ---------------- pseudocode ---------------- */
/* hex-rays available: True */

/* sub_10001030  @0x10001030  size=40 */
int sub_10001030()
{
  _DWORD *v0; // eax

  v0 = operator new(0x18u);
  *v0 = v0;
  v0[1] = v0;
  v0[2] = v0;
  *((_WORD *)v0 + 6) = 257;
  dword_10017364 = v0;
  return atexit(sub_1000E960);
}


/* _DllMain@12  @0x10001060  size=8 */
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return 1;
}


/* sub_10001070  @0x10001070  size=45 */
char *__thiscall sub_10001070(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  return this;
}


/* sub_100010A0  @0x100010a0  size=14 */
const char *__thiscall sub_100010A0(_DWORD *this)
{
  int v1; // ecx
  const char *result; // eax

  v1 = *(this + 1);
  result = "Unknown exception";
  if ( v1 )
    return (const char *)v1;
  return result;
}


/* sub_100010B0  @0x100010b0  size=48 */
char *__thiscall sub_100010B0(char *Block, char a2)
{
  *(_DWORD *)Block = &std::exception::`vftable';
  __std_exception_destroy(Block + 4);
  if ( (a2 & 1) != 0 )
    sub_10002436(Block);
  return Block;
}


/* sub_10001100  @0x10001100  size=24 */
char *__thiscall sub_10001100(char *this)
{
  *(_QWORD *)(this + 4) = 0;
  *((_DWORD *)this + 1) = "bad array new length";
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}


/* sub_10001120  @0x10001120  size=51 */
char *__thiscall sub_10001120(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}


/* sub_10001160  @0x10001160  size=51 */
char *__thiscall sub_10001160(char *this, int a2)
{
  *(_DWORD *)this = &std::exception::`vftable';
  *(_QWORD *)(this + 4) = 0;
  __std_exception_copy(a2 + 4, this + 4);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}


/* sub_100011A0  @0x100011a0  size=10 */
void __noreturn sub_100011A0()
{
  sub_10002E8E("map/set too long");
}


/* sub_100011B0  @0x100011b0  size=213 */
LRESULT __cdecl sub_100011B0(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  _BYTE *v4; // edx
  WPARAM v5; // ecx
  _DWORD *v6; // eax
  int v7; // edx
  int v8; // eax

  if ( Msg == 20 )
  {
    if ( !byte_10017351 )
      return 1;
  }
  else if ( Msg == 274 && !byte_10017350 )
  {
    v4 = dword_10017364;
    v5 = wParam & 0xFFFFFFF0;
    v6 = *((_DWORD **)dword_10017364 + 1);
    while ( !*((_BYTE *)v6 + 13) )
    {
      if ( v6[4] >= v5 )
      {
        v4 = v6;
        v6 = (_DWORD *)*v6;
      }
      else
      {
        v6 = (_DWORD *)v6[2];
      }
    }
    if ( !v4[13] && v5 >= *((_DWORD *)v4 + 4) && v4 != dword_10017364 )
      return 1;
    v7 = dword_1001735C;
    v8 = *(_DWORD *)(dword_1001735C + 4);
    while ( !*(_BYTE *)(v8 + 13) )
    {
      if ( *(_DWORD *)(v8 + 16) >= v5 )
      {
        v7 = v8;
        v8 = *(_DWORD *)v8;
      }
      else
      {
        v8 = *(_DWORD *)(v8 + 8);
      }
    }
    if ( !*(_BYTE *)(v7 + 13) && v5 >= *(_DWORD *)(v7 + 16) && v7 != dword_1001735C )
    {
      *(_BYTE *)sub_10001970(v7 + 16) = 1;
      return 1;
    }
  }
  return CallWindowProcW(dwNewLong, hWnd, Msg, wParam, lParam);
}


/* EXPORT window_command_run_raw  @0x10001290  size=62 */
double __cdecl window_command_run_raw(HWND hWnd, __int64 a2, __int64 a3)
{
  LRESULT v3; // eax

  byte_10017350 = 1;
  v3 = SendMessageW(hWnd, 0x112u, (unsigned int)*(double *)&a2, (int)*(double *)&a3);
  byte_10017350 = 0;
  return (double)v3;
}


/* EXPORT window_command_cleanup  @0x100012d0  size=113 */
double window_command_cleanup()
{
  _DWORD *v0; // edi
  _DWORD *v1; // esi
  void *v2; // eax

  if ( dwNewLong )
  {
    SetWindowLongW(hWnd, -4, (LONG)dwNewLong);
    dwNewLong = nullptr;
  }
  v0 = (_DWORD *)dword_1001735C;
  v1 = *(_DWORD **)(dword_1001735C + 4);
  while ( !*((_BYTE *)v1 + 13) )
  {
    sub_10001A50((int)&dword_1001735C, (void *)v1[2]);
    v2 = v1;
    v1 = (_DWORD *)*v1;
    sub_10002436(v2);
  }
  v0[1] = v0;
  *v0 = v0;
  v0[2] = v0;
  dword_10017360 = 0;
  return 1.0;
}


/* EXPORT window_command_init_raw  @0x10001350  size=3 */
double window_command_init_raw()
{
  return 1.0;
}


/* EXPORT window_command_bind_raw  @0x10001360  size=43 */
double __cdecl window_command_bind_raw(HWND hWnd)
{
  if ( !dwNewLong )
  {
    ::hWnd = hWnd;
    dwNewLong = (WNDPROC)SetWindowLongW(hWnd, -4, (LONG)sub_100011B0);
  }
  return 1.0;
}


/* EXPORT window_command_hook_raw  @0x10001390  size=127 */
double __cdecl window_command_hook_raw(HWND hWnd, __int64 a2)
{
  unsigned int v2; // eax
  int v3; // edx
  int v4; // ecx

  v2 = (unsigned int)*(double *)&a2;
  v3 = dword_1001735C;
  HIDWORD(a2) = (unsigned int)*(double *)&a2;
  v4 = *(_DWORD *)(dword_1001735C + 4);
  while ( !*(_BYTE *)(v4 + 13) )
  {
    if ( *(_DWORD *)(v4 + 16) >= v2 )
    {
      v3 = v4;
      v4 = *(_DWORD *)v4;
    }
    else
    {
      v4 = *(_DWORD *)(v4 + 8);
    }
  }
  if ( *(_BYTE *)(v3 + 13) || v2 < *(_DWORD *)(v3 + 16) || v3 == dword_1001735C )
  {
    if ( !dwNewLong )
    {
      ::hWnd = hWnd;
      dwNewLong = (WNDPROC)SetWindowLongW(hWnd, -4, (LONG)sub_100011B0);
    }
    *(_BYTE *)sub_10001970((char *)&a2 + 4) = 0;
  }
  return 1.0;
}


/* EXPORT window_command_unhook_raw  @0x10001410  size=150 */
double __cdecl window_command_unhook_raw(double a1)
{
  unsigned int v1; // eax
  int v2; // edx
  int v3; // ecx
  int **v4; // ecx
  int v5; // eax
  int i; // ecx
  int *j; // ecx
  void *v8; // eax

  v1 = (unsigned int)a1;
  v2 = dword_1001735C;
  v3 = *(_DWORD *)(dword_1001735C + 4);
  while ( !*(_BYTE *)(v3 + 13) )
  {
    if ( *(_DWORD *)(v3 + 16) >= v1 )
    {
      v2 = v3;
      v3 = *(_DWORD *)v3;
    }
    else
    {
      v3 = *(_DWORD *)(v3 + 8);
    }
  }
  if ( !*(_BYTE *)(v2 + 13) && v1 >= *(_DWORD *)(v2 + 16) && v2 != dword_1001735C )
  {
    v4 = *(int ***)(v2 + 8);
    v5 = v2;
    if ( *((_BYTE *)v4 + 13) )
    {
      for ( i = *(_DWORD *)(v2 + 4); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
      {
        if ( v5 != *(_DWORD *)(i + 8) )
          break;
        v5 = i;
      }
    }
    else
    {
      for ( j = *v4; !*((_BYTE *)j + 13); j = (int *)*j )
        ;
    }
    v8 = (void *)sub_10001CC0(v2);
    sub_10002436(v8);
  }
  return 1.0;
}


/* sub_100014B0  @0x100014b0  size=523 */
int __usercall sub_100014B0@<eax>(HWND hWnd@<ecx>, double a2@<xmm1>, double a3@<xmm2>)
{
  unsigned int v4; // esi
  _BYTE *v5; // edx
  _DWORD *v6; // eax
  int result; // eax
  bool v8; // bl
  int **v9; // ecx
  _BYTE *v10; // eax
  int i; // ecx
  int *j; // ecx
  void *v13; // eax
  HMENU SystemMenu; // eax
  unsigned int v15; // esi
  unsigned int v16; // esi
  int v17; // esi
  LONG WindowLongW; // eax
  LONG v19; // ecx
  UINT uId; // [esp+1Ch] [ebp-4h] BYREF

  v4 = (unsigned int)a2;
  uId = (unsigned int)a2;
  switch ( (unsigned int)a2 )
  {
    case 0xF000u:
    case 0xF010u:
    case 0xF090u:
      v5 = dword_10017364;
      v6 = *((_DWORD **)dword_10017364 + 1);
      while ( !*((_BYTE *)v6 + 13) )
      {
        if ( v6[4] >= v4 )
        {
          v5 = v6;
          v6 = (_DWORD *)*v6;
        }
        else
        {
          v6 = (_DWORD *)v6[2];
        }
      }
      if ( v5[13] || v4 < *((_DWORD *)v5 + 4) )
        v5 = dword_10017364;
      if ( a3 >= 0.0 )
      {
        v8 = v5 != dword_10017364;
        if ( a3 <= 0.0 )
        {
          if ( !dwNewLong )
          {
            ::hWnd = hWnd;
            dwNewLong = (WNDPROC)SetWindowLongW(hWnd, -4, (LONG)sub_100011B0);
          }
          if ( v8 )
            goto LABEL_43;
          *(_BYTE *)sub_10001970(&uId) = 1;
          result = 1;
        }
        else
        {
          if ( v5 == dword_10017364 )
            goto LABEL_43;
          v9 = *((int ***)v5 + 2);
          v10 = v5;
          if ( *((_BYTE *)v9 + 13) )
          {
            for ( i = *((_DWORD *)v5 + 1); !*(_BYTE *)(i + 13); i = *(_DWORD *)(i + 4) )
            {
              if ( v10 != *(_BYTE **)(i + 8) )
                break;
              v10 = (_BYTE *)i;
            }
          }
          else
          {
            for ( j = *v9; !*((_BYTE *)j + 13); j = (int *)*j )
              ;
          }
          v13 = (void *)sub_10001CC0(v5);
          sub_10002436(v13);
          result = 1;
        }
      }
      else
      {
        result = v5 == dword_10017364;
      }
      break;
    case 0xF060u:
      SystemMenu = GetSystemMenu(hWnd, 0);
      if ( a3 >= 0.0 )
      {
        if ( EnableMenuItem(SystemMenu, uId, a3 <= 0.0) < 0 )
          return -1;
        result = 1;
      }
      else
      {
        result = (GetMenuState(SystemMenu, uId, 0) & 1) == 0;
      }
      break;
    default:
      v15 = v4 - 61440;
      if ( v15 )
      {
        v16 = v15 - 32;
        if ( v16 )
        {
          if ( v16 != 16 )
            return -1;
          v17 = 0x10000;
        }
        else
        {
          v17 = 0x20000;
        }
      }
      else
      {
        v17 = 0x40000;
      }
      WindowLongW = GetWindowLongW(hWnd, -16);
      if ( a3 >= 0.0 )
      {
        if ( a3 <= 0.0 )
          v19 = ~v17 & WindowLongW;
        else
          v19 = v17 | WindowLongW;
        SetWindowLongW(hWnd, -16, v19);
LABEL_43:
        result = 1;
      }
      else
      {
        result = (v17 & WindowLongW) == v17;
      }
      break;
  }
  return result;
}


/* EXPORT window_command_get_active_raw  @0x10001760  size=46 */
double __cdecl window_command_get_active_raw(HWND hWnd, __int64 a2)
{
  return (double)sub_100014B0(hWnd, *(double *)&a2, -1.0);
}


/* EXPORT window_command_set_active_raw  @0x10001790  size=64 */
double __cdecl window_command_set_active_raw(HWND hWnd, __int64 a2, __int64 a3)
{
  return (double)sub_100014B0(hWnd, *(double *)&a2, (double)(*(double *)&a3 > 0.5));
}


/* EXPORT window_command_check  @0x100017d0  size=102 */
double __cdecl window_command_check(double a1)
{
  unsigned int v1; // eax
  int v2; // edx
  int v3; // ecx

  v1 = (unsigned int)a1;
  v2 = dword_1001735C;
  HIDWORD(a1) = (unsigned int)a1;
  v3 = *(_DWORD *)(dword_1001735C + 4);
  while ( !*(_BYTE *)(v3 + 13) )
  {
    if ( *(_DWORD *)(v3 + 16) >= v1 )
    {
      v2 = v3;
      v3 = *(_DWORD *)v3;
    }
    else
    {
      v3 = *(_DWORD *)(v3 + 8);
    }
  }
  if ( *(_BYTE *)(v2 + 13) || v1 < *(_DWORD *)(v2 + 16) || v2 == dword_1001735C || !*(_BYTE *)(v2 + 20) )
    return 0.0;
  *(_BYTE *)sub_10001970((char *)&a1 + 4) = 0;
  return 1.0;
}


/* EXPORT window_set_topmost_raw  @0x10001840  size=48 */
double __cdecl window_set_topmost_raw(HWND hWnd, __int64 a2)
{
  SetWindowPos(hWnd, (HWND)((*(double *)&a2 > 0.5) - 2), 0, 0, 0, 0, 3u);
  return 1.0;
}


/* EXPORT window_set_visible_raw  @0x10001870  size=40 */
double __cdecl window_set_visible_raw(HWND hWnd, __int64 a2)
{
  int v2; // eax

  v2 = 0;
  if ( *(double *)&a2 > 0.5 )
    v2 = 5;
  ShowWindow(hWnd, v2);
  return 1.0;
}


/* EXPORT window_get_background_redraw  @0x100018a0  size=29 */
double window_get_background_redraw()
{
  return (double)(unsigned __int8)byte_10017351;
}


/* EXPORT window_set_background_redraw_raw  @0x100018c0  size=63 */
double __cdecl window_set_background_redraw_raw(HWND hWnd, __int64 a2)
{
  if ( !dwNewLong )
  {
    ::hWnd = hWnd;
    dwNewLong = (WNDPROC)SetWindowLongW(hWnd, -4, (LONG)sub_100011B0);
  }
  byte_10017351 = *(double *)&a2 > 0.5;
  return 1.0;
}


/* EXPORT window_get_taskbar_button_visible_raw  @0x10001900  size=41 */
double __cdecl window_get_taskbar_button_visible_raw(HWND hWnd)
{
  return (double)((GetWindowLongW(hWnd, -20) & 0x80) == 0);
}


/* EXPORT window_set_taskbar_button_visible_raw  @0x10001930  size=59 */
double __cdecl window_set_taskbar_button_visible_raw(HWND hWnd, __int64 a2)
{
  LONG WindowLongW; // eax
  unsigned int v3; // ecx
  LONG v4; // eax

  WindowLongW = GetWindowLongW(hWnd, -20);
  v3 = WindowLongW & 0xFFFFFF7F;
  v4 = WindowLongW | 0x80;
  if ( *(double *)&a2 > 0.5 )
    v4 = v3;
  SetWindowLongW(hWnd, -20, v4);
  return 1.0;
}


/* sub_10001970  @0x10001970  size=218 */
int *__thiscall sub_10001970(_DWORD *this, _DWORD *a2)
{
  int *v2; // ebx
  int v3; // esi
  int *v4; // edx
  int *v5; // edi
  int *v6; // eax
  _DWORD *v7; // eax

  v2 = (int *)*this;
  v3 = 0;
  v4 = (int *)*this;
  v5 = *(int **)(*this + 4);
  if ( !*((_BYTE *)v5 + 13) )
  {
    v6 = *(int **)(*this + 4);
    do
    {
      v5 = v6;
      if ( (unsigned int)v6[4] >= *a2 )
      {
        v4 = v6;
        v3 = 1;
        v6 = (int *)*v6;
      }
      else
      {
        v6 = (int *)v6[2];
        v3 = 0;
      }
    }
    while ( !*((_BYTE *)v6 + 13) );
  }
  if ( *((_BYTE *)v4 + 13) || *a2 < (unsigned int)v4[4] )
  {
    if ( *(this + 1) == 178956970 )
      sub_100011A0();
    v7 = operator new(0x18u);
    v7[4] = *a2;
    *((_BYTE *)v7 + 20) = 0;
    *v7 = v2;
    v7[1] = v2;
    v7[2] = v2;
    *((_WORD *)v7 + 6) = 0;
    v4 = (int *)sub_10001A90(v5, v3, v7);
  }
  return v4 + 5;
}


/* sub_10001A50  @0x10001a50  size=59 */
int __stdcall sub_10001A50(int a1, void **Block)
{
  void **i; // esi
  void **v3; // eax
  int result; // eax

  for ( i = Block; !*((_BYTE *)i + 13); result = sub_10002436(v3) )
  {
    sub_10001A50(a1, i[2]);
    v3 = i;
    i = (void **)*i;
  }
  return result;
}


/* sub_10001A90  @0x10001a90  size=517 */
int __thiscall sub_10001A90(_DWORD *this, _DWORD *a2, int a3, int a4)
{
  _DWORD *v4; // ecx
  int result; // eax
  _DWORD *v6; // edx
  _DWORD *v7; // ecx
  _DWORD *v8; // edi
  int *v9; // esi
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // esi
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  _DWORD *v21; // eax
  _DWORD *v22; // [esp+0h] [ebp-8h]

  v4 = (_DWORD *)*this;
  ++*(this + 1);
  result = a4;
  v22 = v4;
  *(_DWORD *)(a4 + 4) = a2;
  if ( a2 == v4 )
  {
    *v4 = a4;
    v4[1] = a4;
    v4[2] = a4;
    *(_BYTE *)(a4 + 12) = 1;
    return result;
  }
  if ( a3 )
  {
    *a2 = a4;
    if ( a2 == (_DWORD *)*v4 )
      *v4 = a4;
  }
  else
  {
    a2[2] = a4;
    if ( a2 == (_DWORD *)v4[2] )
      v4[2] = a4;
  }
  v6 = (_DWORD *)a4;
  if ( !*(_BYTE *)(*(_DWORD *)(a4 + 4) + 12) )
  {
    while ( 1 )
    {
      v7 = (_DWORD *)v6[1];
      v8 = v6 + 1;
      v9 = (int *)v7[1];
      v10 = v7 + 1;
      v11 = (_DWORD *)*v9;
      if ( v7 == (_DWORD *)*v9 )
      {
        v11 = (_DWORD *)v9[2];
        if ( *((_BYTE *)v11 + 12) )
        {
          v12 = (_DWORD *)v7[2];
          if ( v6 == v12 )
          {
            v6 = (_DWORD *)v6[1];
            v7[2] = *v12;
            if ( !*(_BYTE *)(*v12 + 13) )
              *(_DWORD *)(*v12 + 4) = v7;
            v12[1] = *v10;
            if ( v7 == *(_DWORD **)(*this + 4) )
            {
              *(_DWORD *)(*this + 4) = v12;
              v8 = v7 + 1;
              *v12 = v7;
              *v10 = v12;
            }
            else
            {
              v13 = (_DWORD *)*v10;
              if ( v7 == *(_DWORD **)*v10 )
                *v13 = v12;
              else
                v13[2] = v12;
              v8 = v7 + 1;
              *v12 = v7;
              *v10 = v12;
            }
          }
          else
          {
            v12 = (_DWORD *)v6[1];
          }
          *((_BYTE *)v12 + 12) = 1;
          *(_BYTE *)(*(_DWORD *)(*v8 + 4) + 12) = 0;
          v14 = *(_DWORD **)(*v8 + 4);
          v15 = (_DWORD *)*v14;
          *v14 = *(_DWORD *)(*v14 + 8);
          v16 = v15[2];
          if ( !*(_BYTE *)(v16 + 13) )
            *(_DWORD *)(v16 + 4) = v14;
          v15[1] = v14[1];
          if ( v14 == *(_DWORD **)(*this + 4) )
          {
            *(_DWORD *)(*this + 4) = v15;
            v15[2] = v14;
          }
          else
          {
            v17 = (_DWORD *)v14[1];
            if ( v14 == (_DWORD *)v17[2] )
              v17[2] = v15;
            else
              *v17 = v15;
            v15[2] = v14;
          }
LABEL_48:
          v14[1] = v15;
          goto LABEL_49;
        }
      }
      else if ( *((_BYTE *)v11 + 12) )
      {
        v18 = (_DWORD *)*v7;
        if ( v6 == (_DWORD *)*v7 )
        {
          v6 = (_DWORD *)v6[1];
          v7 = (_DWORD *)*v7;
          *v6 = v18[2];
          v19 = v18[2];
          if ( !*(_BYTE *)(v19 + 13) )
            *(_DWORD *)(v19 + 4) = v6;
          v7[1] = *v10;
          if ( v6 == *(_DWORD **)(*this + 4) )
          {
            *(_DWORD *)(*this + 4) = v7;
          }
          else
          {
            v20 = (_DWORD *)*v10;
            if ( v6 == *(_DWORD **)(*v10 + 8) )
              v20[2] = v7;
            else
              *v20 = v7;
          }
          v7[2] = v6;
          v8 = v10;
          *v10 = v7;
        }
        *((_BYTE *)v7 + 12) = 1;
        *(_BYTE *)(*(_DWORD *)(*v8 + 4) + 12) = 0;
        v14 = *(_DWORD **)(*v8 + 4);
        v15 = (_DWORD *)v14[2];
        v14[2] = *v15;
        if ( !*(_BYTE *)(*v15 + 13) )
          *(_DWORD *)(*v15 + 4) = v14;
        v15[1] = v14[1];
        if ( v14 == *(_DWORD **)(*this + 4) )
        {
          *(_DWORD *)(*this + 4) = v15;
        }
        else
        {
          v21 = (_DWORD *)v14[1];
          if ( v14 == (_DWORD *)*v21 )
            *v21 = v15;
          else
            v21[2] = v15;
        }
        *v15 = v14;
        goto LABEL_48;
      }
      *((_BYTE *)v7 + 12) = 1;
      *((_BYTE *)v11 + 12) = 1;
      *(_BYTE *)(*(_DWORD *)(*v8 + 4) + 12) = 0;
      v6 = *(_DWORD **)(*v8 + 4);
LABEL_49:
      if ( *(_BYTE *)(v6[1] + 12) )
      {
        v4 = v22;
        break;
      }
    }
  }
  *(_BYTE *)(v4[1] + 12) = 1;
  return a4;
}


/* sub_10001CC0  @0x10001cc0  size=1051 */
int *__thiscall sub_10001CC0(_DWORD *this, int *a2)
{
  int *v2; // eax
  int *i; // edx
  int ***v4; // edi
  int *v6; // ecx
  int *v7; // ecx
  int **v8; // esi
  int *v9; // edx
  int *v10; // ecx
  int **v11; // ebx
  int *j; // edi
  int *v13; // edx
  int v14; // edi
  _DWORD *v15; // edi
  char v16; // bl
  int *v17; // eax
  int **k; // edx
  int **v19; // eax
  int *v20; // ebx
  int *v21; // edx
  int *v22; // edx
  int **v23; // eax
  int v24; // edi
  int v25; // eax
  int *v26; // edx
  int v27; // eax
  _DWORD *v28; // eax
  int v29; // edi
  int v30; // ecx
  int *result; // eax
  _DWORD *v32; // eax
  int *v33; // edx
  int **v34; // eax
  int *v35; // edi
  int **v36; // eax
  int *v37; // edx
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // [esp+10h] [ebp-8h]

  v2 = a2;
  i = (int *)a2[2];
  v4 = (int ***)(a2 + 2);
  v6 = a2;
  v40 = this;
  if ( *((_BYTE *)i + 13) )
  {
    for ( i = (int *)a2[1]; !*((_BYTE *)i + 13); i = (int *)i[1] )
    {
      if ( v2 != (int *)i[2] )
        break;
      v2 = i;
    }
  }
  else
  {
    v7 = (int *)*i;
    if ( !*(_BYTE *)(*i + 13) )
    {
      do
      {
        i = v7;
        v7 = (int *)*v7;
      }
      while ( !*((_BYTE *)v7 + 13) );
    }
    v6 = a2;
  }
  v8 = *v4;
  if ( !*(_BYTE *)(*v6 + 13) )
  {
    if ( *((_BYTE *)v8 + 13) )
    {
      v8 = (int **)*v6;
    }
    else
    {
      v8 = (int **)i[2];
      if ( i != v6 )
      {
        *(_DWORD *)(*v6 + 4) = i;
        *i = *a2;
        if ( i == (int *)*v4 )
        {
          v10 = i;
        }
        else
        {
          v10 = (int *)i[1];
          if ( !*((_BYTE *)v8 + 13) )
            v8[1] = v10;
          *v10 = (int)v8;
          i[2] = (int)*v4;
          (*v4)[1] = i;
        }
        v15 = this;
        if ( *(int **)(*this + 4) == a2 )
        {
          *(_DWORD *)(*this + 4) = i;
        }
        else
        {
          v19 = (int **)a2[1];
          if ( *v19 == a2 )
            *v19 = i;
          else
            v19[2] = i;
        }
        v16 = *((_BYTE *)i + 12);
        i[1] = a2[1];
        *((_BYTE *)i + 12) = *((_BYTE *)a2 + 12);
        v9 = a2;
        *((_BYTE *)a2 + 12) = v16;
        goto LABEL_45;
      }
    }
  }
  v9 = a2;
  v10 = (int *)a2[1];
  if ( !*((_BYTE *)v8 + 13) )
    v8[1] = v10;
  if ( *(int **)(*this + 4) == a2 )
  {
    *(_DWORD *)(*this + 4) = v8;
  }
  else if ( (int *)*v10 == a2 )
  {
    *v10 = (int)v8;
  }
  else
  {
    v10[2] = (int)v8;
  }
  v11 = (int **)*this;
  if ( *v11 == a2 )
  {
    if ( *((_BYTE *)v8 + 13) )
    {
      j = v10;
    }
    else
    {
      v13 = *v8;
      for ( j = (int *)v8; !*((_BYTE *)v13 + 13); v13 = (int *)*v13 )
        j = v13;
      v9 = a2;
    }
    *v11 = j;
  }
  v14 = *v40;
  if ( *(int **)(*v40 + 8) != v9 )
    goto LABEL_33;
  if ( !*((_BYTE *)v8 + 13) )
  {
    v17 = v8[2];
    for ( k = v8; !*((_BYTE *)v17 + 13); v17 = (int *)v17[2] )
      k = (int **)v17;
    *(_DWORD *)(v14 + 8) = k;
    v9 = a2;
LABEL_33:
    v15 = v40;
    v16 = *((_BYTE *)a2 + 12);
    goto LABEL_45;
  }
  *(_DWORD *)(v14 + 8) = v10;
  v9 = a2;
  v15 = v40;
  v16 = *((_BYTE *)a2 + 12);
LABEL_45:
  if ( v16 != 1 )
    goto LABEL_82;
  if ( v8 == *(int ***)(*v15 + 4) )
    goto LABEL_81;
  do
  {
    v20 = v10;
    if ( *((_BYTE *)v8 + 12) != 1 )
      break;
    v21 = (int *)*v10;
    if ( v8 == (int **)*v10 )
    {
      v21 = (int *)v10[2];
      if ( !*((_BYTE *)v21 + 12) )
      {
        *((_BYTE *)v21 + 12) = 1;
        v22 = (int *)v10[2];
        *((_BYTE *)v10 + 12) = 0;
        v10[2] = *v22;
        if ( !*(_BYTE *)(*v22 + 13) )
          *(_DWORD *)(*v22 + 4) = v10;
        v22[1] = v10[1];
        if ( v10 == *(int **)(*v15 + 4) )
        {
          *(_DWORD *)(*v15 + 4) = v22;
        }
        else
        {
          v23 = (int **)v10[1];
          if ( v10 == *v23 )
            *v23 = v22;
          else
            v23[2] = v22;
        }
        *v22 = (int)v10;
        v10[1] = (int)v22;
        v21 = (int *)v10[2];
      }
      if ( *((_BYTE *)v21 + 13) )
        goto LABEL_79;
      if ( *(_BYTE *)(*v21 + 12) != 1 || *(_BYTE *)(v21[2] + 12) != 1 )
      {
        if ( *(_BYTE *)(v21[2] + 12) == 1 )
        {
          *(_BYTE *)(*v21 + 12) = 1;
          v24 = *v21;
          *((_BYTE *)v21 + 12) = 0;
          *v21 = *(_DWORD *)(v24 + 8);
          v25 = *(_DWORD *)(v24 + 8);
          if ( !*(_BYTE *)(v25 + 13) )
            *(_DWORD *)(v25 + 4) = v21;
          *(_DWORD *)(v24 + 4) = v21[1];
          if ( v21 == *(int **)(*v40 + 4) )
          {
            *(_DWORD *)(*v40 + 4) = v24;
          }
          else
          {
            v32 = (_DWORD *)v21[1];
            if ( v21 == (int *)v32[2] )
              v32[2] = v24;
            else
              *v32 = v24;
          }
          *(_DWORD *)(v24 + 8) = v21;
          v21[1] = v24;
          v21 = (int *)v10[2];
        }
        *((_BYTE *)v21 + 12) = *((_BYTE *)v10 + 12);
        *((_BYTE *)v10 + 12) = 1;
        *(_BYTE *)(v21[2] + 12) = 1;
        v33 = (int *)v10[2];
        v10[2] = *v33;
        if ( !*(_BYTE *)(*v33 + 13) )
          *(_DWORD *)(*v33 + 4) = v10;
        v15 = v40;
        v33[1] = v10[1];
        if ( v10 == *(int **)(*v40 + 4) )
        {
          *(_DWORD *)(*v40 + 4) = v33;
          *v33 = (int)v10;
          v10[1] = (int)v33;
        }
        else
        {
          v34 = (int **)v10[1];
          if ( v10 == *v34 )
            *v34 = v33;
          else
            v34[2] = v33;
          *v33 = (int)v10;
          v10[1] = (int)v33;
        }
        break;
      }
    }
    else
    {
      if ( !*((_BYTE *)v21 + 12) )
      {
        *((_BYTE *)v21 + 12) = 1;
        v26 = (int *)*v10;
        *((_BYTE *)v10 + 12) = 0;
        *v10 = v26[2];
        v27 = v26[2];
        if ( !*(_BYTE *)(v27 + 13) )
          *(_DWORD *)(v27 + 4) = v10;
        v26[1] = v10[1];
        if ( v10 == *(int **)(*v15 + 4) )
        {
          *(_DWORD *)(*v15 + 4) = v26;
        }
        else
        {
          v28 = (_DWORD *)v10[1];
          if ( v10 == (int *)v28[2] )
            v28[2] = v26;
          else
            *v28 = v26;
        }
        v26[2] = (int)v10;
        v10[1] = (int)v26;
        v21 = (int *)*v10;
      }
      if ( *((_BYTE *)v21 + 13) )
        goto LABEL_79;
      v29 = v21[2];
      if ( *(_BYTE *)(v29 + 12) != 1 || *(_BYTE *)(*v21 + 12) != 1 )
      {
        if ( *(_BYTE *)(*v21 + 12) == 1 )
        {
          *(_BYTE *)(v29 + 12) = 1;
          v35 = (int *)v21[2];
          *((_BYTE *)v21 + 12) = 0;
          v21[2] = *v35;
          if ( !*(_BYTE *)(*v35 + 13) )
            *(_DWORD *)(*v35 + 4) = v21;
          v35[1] = v21[1];
          if ( v21 == *(int **)(*v40 + 4) )
          {
            *(_DWORD *)(*v40 + 4) = v35;
          }
          else
          {
            v36 = (int **)v21[1];
            if ( v21 == *v36 )
              *v36 = v35;
            else
              v36[2] = v35;
          }
          *v35 = (int)v21;
          v21[1] = (int)v35;
          v21 = (int *)*v10;
        }
        *((_BYTE *)v21 + 12) = *((_BYTE *)v10 + 12);
        *((_BYTE *)v10 + 12) = 1;
        *(_BYTE *)(*v21 + 12) = 1;
        v37 = (int *)*v10;
        *v10 = *(_DWORD *)(*v10 + 8);
        v38 = v37[2];
        if ( !*(_BYTE *)(v38 + 13) )
          *(_DWORD *)(v38 + 4) = v10;
        v15 = v40;
        v37[1] = v10[1];
        if ( v10 == *(int **)(*v40 + 4) )
        {
          *(_DWORD *)(*v40 + 4) = v37;
          v37[2] = (int)v10;
          v10[1] = (int)v37;
        }
        else
        {
          v39 = (_DWORD *)v10[1];
          if ( v10 == (int *)v39[2] )
            v39[2] = v37;
          else
            *v39 = v37;
          v37[2] = (int)v10;
          v10[1] = (int)v37;
        }
        break;
      }
    }
    v15 = v40;
    *((_BYTE *)v21 + 12) = 0;
LABEL_79:
    v8 = (int **)v10;
    v10 = (int *)v10[1];
  }
  while ( v20 != *(int **)(*v15 + 4) );
  v9 = a2;
LABEL_81:
  *((_BYTE *)v8 + 12) = 1;
LABEL_82:
  v30 = v15[1];
  result = v9;
  if ( v30 )
    v15[1] = v30 - 1;
  return result;
}


/* sub_100021EA  @0x100021ea  size=13 */
char sub_100021EA()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}


/* sub_1000224E  @0x1000224e  size=13 */
__vcrt_bool sub_1000224E()
{
  __acrt_uninitialize_critical(0);
  return __vcrt_uninitialize_critical();
}


/* sub_10002436  @0x10002436  size=14 */
void __cdecl sub_10002436(void *Block)
{
  j__free(Block);
}


/* sub_10002444  @0x10002444  size=35 */
_DWORD *__thiscall sub_10002444(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_10002436(Block);
  return Block;
}


/* EXPORT DllEntryPoint  @0x100027a7  size=35  [lib] */
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}


/* sub_100028EB  @0x100028eb  size=24 */
_DWORD *__thiscall sub_100028EB(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}


/* sub_10002903  @0x10002903  size=28 */
void __noreturn sub_10002903()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_100028EB(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}


/* sub_10002920  @0x10002920  size=28 */
void __noreturn sub_10002920()
{
  char pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_10001100(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}


/* sub_10002B0D  @0x10002b0d  size=4 */
int sub_10002B0D()
{
  return 1;
}


/* sub_10002C37  @0x10002c37  size=8 */
void sub_10002C37()
{
  dword_10016C84 = 0;
}


/* nullsub_1  @0x10002c98  size=3 */
void nullsub_1()
{
  ;
}


/* j__free  @0x10002c9b  size=5 */
// attributes: thunk
void __cdecl j__free(void *Block)
{
  free(Block);
}


/* sub_10002D38  @0x10002d38  size=12 */
void sub_10002D38()
{
  InitializeSListHead(&ListHead);
}


/* sub_10002D44  @0x10002d44  size=12 */
int sub_10002D44()
{
  return __std_type_info_destroy_list(&ListHead);
}


/* sub_10002D50  @0x10002d50  size=6 */
void *sub_10002D50()
{
  return &unk_10016C98;
}


/* sub_10002D56  @0x10002d56  size=6 */
void *sub_10002D56()
{
  return &unk_10016CA0;
}


/* sub_10002D79  @0x10002d79  size=6 */
void *sub_10002D79()
{
  return &unk_1001736C;
}


/* sub_10002D7F  @0x10002d7f  size=44 */
void sub_10002D7F()
{
  ;
}


/* sub_10002DAB  @0x10002dab  size=44 */
void sub_10002DAB()
{
  ;
}


/* sub_10002E0C  @0x10002e0c  size=27 */
char *__thiscall sub_10002E0C(char *this, int a2)
{
  sub_10001070(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}


/* sub_10002E27  @0x10002e27  size=31 */
std::exception *__thiscall sub_10002E27(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}


/* sub_10002E46  @0x10002e46  size=27 */
char *__thiscall sub_10002E46(char *this, int a2)
{
  sub_10001070(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}


/* sub_10002E8E  @0x10002e8e  size=31 */
void __cdecl __noreturn sub_10002E8E(char *a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_10002E27((std::exception *)pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


/* sub_100042BC  @0x100042bc  size=27 */
char *__thiscall sub_100042BC(char *this, int a2)
{
  sub_10001070(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}


/* sub_100042D7  @0x100042d7  size=24 */
_DWORD *__thiscall sub_100042D7(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}


/* sub_1000598D  @0x1000598d  size=15 */
int __cdecl sub_1000598D(int a1)
{
  dword_10016D50 = a1;
  return a1;
}


/* sub_10005A44  @0x10005a44  size=15 */
int __cdecl sub_10005A44(int a1)
{
  dword_10016D54 = a1;
  return a1;
}


/* sub_10005ED5  @0x10005ed5  size=15 */
int __cdecl sub_10005ED5(int a1)
{
  dword_10016D5C = a1;
  return a1;
}


/* sub_10005F09  @0x10005f09  size=7 */
int sub_10005F09()
{
  return dword_10016D58;
}


/* sub_10006392  @0x10006392  size=27 */
void *__cdecl sub_10006392(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10016E7C )
    return (void *)unknown_libname_5(*a1);
  return result;
}


/* sub_100063AD  @0x100063ad  size=27 */
void *__cdecl sub_100063AD(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10016E78 )
    return (void *)unknown_libname_5(*a1);
  return result;
}


/* j_??$common_initialize_environment_nolock@D@@YAHXZ  @0x100063ff  size=5 */
// attributes: thunk
int common_initialize_environment_nolock<char>()
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}


/* sub_10006404  @0x10006404  size=91 */
int __stdcall sub_10006404(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = unknown_libname_8(a2);
  __acrt_unlock(*a3);
  return v4;
}


/* sub_1000645F  @0x1000645f  size=91 */
int __stdcall sub_1000645F(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_22ebabd17bc4fa466a2aca6d8deb888d_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}


/* sub_100066DC  @0x100066dc  size=22 */
int __cdecl sub_100066DC(_onexit_t Function)
{
  return _register_onexit_function(&stru_10016E80, Function);
}


/* sub_1000677B  @0x1000677b  size=3 */
char sub_1000677B()
{
  return 1;
}


/* sub_1000677E  @0x1000677e  size=13 */
char sub_1000677E()
{
  dword_10017310 = (struct __crt_locale_data *)&off_10016570;
  return 1;
}


/* sub_100067A5  @0x100067a5  size=8 */
char sub_100067A5()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}


/* sub_100067DB  @0x100067db  size=9 */
__vcrt_bool sub_100067DB()
{
  return __vcrt_uninitialize(0);
}


/* sub_1000747A  @0x1000747a  size=207 */
int __cdecl sub_1000747A(LPCWCH lpWideCharStr, struct __crt_win32_buffer_empty_debug_info *a2, int a3, UINT CodePage)
{
  struct __crt_win32_buffer_empty_debug_info *v4; // esi
  int result; // eax
  size_t v6; // eax
  DWORD v7; // eax
  int v8; // eax
  DWORD LastError; // eax

  if ( !lpWideCharStr )
  {
    v4 = a2;
    unknown_libname_11(a2);
    *((_DWORD *)a2 + 2) = 0;
    *((_DWORD *)a2 + 3) = 0;
LABEL_3:
    *((_DWORD *)v4 + 4) = 0;
    return 0;
  }
  if ( *lpWideCharStr )
  {
    v6 = __acrt_WideCharToMultiByte(CodePage, 0, lpWideCharStr, -1, nullptr, 0, 0, 0);
    if ( v6 )
    {
      if ( v6 <= *((_DWORD *)a2 + 3) || (result = sub_10007AB6(a2, v6)) == 0 )
      {
        v8 = __acrt_WideCharToMultiByte(CodePage, 0, lpWideCharStr, -1, *((LPSTR *)a2 + 2), *((_DWORD *)a2 + 3), 0, 0);
        if ( v8 )
        {
          *((_DWORD *)a2 + 4) = v8 - 1;
          return 0;
        }
        else
        {
          LastError = GetLastError();
          __acrt_errno_map_os_error(LastError);
          return *_errno();
        }
      }
    }
    else
    {
      v7 = GetLastError();
      __acrt_errno_map_os_error(v7);
      return *_errno();
    }
  }
  else
  {
    v4 = a2;
    if ( *((_DWORD *)a2 + 3) || (result = sub_10007AB6(a2, 1u)) == 0 )
    {
      **((_BYTE **)a2 + 2) = 0;
      goto LABEL_3;
    }
  }
  return result;
}


/* sub_10007549  @0x10007549  size=29 */
int __cdecl sub_10007549(LPCCH lpMultiByteStr, struct __crt_win32_buffer_empty_debug_info *a2, UINT CodePage)
{
  int v3; // ecx
  int var1; // [esp+1h] [ebp-1h] BYREF

  LOBYTE(var1) = HIBYTE(v3);
  return __acrt_convert_wcs_mbs_cp<char,wchar_t,_lambda_62f6974d9771e494a5ea317cc32e971c_,__crt_win32_buffer_internal_dynamic_resizing>(
           lpMultiByteStr,
           a2,
           (int)&var1,
           CodePage);
}


/* sub_10007AB6  @0x10007ab6  size=60 */
int __thiscall sub_10007AB6(void **this, size_t Size)
{
  int result; // eax

  unknown_libname_11(this);
  result = __crt_win32_buffer_internal_dynamic_resizing::allocate(
             this + 2,
             Size,
             (const struct __crt_win32_buffer_empty_debug_info *)this);
  if ( result )
  {
    *(this + 3) = nullptr;
    *((_BYTE *)this + 20) = 0;
  }
  else
  {
    *((_BYTE *)this + 20) = 1;
    *(this + 3) = (void *)Size;
    return 0;
  }
  return result;
}


/* sub_10007AF2  @0x10007af2  size=63 */
int __thiscall sub_10007AF2(void **this, int a2)
{
  int result; // eax

  unknown_libname_11(this);
  result = __crt_win32_buffer_internal_dynamic_resizing::allocate(
             this + 2,
             2 * a2,
             (const struct __crt_win32_buffer_empty_debug_info *)this);
  if ( result )
  {
    *(this + 3) = nullptr;
    *((_BYTE *)this + 20) = 0;
  }
  else
  {
    *((_BYTE *)this + 20) = 1;
    *(this + 3) = (void *)a2;
    return 0;
  }
  return result;
}


/* sub_100082EB  @0x100082eb  size=19 */
struct __crt_multibyte_data *sub_100082EB()
{
  struct __acrt_ptd *v0; // eax

  v0 = (struct __acrt_ptd *)__acrt_getptd();
  return update_thread_multibyte_data_internal(v0, &dword_10016FF4);
}


/* sub_10008865  @0x10008865  size=26 */
int sub_10008865()
{
  return try_get_function(20, "LCMapStringEx", &unk_1001045C, "LCMapStringEx");
}


/* sub_1000887F  @0x1000887f  size=26 */
int sub_1000887F()
{
  return try_get_function(22, "LocaleNameToLCID", &unk_10010474, "LocaleNameToLCID");
}


/* sub_100089E3  @0x100089e3  size=64 */
int __stdcall sub_100089E3(int a1)
{
  int (__thiscall *function)(_DWORD, int, int); // eax

  function = (int (__thiscall *)(_DWORD, int, int))try_get_function(
                                                     28,
                                                     "AppPolicyGetProcessTerminationMethod",
                                                     &unk_10010490,
                                                     "AppPolicyGetProcessTerminationMethod");
  if ( function )
    return function(function, -6, a1);
  else
    return -1073741275;
}


/* sub_10008B8C  @0x10008b8c  size=93 */
int __stdcall sub_10008B8C(
        wchar_t *a1,
        DWORD dwMapFlags,
        LPCWSTR lpSrcStr,
        int cchSrc,
        LPWSTR lpDestStr,
        int cchDest,
        int a7,
        int a8,
        int a9)
{
  int (__thiscall *v9)(_DWORD, wchar_t *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int); // eax
  LCID v11; // eax

  v9 = (int (__thiscall *)(_DWORD, wchar_t *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))sub_10008865();
  if ( v9 )
    return v9(v9, a1, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest, a7, a8, a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}


/* sub_10008C8C  @0x10008c8c  size=10 */
char sub_10008C8C()
{
  hHeap = nullptr;
  return 1;
}


/* sub_10009041  @0x10009041  size=507 */
int __cdecl sub_10009041(int a1)
{
  struct __crt_signal_action_t *const *v1; // ebx
  void (__cdecl **global_action_nolock)(int); // eax
  char v3; // cl
  struct __crt_signal_action_t *const *v4; // eax
  struct __crt_signal_action_t *v6; // eax
  void (__cdecl *v7)(_DWORD); // edx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+14h] [ebp-34h]
  int v12; // [esp+18h] [ebp-30h]
  uintptr_t *v13; // [esp+24h] [ebp-24h]
  void (__cdecl *v14)(_DWORD); // [esp+28h] [ebp-20h]
  bool v15; // [esp+2Eh] [ebp-1Ah]
  char v16; // [esp+2Fh] [ebp-19h]

  v1 = nullptr;
  v11 = 0;
  v16 = 1;
  if ( a1 > 8 )
  {
    if ( a1 != 11 )
    {
      if ( a1 == 15 || a1 > 20 && a1 <= 22 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  else if ( a1 != 8 )
  {
    if ( a1 == 2 )
    {
LABEL_11:
      global_action_nolock = get_global_action_nolock(a1);
      goto LABEL_17;
    }
    if ( a1 != 4 )
    {
      if ( a1 == 6 )
        goto LABEL_11;
      goto LABEL_15;
    }
  }
  v4 = (struct __crt_signal_action_t *const *)__acrt_getptd_noexit();
  v1 = v4;
  if ( !v4 )
    return -1;
  v6 = siglookup(a1, *v4);
  if ( !v6 )
  {
LABEL_15:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  global_action_nolock = (void (__cdecl **)(int))((char *)v6 + 8);
  v3 = 0;
  v16 = 0;
LABEL_17:
  v13 = (uintptr_t *)global_action_nolock;
  v12 = 0;
  if ( v3 )
  {
    __acrt_lock(3);
    v3 = v16;
  }
  if ( v3 )
  {
    v7 = (void (__cdecl *)(_DWORD))__ROR4__(*v13 ^ __security_cookie, __security_cookie & 0x1F);
    v3 = v16;
  }
  else
  {
    v7 = (void (__cdecl *)(_DWORD))*v13;
  }
  v14 = v7;
  v15 = v7 == (void (__cdecl *)(_DWORD))1;
  if ( v7 == (void (__cdecl *)(_DWORD))1 )
    goto LABEL_38;
  if ( !v7 )
  {
    if ( v3 )
      __acrt_unlock(3);
    _exit(3);
  }
  if ( a1 == 8 || a1 == 11 || a1 == 4 )
  {
    v12 = *((_DWORD *)v1 + 1);
    *((_DWORD *)v1 + 1) = 0;
    if ( a1 != 8 )
      goto LABEL_33;
    v11 = *__fpecode();
    *__fpecode() = 140;
  }
  if ( a1 == 8 )
  {
    v8 = (int)*v1 + 36;
    v9 = (int)*v1 + 144;
    while ( v8 != v9 )
    {
      *(_DWORD *)(v8 + 8) = 0;
      v8 += 12;
    }
    goto LABEL_38;
  }
LABEL_33:
  *v13 = __security_cookie;
LABEL_38:
  if ( v16 )
    __acrt_unlock(3);
  if ( !v15 )
  {
    if ( a1 == 8 )
    {
      v10 = __acrt_getptd();
      ((void (__cdecl *)(int, _DWORD))v14)(8, *(_DWORD *)(v10 + 8));
    }
    else
    {
      v14(a1);
    }
    if ( a1 == 8 || a1 == 11 || a1 == 4 )
    {
      *((_DWORD *)v1 + 1) = v12;
      if ( a1 == 8 )
        *(_DWORD *)(__acrt_getptd() + 8) = v11;
    }
  }
  return 0;
}


/* sub_10009254  @0x10009254  size=15 */
int __cdecl sub_10009254(int a1)
{
  dword_1001730C = a1;
  return a1;
}


/* sub_1000951F  @0x1000951f  size=9 */
int sub_1000951F()
{
  return common_flush_all(1);
}


/* sub_100097C0  @0x100097c0  size=45 */
struct __crt_locale_data *__cdecl sub_100097C0(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10017310 )
  {
    result = (struct __crt_locale_data *)dword_100166E0;
    if ( (dword_100166E0 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)sub_10009BCE();
      *a2 = result;
    }
  }
  return result;
}


/* sub_100097ED  @0x100097ed  size=45 */
struct __crt_multibyte_data *__cdecl sub_100097ED(int a1, struct __crt_multibyte_data **a2)
{
  struct __crt_multibyte_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10016FF4 )
  {
    result = (struct __crt_multibyte_data *)dword_100166E0;
    if ( (dword_100166E0 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = sub_100082EB();
      *a2 = result;
    }
  }
  return result;
}


/* sub_100098AF  @0x100098af  size=11 */
__int32 sub_100098AF()
{
  return _InterlockedExchange(&dword_1001732C, 1);
}


/* sub_10009BCE  @0x10009bce  size=129 */
int sub_10009BCE()
{
  int v0; // eax
  int *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = (int *)(v0 + 76);
  if ( (dword_100166E0 & *(_DWORD *)(v0 + 848)) == 0 || (v2 = *v1) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1, dword_10017310);
    __acrt_unlock(4);
    if ( !v2 )
      abort();
  }
  return v2;
}


/* sub_10009C9F  @0x10009c9f  size=7 */
int sub_10009C9F()
{
  return dword_10017330;
}


/* sub_1000AB0F  @0x1000ab0f  size=938 */
DWORD *__cdecl sub_1000AB0F(DWORD *a1, int a2, char *a3, int a4)
{
  int v4; // eax
  int v5; // ebx
  int v6; // ecx
  const char *v7; // edi
  const char *v8; // esi
  size_t v9; // eax
  int v10; // edx
  size_t v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  size_t v15; // esi
  char *v16; // edi
  int v17; // edx
  int v18; // edi
  int v19; // esi
  int v20; // ecx
  unsigned int v21; // eax
  signed int v22; // ecx
  char v23; // dl
  int v24; // eax
  DWORD v25; // eax
  _BYTE *v26; // esi
  int v27; // edx
  char v28; // al
  const char *v29; // esi
  bool v30; // zf
  _BYTE *v31; // esi
  int v32; // edx
  char v33; // al
  int v34; // edx
  int v35; // ecx
  struct _Mbstatet *v37; // [esp+0h] [ebp-98h]
  unsigned int v38[2]; // [esp+Ch] [ebp-8Ch] BYREF
  _DWORD v39[2]; // [esp+14h] [ebp-84h] BYREF
  int v40; // [esp+1Ch] [ebp-7Ch]
  UINT CodePage; // [esp+20h] [ebp-78h]
  wchar_t v42[2]; // [esp+24h] [ebp-74h] BYREF
  HANDLE hFile; // [esp+28h] [ebp-70h]
  char *SrcCh; // [esp+2Ch] [ebp-6Ch]
  size_t v45; // [esp+30h] [ebp-68h]
  unsigned int v46; // [esp+34h] [ebp-64h]
  DWORD NumberOfBytesWritten; // [esp+38h] [ebp-60h] BYREF
  DWORD LastError; // [esp+3Ch] [ebp-5Ch]
  const char *v49; // [esp+40h] [ebp-58h]
  DWORD v50; // [esp+44h] [ebp-54h]
  int v51; // [esp+48h] [ebp-50h]
  int v52; // [esp+4Ch] [ebp-4Ch]
  wchar_t DstCh[2]; // [esp+50h] [ebp-48h] BYREF
  _DWORD v54[3]; // [esp+54h] [ebp-44h] BYREF
  char v55; // [esp+60h] [ebp-38h]
  const char *v56; // [esp+64h] [ebp-34h] BYREF
  size_t Size; // [esp+68h] [ebp-30h]
  __int16 v58; // [esp+6Ch] [ebp-2Ch] BYREF
  int cchWideChar; // [esp+70h] [ebp-28h]
  void *Src; // [esp+74h] [ebp-24h]
  unsigned __int8 v61; // [esp+7Bh] [ebp-1Dh]
  CHAR Buffer[8]; // [esp+7Ch] [ebp-1Ch] BYREF
  char v63[8]; // [esp+84h] [ebp-14h] BYREF
  _BYTE v64[8]; // [esp+8Ch] [ebp-Ch] BYREF

  SrcCh = a3;
  v51 = a2 >> 6;
  v4 = dword_100170F8[a2 >> 6];
  v52 = 56 * (a2 & 0x3F);
  hFile = *(HANDLE *)(v52 + v4 + 24);
  v46 = (unsigned int)&a3[a4];
  v5 = 0;
  CodePage = GetConsoleCP();
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v54, nullptr);
  LastError = 0;
  v6 = *(_DWORD *)(v54[1] + 8);
  v40 = v6;
  v49 = nullptr;
  v50 = 0;
  v7 = a3;
  Src = a3;
  if ( a3 >= &a3[a4] )
    goto LABEL_51;
  v8 = v49;
  while ( 1 )
  {
    HIBYTE(v58) = *v7;
    *(_DWORD *)DstCh = 0;
    cchWideChar = 1;
    v9 = dword_100170F8[v51];
    Size = v9;
    if ( v6 == 65001 )
    {
      v10 = v52;
      v11 = v52 + v9 + 46;
      v12 = 0;
      v45 = v11;
      do
      {
        if ( !*(_BYTE *)(v11 + v12) )
          break;
        ++v12;
      }
      while ( v12 < 5 );
      v13 = v46 - (_DWORD)Src;
      cchWideChar = v12;
      if ( v12 <= 0 )
      {
        v22 = byte_10016740[*(unsigned __int8 *)Src] + 1;
        Size = v22;
        if ( v22 <= v13 )
        {
          v16 = (char *)Src;
          v38[0] = 0;
          v38[1] = 0;
          v56 = (const char *)Src;
          cchWideChar = (v22 == 4) + 1;
          v21 = __crt_mbstring::__mbsrtowcs_utf8(
                  (__crt_mbstring *)DstCh,
                  (wchar_t *)&v56,
                  (const char **)cchWideChar,
                  (unsigned int)v38,
                  v37);
LABEL_20:
          if ( v21 == -1 )
            goto LABEL_51;
          v7 = &v16[Size - 1];
          goto LABEL_30;
        }
        if ( v13 <= 0 )
          goto LABEL_43;
        v31 = Src;
        do
        {
          v32 = v5 + v10;
          v33 = v31[v5++];
          *(_BYTE *)(v32 + dword_100170F8[v51] + 46) = v33;
          v10 = v52;
        }
        while ( v5 < v13 );
      }
      else
      {
        v56 = (const char *)(byte_10016740[*(unsigned __int8 *)(v52 + Size + 46)] + 1);
        Size = (size_t)&v56[-v12];
        if ( (int)&v56[-v12] <= v13 )
        {
          v14 = 0;
          v15 = v45;
          do
          {
            v64[v14] = *(_BYTE *)(v15 + v14);
            ++v14;
          }
          while ( v14 < v12 );
          v16 = (char *)Src;
          if ( (int)Size > 0 )
          {
            memmove_0(&v64[v12], Src, Size);
            v12 = cchWideChar;
          }
          if ( v12 > 0 )
          {
            v17 = cchWideChar;
            v18 = 0;
            v19 = v52;
            do
            {
              v20 = v19 + v18++;
              *(_BYTE *)(v20 + dword_100170F8[v51] + 46) = 0;
            }
            while ( v18 < v17 );
            v16 = (char *)Src;
          }
          v39[0] = 0;
          *(_DWORD *)v42 = v64;
          v39[1] = 0;
          cchWideChar = (v56 == (const char *)4) + 1;
          v21 = __crt_mbstring::__mbsrtowcs_utf8(
                  (__crt_mbstring *)DstCh,
                  v42,
                  (const char **)cchWideChar,
                  (unsigned int)v39,
                  v37);
          goto LABEL_20;
        }
        if ( v13 <= 0 )
          goto LABEL_43;
        v26 = Src;
        do
        {
          v27 = v12 + v5 + v10;
          v28 = v26[v5++];
          *(_BYTE *)(v27 + dword_100170F8[v51] + 46) = v28;
          v12 = cchWideChar;
          v10 = v52;
        }
        while ( v5 < v13 );
      }
      v8 = v49;
LABEL_43:
      v29 = &v8[v13];
LABEL_44:
      v30 = v55 == 0;
      v49 = v29;
      goto LABEL_52;
    }
    v23 = *(_BYTE *)(v52 + v9 + 45);
    if ( (v23 & 4) != 0 )
    {
      v63[0] = *(_BYTE *)(v52 + v9 + 46);
      v63[1] = *v7;
      *(_BYTE *)(v52 + Size + 45) = v23 & 0xFB;
      v24 = mbtowc(DstCh, v63, 2u);
      goto LABEL_29;
    }
    v61 = *v7;
    if ( (__pctype_func()[v61] & 0x8000u) == 0 )
    {
      v24 = mbtowc(DstCh, v7, 1u);
LABEL_29:
      if ( v24 == -1 )
        goto LABEL_51;
      goto LABEL_30;
    }
    v56 = v7 + 1;
    if ( (unsigned int)(v7 + 1) >= v46 )
    {
      v34 = v51;
      v35 = v52;
      *(_BYTE *)(v52 + dword_100170F8[v51] + 46) = v61;
      *(_BYTE *)(v35 + dword_100170F8[v34] + 45) |= 4u;
      v29 = v8 + 1;
      goto LABEL_44;
    }
    if ( mbtowc(DstCh, v7, 2u) == -1 )
      goto LABEL_51;
    v7 = v56;
LABEL_30:
    Src = (void *)++v7;
    v25 = __acrt_WideCharToMultiByte(CodePage, 0, DstCh, cchWideChar, Buffer, 5, 0, 0);
    v56 = (const char *)v25;
    if ( !v25 )
      goto LABEL_51;
    if ( !WriteFile(hFile, Buffer, v25, &NumberOfBytesWritten, nullptr) )
      break;
    v8 = &v7[v50 - (_DWORD)SrcCh];
    v49 = v8;
    if ( NumberOfBytesWritten < (unsigned int)v56 )
      goto LABEL_51;
    if ( HIBYTE(v58) == 10 )
    {
      v58 = 13;
      if ( !WriteFile(hFile, &v58, 1u, &NumberOfBytesWritten, nullptr) )
        break;
      if ( !NumberOfBytesWritten )
        goto LABEL_51;
      ++v50;
      v49 = ++v8;
    }
    if ( (unsigned int)v7 >= v46 )
      goto LABEL_51;
    v6 = v40;
  }
  LastError = GetLastError();
LABEL_51:
  v30 = v55 == 0;
LABEL_52:
  if ( !v30 )
    *(_DWORD *)(v54[0] + 848) &= ~2u;
  *a1 = LastError;
  a1[1] = (DWORD)v49;
  a1[2] = v50;
  return a1;
}


/* sub_1000B288  @0x1000b288  size=242 */
int __cdecl sub_1000B288(int FileHandle, int a2, int a3)
{
  int v3; // edi
  int v5; // [esp+10h] [ebp-20h]

  if ( FileHandle == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    return -1;
  }
  if ( FileHandle < 0
    || FileHandle >= (unsigned int)dword_100172F8
    || (v5 = 56 * (FileHandle & 0x3F), (*(_BYTE *)(dword_100170F8[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_100170F8[FileHandle >> 6] + v5 + 40) & 1) != 0 )
  {
    v3 = sub_1000B37A(FileHandle, a2, a3);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return v3;
}


/* sub_1000B37A  @0x1000b37a  size=482 */
int __cdecl sub_1000B37A(int FileHandle, const void *a2, DWORD a3)
{
  int v4; // edi
  int v5; // edx
  char v6; // bl
  bool v7; // cc
  _BYTE *v8; // ebx
  DWORD *v9; // eax
  DWORD *p_LastError; // esi
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v16; // ecx
  int *v17; // esi
  DWORD LastError; // [esp+Ch] [ebp-28h] BYREF
  DWORD NumberOfBytesWritten; // [esp+10h] [ebp-24h] BYREF
  int v20; // [esp+14h] [ebp-20h]
  DWORD v21; // [esp+18h] [ebp-1Ch]
  int v22; // [esp+1Ch] [ebp-18h]
  int v23; // [esp+20h] [ebp-14h]
  DWORD nNumberOfBytesToWrite; // [esp+24h] [ebp-10h]
  int v25; // [esp+28h] [ebp-Ch]
  int v26; // [esp+2Ch] [ebp-8h]
  LPCVOID lpBuffer; // [esp+30h] [ebp-4h]

  lpBuffer = a2;
  nNumberOfBytesToWrite = a3;
  if ( !a3 )
    return 0;
  if ( !a2
    || ((v4 = 56 * (FileHandle & 0x3F),
         v26 = FileHandle >> 6,
         v5 = dword_100170F8[FileHandle >> 6],
         v25 = v4,
         v6 = *(_BYTE *)(v5 + v4 + 41),
         v6 == 2)
     || v6 == 1)
    && (a3 & 1) != 0 )
  {
    *__doserrno() = 0;
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  if ( (*(_BYTE *)(v5 + v4 + 40) & 0x20) != 0 )
    _lseeki64_nolock(FileHandle, 0, 2u);
  v21 = 0;
  v22 = 0;
  v23 = 0;
  if ( write_requires_double_translation_nolock(FileHandle) )
  {
    if ( v6 )
    {
      v7 = (unsigned __int8)(v6 - 1) <= 1u;
      v8 = lpBuffer;
      if ( !v7 )
      {
LABEL_28:
        v11 = v26;
        v12 = v25;
        goto LABEL_29;
      }
      v9 = (DWORD *)write_double_translated_unicode_nolock(&LastError, lpBuffer, nNumberOfBytesToWrite);
    }
    else
    {
      v8 = lpBuffer;
      v9 = sub_1000AB0F(&LastError, FileHandle, (char *)lpBuffer, nNumberOfBytesToWrite);
    }
    goto LABEL_14;
  }
  v11 = v26;
  v12 = v25;
  v13 = dword_100170F8[v26];
  if ( *(char *)(v13 + v25 + 40) >= 0 )
  {
    v16 = *(void **)(v13 + v25 + 24);
    v8 = lpBuffer;
    LastError = 0;
    NumberOfBytesWritten = 0;
    v20 = 0;
    if ( !WriteFile(v16, lpBuffer, nNumberOfBytesToWrite, &NumberOfBytesWritten, nullptr) )
      LastError = GetLastError();
    p_LastError = &LastError;
    goto LABEL_27;
  }
  v14 = v6;
  v8 = lpBuffer;
  if ( !v14 )
  {
    v9 = (DWORD *)write_text_ansi_nolock(&LastError, FileHandle, lpBuffer, nNumberOfBytesToWrite);
    goto LABEL_14;
  }
  v15 = v14 - 1;
  if ( !v15 )
  {
    v9 = (DWORD *)write_text_utf8_nolock(&LastError, FileHandle, lpBuffer, nNumberOfBytesToWrite);
    goto LABEL_14;
  }
  if ( v15 == 1 )
  {
    v9 = (DWORD *)write_text_utf16le_nolock(&LastError, FileHandle, lpBuffer, nNumberOfBytesToWrite);
LABEL_14:
    p_LastError = v9;
LABEL_27:
    v21 = *p_LastError;
    v17 = (int *)(p_LastError + 1);
    v22 = *v17;
    v23 = v17[1];
    goto LABEL_28;
  }
LABEL_29:
  if ( v22 )
    return v22 - v23;
  if ( v21 )
  {
    if ( v21 == 5 )
    {
      *_errno() = 9;
      *__doserrno() = 5;
    }
    else
    {
      __acrt_errno_map_os_error(v21);
    }
    return -1;
  }
  if ( (*(_BYTE *)(dword_100170F8[v11] + v12 + 40) & 0x40) == 0 || *v8 != 26 )
  {
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return 0;
}


/* sub_1000BB4B  @0x1000bb4b  size=6 */
int sub_1000BB4B()
{
  return dword_1001733C;
}


/* sub_1000C170  @0x1000c170  size=31 */
BOOL sub_1000C170()
{
  char *v0; // ecx

  v0 = (char *)hConsoleOutput;
  if ( hConsoleOutput == (HANDLE)-2 )
  {
    __dcrt_lowio_initialize_console_output();
    v0 = (char *)hConsoleOutput;
  }
  return v0 + 1 != nullptr;
}


/* sub_1000C287  @0x1000c287  size=141 */
int __cdecl sub_1000C287(int a1)
{
  int v2; // [esp+4h] [ebp-10h] BYREF
  int *v3; // [esp+8h] [ebp-Ch] BYREF
  int v4; // [esp+Ch] [ebp-8h] BYREF

  if ( a1 == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_100172F8
      && (*(_BYTE *)(dword_100170F8[a1 >> 6] + 56 * (a1 & 0x3F) + 40) & 1) != 0 )
    {
      v4 = a1;
      v3 = &a1;
      v2 = a1;
      return __crt_seh_guarded_call<int>::operator()<_lambda_218ce3db14220d0be481dae8ef3383b6_,_lambda_628dfdc04ba53c8bfc02c9951375f3f5_ &,_lambda_57dc472bd5c9d5f3b2cbca59b8a843ae_>(
               &v2,
               &v3,
               &v4);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}


/* sub_1000C684  @0x1000c684  size=131 */
void __usercall sub_1000C684(char a1@<ch>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  if ( a1 && !isintTOS() )
    JUMPOUT(0x1000CAB0);
  _ffexpm1();
  JUMPOUT(0x1000C9B4);
}


/* IsProcessorFeaturePresent  @0x1000dbba  size=6 */
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}


/* sub_1000E7A3  @0x1000e7a3  size=54 */
unsigned __int64 __usercall sub_1000E7A3@<edx:eax>(unsigned __int64 a1@<edx:eax>)
{
  int v1; // ecx
  bool v2; // cc
  char v3; // cl

  v1 = HIDWORD(a1) >> 20;
  HIDWORD(a1) = HIDWORD(a1) & 0xFFFFF | 0x100000;
  v2 = v1 < 1075;
  v3 = v1 - 51;
  if ( v2 )
    return a1 >> (-v3 & 0x1F);
  else
    return a1 << (v3 & 0x1F);
}


/* sub_1000E960  @0x1000e960  size=73 */
void __cdecl sub_1000E960()
{
  void *v0; // eax
  _DWORD *v1; // esi
  void *v2; // eax

  v0 = dword_10017364;
  v1 = *((_DWORD **)dword_10017364 + 1);
  if ( !*((_BYTE *)v1 + 13) )
  {
    do
    {
      sub_10001A50((int)&dword_10017364, (void **)v1[2]);
      v2 = v1;
      v1 = (_DWORD *)*v1;
      sub_10002436(v2);
    }
    while ( !*((_BYTE *)v1 + 13) );
    v0 = dword_10017364;
  }
  sub_10002436(v0);
}


/* decompiled 97 functions, 0 failed, 1.4s */
