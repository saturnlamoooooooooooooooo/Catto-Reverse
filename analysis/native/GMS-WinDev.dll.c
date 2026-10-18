/* GMS-WinDev.dll  sha256=fc86c4f3e9bcb57928cab5ebc43c99093b78c97246d400447aa1b4a5bd524266 */
/* IDA 9.3, image base 0x10000000, 476 functions */

/* ---------------- exports ---------------- */
export  ord=1    0x10001260  delay
export  ord=2    0x10001320  file_copy_win
export  ord=3    0x10001490  file_text_get
export  ord=4    0x10001560  file_text_put
export  ord=5    0x10001280  get_color_win
export  ord=6    0x100013a0  shell_do
export  ord=7    0x100013d0  shell_do_at
export  ord=8    0x10001400  shell_do_ext
export  ord=9    0x10001430  shell_execute
export  ord=10   0x10001460  shell_execute_at
export  ord=11   0x10001370  shell_open
export  ord=12   0x10001350  window_set_caption_ext
export  ord=268441844 0x100018f4  DllEntryPoint

/* ---------------- imports ---------------- */
import  KERNEL32: DecodePointer, RaiseException, CopyFileA, UnhandledExceptionFilter, SetUnhandledExceptionFilter, GetCurrentProcess, TerminateProcess, IsProcessorFeaturePresent, QueryPerformanceCounter, GetCurrentProcessId, GetCurrentThreadId, GetSystemTimeAsFileTime, InitializeSListHead, IsDebuggerPresent, GetStartupInfoW, GetModuleHandleW, GetLastError, GetModuleFileNameW, InterlockedFlushSList, InitializeCriticalSectionAndSpinCount, TlsAlloc, TlsGetValue, TlsSetValue, TlsFree, FreeLibrary, GetProcAddress, LoadLibraryExW, RtlUnwind, SetLastError, EnterCriticalSection, LeaveCriticalSection, DeleteCriticalSection, ReadFile, ExitProcess, GetModuleHandleExW, MultiByteToWideChar, WideCharToMultiByte, HeapFree, HeapAlloc, SetFilePointerEx, GetConsoleMode, ReadConsoleW, GetStdHandle, GetFileType, CloseHandle, LCMapStringW, IsValidCodePage, GetACP, GetOEMCP, GetCPInfo, GetEnvironmentStringsW, FreeEnvironmentStringsW, GetProcessHeap, GetCommandLineA, GetCommandLineW, GetStringTypeW, SetStdHandle, FlushFileBuffers, WriteFile, GetConsoleCP, CreateFileW, HeapSize, HeapReAlloc, WriteConsoleW, SetEndOfFile, Sleep
import  USER32: SetWindowTextA, GetActiveWindow
import  COMDLG32: ChooseColorA
import  SHELL32: ShellExecuteA
import  ADVAPI32: SystemFunction036

/* ---------------- strings (len>=5) ---------------- */
str  0x1000f1b8  'advapi32'
str  0x1000f1cc  'api-ms-win-core-fibers-l1-1-1'
str  0x1000f208  'api-ms-win-core-synch-l1-2-0'
str  0x1000f244  'kernel32'
str  0x1000f25c  'EventRegister'
str  0x1000f270  'EventSetInformation'
str  0x1000f288  'EventUnregister'
str  0x1000f29c  'EventWriteTransfer'
str  0x1000f2b8  'FlsAlloc'
str  0x1000f2cc  'FlsFree'
str  0x1000f2dc  'FlsGetValue'
str  0x1000f2f0  'FlsSetValue'
str  0x1000f304  'InitializeCriticalSectionEx'
str  0x1000f4b0  '__based('
str  0x1000f4bc  '__cdecl'
str  0x1000f4c4  '__pascal'
str  0x1000f4d0  '__stdcall'
str  0x1000f4dc  '__thiscall'
str  0x1000f4e8  '__fastcall'
str  0x1000f4f4  '__vectorcall'
str  0x1000f504  '__clrcall'
str  0x1000f510  '__eabi'
str  0x1000f518  '__ptr64'
str  0x1000f520  '__restrict'
str  0x1000f52c  '__unaligned'
str  0x1000f538  'restrict('
str  0x1000f54c  ' delete'
str  0x1000f570  'operator'
str  0x1000f5f8  "`vftable'"
str  0x1000f604  "`vbtable'"
str  0x1000f610  "`vcall'"
str  0x1000f618  "`typeof'"
str  0x1000f624  "`local static guard'"
str  0x1000f63c  "`string'"
str  0x1000f648  "`vbase destructor'"
str  0x1000f65c  "`vector deleting destructor'"
str  0x1000f67c  "`default constructor closure'"
str  0x1000f69c  "`scalar deleting destructor'"
str  0x1000f6bc  "`vector constructor iterator'"
str  0x1000f6dc  "`vector destructor iterator'"
str  0x1000f6fc  "`vector vbase constructor iterator'"
str  0x1000f720  "`virtual displacement map'"
str  0x1000f73c  "`eh vector constructor iterator'"
str  0x1000f760  "`eh vector destructor iterator'"
str  0x1000f780  "`eh vector vbase constructor iterator'"
str  0x1000f7a8  "`copy constructor closure'"
str  0x1000f7c4  "`udt returning'"
str  0x1000f7d8  '`RTTI'
str  0x1000f7e0  "`local vftable'"
str  0x1000f7f0  "`local vftable constructor closure'"
str  0x1000f814  ' new[]'
str  0x1000f81c  ' delete[]'
str  0x1000f828  "`omni callsig'"
str  0x1000f838  "`placement delete closure'"
str  0x1000f854  "`placement delete[] closure'"
str  0x1000f874  "`managed vector constructor iterator'"
str  0x1000f89c  "`managed vector destructor iterator'"
str  0x1000f8c4  "`eh vector copy constructor iterator'"
str  0x1000f8ec  "`eh vector vbase copy constructor iterator'"
str  0x1000f918  "`dynamic initializer for '"
str  0x1000f934  "`dynamic atexit destructor for '"
str  0x1000f958  "`vector copy constructor iterator'"
str  0x1000f97c  "`vector vbase copy constructor iterator'"
str  0x1000f9a8  "`managed vector copy constructor iterator'"
str  0x1000f9d4  "`local static thread guard'"
str  0x1000f9f0  'operator "" '
str  0x1000fa00  " Type Descriptor'"
str  0x1000fa14  ' Base Class Descriptor at ('
str  0x1000fa30  " Base Class Array'"
str  0x1000fa44  " Class Hierarchy Descriptor'"
str  0x1000fa64  " Complete Object Locator'"
str  0x1000fb1c  'mscoree.dll'
str  0x1000fb34  'CorExitProcess'
str  0x1000fd2c  'UTF-8'
str  0x1000fd34  'UTF-16LEUNICODE'
str  0x1000fd98  'api-ms-win-appmodel-runtime-l1-1-1'
str  0x1000fde0  'api-ms-win-core-datetime-l1-1-1'
str  0x1000fe20  'api-ms-win-core-file-l2-1-1'
str  0x1000fe58  'api-ms-win-core-localization-l1-2-1'
str  0x1000fea0  'api-ms-win-core-localization-obsolete-l1-2-0'
str  0x1000ff00  'api-ms-win-core-processthreads-l1-1-2'
str  0x1000ff4c  'api-ms-win-core-string-l1-1-0'
str  0x1000ff88  'api-ms-win-core-sysinfo-l1-2-1'
str  0x1000ffc8  'api-ms-win-core-winrt-l1-1-0'
str  0x10010004  'api-ms-win-core-xstate-l2-1-0'
str  0x10010040  'api-ms-win-rtcore-ntuser-window-l1-1-0'
str  0x10010090  'api-ms-win-security-systemfunctions-l1-1-0'
str  0x100100e8  'ext-ms-win-kernel32-package-current-l1-1-0'
str  0x10010140  'ext-ms-win-ntuser-dialogbox-l1-1-0'
str  0x10010188  'ext-ms-win-ntuser-windowstation-l1-1-0'
str  0x100101d8  'user32'
str  0x100101ec  'AreFileApisANSI'
str  0x10010224  'GetCurrentPackageId'
str  0x10010248  'LCMapStringEx'
str  0x10010260  'LocaleNameToLCID'
str  0x10010284  'ja-JP'
str  0x10010290  'zh-CN'
str  0x1001029c  'ko-KR'
str  0x100102a8  'zh-TW'
str  0x100102d0  'Sunday'
str  0x100102d8  'Monday'
str  0x100102e0  'Tuesday'
str  0x100102e8  'Wednesday'
str  0x100102f4  'Thursday'
str  0x10010300  'Friday'
str  0x10010308  'Saturday'
str  0x10010344  'January'
str  0x1001034c  'February'
str  0x10010358  'March'
str  0x10010360  'April'
str  0x10010378  'August'
str  0x10010380  'September'
str  0x1001038c  'October'
str  0x10010394  'November'
str  0x100103a0  'December'
str  0x100103b4  'MM/dd/yy'
str  0x100103c0  'dddd, MMMM dd, yyyy'
str  0x100103d4  'HH:mm:ss'
str  0x10010418  'Sunday'
str  0x10010428  'Monday'
str  0x10010438  'Tuesday'
str  0x10010448  'Wednesday'
str  0x1001045c  'Thursday'
str  0x10010470  'Friday'
str  0x10010480  'Saturday'
str  0x100104f4  'January'
str  0x10010504  'February'
str  0x10010518  'March'
str  0x10010524  'April'
str  0x10010548  'August'
str  0x10010558  'September'
str  0x1001056c  'October'
str  0x1001057c  'November'
str  0x10010590  'December'
str  0x100105b4  'MM/dd/yy'
str  0x100105c8  'dddd, MMMM dd, yyyy'
str  0x100105f0  'HH:mm:ss'
str  0x10010604  'en-US'
str  0x10010878  '         (((((                  H'
str  0x10010aff  '\x07\x08\t\n\x0b'
str  0x10010b18  ' !"#$%&\'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~'
str  0x10010c7f  '\x07\x08\t\n\x0b'
str  0x10010c98  ' !"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~'
str  0x100114b0  'zh-CHS'
str  0x100116b0  'ar-SA'
str  0x100116bc  'bg-BG'
str  0x100116c8  'ca-ES'
str  0x100116d4  'cs-CZ'
str  0x100116e0  'da-DK'
str  0x100116ec  'de-DE'
str  0x100116f8  'el-GR'
str  0x10011704  'fi-FI'
str  0x10011710  'fr-FR'
str  0x1001171c  'he-IL'
str  0x10011728  'hu-HU'
str  0x10011734  'is-IS'
str  0x10011740  'it-IT'
str  0x1001174c  'nl-NL'
str  0x10011758  'nb-NO'
str  0x10011764  'pl-PL'
str  0x10011770  'pt-BR'
str  0x1001177c  'ro-RO'
str  0x10011788  'ru-RU'
str  0x10011794  'hr-HR'
str  0x100117a0  'sk-SK'
str  0x100117ac  'sq-AL'
str  0x100117b8  'sv-SE'
str  0x100117c4  'th-TH'
str  0x100117d0  'tr-TR'
str  0x100117dc  'ur-PK'
str  0x100117e8  'id-ID'
str  0x100117f4  'uk-UA'
str  0x10011800  'be-BY'
str  0x1001180c  'sl-SI'
str  0x10011818  'et-EE'
str  0x10011824  'lv-LV'
str  0x10011830  'lt-LT'
str  0x1001183c  'fa-IR'
str  0x10011848  'vi-VN'
str  0x10011854  'hy-AM'
str  0x10011860  'az-AZ-Latn'
str  0x10011878  'eu-ES'
str  0x10011884  'mk-MK'
str  0x10011890  'tn-ZA'
str  0x1001189c  'xh-ZA'
str  0x100118a8  'zu-ZA'
str  0x100118b4  'af-ZA'
str  0x100118c0  'ka-GE'
str  0x100118cc  'fo-FO'
str  0x100118d8  'hi-IN'
str  0x100118e4  'mt-MT'
str  0x100118f0  'se-NO'
str  0x100118fc  'ms-MY'
str  0x10011908  'kk-KZ'
str  0x10011914  'ky-KG'
str  0x10011920  'sw-KE'
str  0x1001192c  'uz-UZ-Latn'
str  0x10011944  'tt-RU'
str  0x10011950  'bn-IN'
str  0x1001195c  'pa-IN'
str  0x10011968  'gu-IN'
str  0x10011974  'ta-IN'
str  0x10011980  'te-IN'
str  0x1001198c  'kn-IN'
str  0x10011998  'ml-IN'
str  0x100119a4  'mr-IN'
str  0x100119b0  'sa-IN'
str  0x100119bc  'mn-MN'
str  0x100119c8  'cy-GB'
str  0x100119d4  'gl-ES'
str  0x100119e0  'kok-IN'
str  0x100119f0  'syr-SY'
str  0x10011a00  'div-MV'
str  0x10011a10  'quz-BO'
str  0x10011a20  'ns-ZA'
str  0x10011a2c  'mi-NZ'
str  0x10011a38  'ar-IQ'
str  0x10011a44  'de-CH'
str  0x10011a50  'en-GB'
str  0x10011a5c  'es-MX'
str  0x10011a68  'fr-BE'
str  0x10011a74  'it-CH'
str  0x10011a80  'nl-BE'
str  0x10011a8c  'nn-NO'
str  0x10011a98  'pt-PT'
str  0x10011aa4  'sr-SP-Latn'
str  0x10011abc  'sv-FI'
str  0x10011ac8  'az-AZ-Cyrl'
str  0x10011ae0  'se-SE'
str  0x10011aec  'ms-BN'
str  0x10011af8  'uz-UZ-Cyrl'
str  0x10011b10  'quz-EC'
str  0x10011b20  'ar-EG'
str  0x10011b2c  'zh-HK'
str  0x10011b38  'de-AT'
str  0x10011b44  'en-AU'
str  0x10011b50  'es-ES'
str  0x10011b5c  'fr-CA'
str  0x10011b68  'sr-SP-Cyrl'
str  0x10011b80  'se-FI'
str  0x10011b8c  'quz-PE'
str  0x10011b9c  'ar-LY'
str  0x10011ba8  'zh-SG'
str  0x10011bb4  'de-LU'
str  0x10011bc0  'en-CA'
str  0x10011bcc  'es-GT'
str  0x10011bd8  'fr-CH'
str  0x10011be4  'hr-BA'
str  0x10011bf0  'smj-NO'
str  0x10011c00  'ar-DZ'
str  0x10011c0c  'zh-MO'
str  0x10011c18  'de-LI'
str  0x10011c24  'en-NZ'
str  0x10011c30  'es-CR'
str  0x10011c3c  'fr-LU'
str  0x10011c48  'bs-BA-Latn'
str  0x10011c60  'smj-SE'
str  0x10011c70  'ar-MA'
str  0x10011c7c  'en-IE'
str  0x10011c88  'es-PA'
str  0x10011c94  'fr-MC'
str  0x10011ca0  'sr-BA-Latn'
str  0x10011cb8  'sma-NO'
str  0x10011cc8  'ar-TN'
str  0x10011cd4  'en-ZA'
str  0x10011ce0  'es-DO'
str  0x10011cec  'sr-BA-Cyrl'
str  0x10011d04  'sma-SE'
str  0x10011d14  'ar-OM'
str  0x10011d20  'en-JM'
str  0x10011d2c  'es-VE'
str  0x10011d38  'sms-FI'
str  0x10011d48  'ar-YE'
str  0x10011d54  'en-CB'
str  0x10011d60  'es-CO'
str  0x10011d6c  'smn-FI'
str  0x10011d7c  'ar-SY'
str  0x10011d88  'en-BZ'
str  0x10011d94  'es-PE'
str  0x10011da0  'ar-JO'
str  0x10011dac  'en-TT'
str  0x10011db8  'es-AR'
str  0x10011dc4  'ar-LB'
str  0x10011dd0  'en-ZW'
str  0x10011ddc  'es-EC'
str  0x10011de8  'ar-KW'
str  0x10011df4  'en-PH'
str  0x10011e00  'es-CL'
str  0x10011e0c  'ar-AE'
str  0x10011e18  'es-UY'
str  0x10011e24  'ar-BH'
str  0x10011e30  'es-PY'
str  0x10011e3c  'ar-QA'
str  0x10011e48  'es-BO'
str  0x10011e54  'es-SV'
str  0x10011e60  'es-HN'
str  0x10011e6c  'es-NI'
str  0x10011e78  'es-PR'
str  0x10011e84  'zh-CHT'
str  0x100125c0  'af-za'
str  0x100125cc  'ar-ae'
str  0x100125d8  'ar-bh'
str  0x100125e4  'ar-dz'
str  0x100125f0  'ar-eg'
str  0x100125fc  'ar-iq'
str  0x10012608  'ar-jo'
str  0x10012614  'ar-kw'
str  0x10012620  'ar-lb'
str  0x1001262c  'ar-ly'
str  0x10012638  'ar-ma'
str  0x10012644  'ar-om'
str  0x10012650  'ar-qa'
str  0x1001265c  'ar-sa'
str  0x10012668  'ar-sy'
str  0x10012674  'ar-tn'
str  0x10012680  'ar-ye'
str  0x1001268c  'az-az-cyrl'
str  0x100126a4  'az-az-latn'
str  0x100126bc  'be-by'
str  0x100126c8  'bg-bg'
str  0x100126d4  'bn-in'
str  0x100126e0  'bs-ba-latn'
str  0x100126f8  'ca-es'
str  0x10012704  'cs-cz'
str  0x10012710  'cy-gb'
str  0x1001271c  'da-dk'
str  0x10012728  'de-at'
str  0x10012734  'de-ch'
str  0x10012740  'de-de'
str  0x1001274c  'de-li'
str  0x10012758  'de-lu'
str  0x10012764  'div-mv'
str  0x10012774  'el-gr'
str  0x10012780  'en-au'
str  0x1001278c  'en-bz'
str  0x10012798  'en-ca'
str  0x100127a4  'en-cb'
str  0x100127b0  'en-gb'
str  0x100127bc  'en-ie'
str  0x100127c8  'en-jm'
str  0x100127d4  'en-nz'
str  0x100127e0  'en-ph'
str  0x100127ec  'en-tt'
str  0x100127f8  'en-us'
str  0x10012804  'en-za'
str  0x10012810  'en-zw'
str  0x1001281c  'es-ar'
str  0x10012828  'es-bo'
str  0x10012834  'es-cl'
str  0x10012840  'es-co'
str  0x1001284c  'es-cr'
str  0x10012858  'es-do'
str  0x10012864  'es-ec'
str  0x10012870  'es-es'
str  0x1001287c  'es-gt'
str  0x10012888  'es-hn'
str  0x10012894  'es-mx'
str  0x100128a0  'es-ni'
str  0x100128ac  'es-pa'
str  0x100128b8  'es-pe'
str  0x100128c4  'es-pr'
str  0x100128d0  'es-py'
str  0x100128dc  'es-sv'
str  0x100128e8  'es-uy'
str  0x100128f4  'es-ve'
str  0x10012900  'et-ee'
str  0x1001290c  'eu-es'
str  0x10012918  'fa-ir'
str  0x10012924  'fi-fi'
str  0x10012930  'fo-fo'
str  0x1001293c  'fr-be'
str  0x10012948  'fr-ca'
str  0x10012954  'fr-ch'
str  0x10012960  'fr-fr'
str  0x1001296c  'fr-lu'
str  0x10012978  'fr-mc'
str  0x10012984  'gl-es'
str  0x10012990  'gu-in'
str  0x1001299c  'he-il'
str  0x100129a8  'hi-in'
str  0x100129b4  'hr-ba'
str  0x100129c0  'hr-hr'
str  0x100129cc  'hu-hu'
str  0x100129d8  'hy-am'
str  0x100129e4  'id-id'
str  0x100129f0  'is-is'
str  0x100129fc  'it-ch'
str  0x10012a08  'it-it'
str  0x10012a14  'ja-jp'
str  0x10012a20  'ka-ge'
str  0x10012a2c  'kk-kz'
str  0x10012a38  'kn-in'
str  0x10012a44  'kok-in'
str  0x10012a54  'ko-kr'
str  0x10012a60  'ky-kg'
str  0x10012a6c  'lt-lt'
str  0x10012a78  'lv-lv'
str  0x10012a84  'mi-nz'
str  0x10012a90  'mk-mk'
str  0x10012a9c  'ml-in'
str  0x10012aa8  'mn-mn'
str  0x10012ab4  'mr-in'
str  0x10012ac0  'ms-bn'
str  0x10012acc  'ms-my'
str  0x10012ad8  'mt-mt'
str  0x10012ae4  'nb-no'
str  0x10012af0  'nl-be'
str  0x10012afc  'nl-nl'
str  0x10012b08  'nn-no'
str  0x10012b14  'ns-za'
str  0x10012b20  'pa-in'
str  0x10012b2c  'pl-pl'
str  0x10012b38  'pt-br'
str  0x10012b44  'pt-pt'
str  0x10012b50  'quz-bo'
str  0x10012b60  'quz-ec'
str  0x10012b70  'quz-pe'
str  0x10012b80  'ro-ro'
str  0x10012b8c  'ru-ru'
str  0x10012b98  'sa-in'
str  0x10012ba4  'se-fi'
str  0x10012bb0  'se-no'
str  0x10012bbc  'se-se'
str  0x10012bc8  'sk-sk'
str  0x10012bd4  'sl-si'
str  0x10012be0  'sma-no'
str  0x10012bf0  'sma-se'
str  0x10012c00  'smj-no'
str  0x10012c10  'smj-se'
str  0x10012c20  'smn-fi'
str  0x10012c30  'sms-fi'
str  0x10012c40  'sq-al'
str  0x10012c4c  'sr-ba-cyrl'
str  0x10012c64  'sr-ba-latn'
str  0x10012c7c  'sr-sp-cyrl'
str  0x10012c94  'sr-sp-latn'
str  0x10012cac  'sv-fi'
str  0x10012cb8  'sv-se'
str  0x10012cc4  'sw-ke'
str  0x10012cd0  'syr-sy'
str  0x10012ce0  'ta-in'
str  0x10012cec  'te-in'
str  0x10012cf8  'th-th'
str  0x10012d04  'tn-za'
str  0x10012d10  'tr-tr'
str  0x10012d1c  'tt-ru'
str  0x10012d28  'uk-ua'
str  0x10012d34  'ur-pk'
str  0x10012d40  'uz-uz-cyrl'
str  0x10012d58  'uz-uz-latn'
str  0x10012d70  'vi-vn'
str  0x10012d7c  'xh-za'
str  0x10012d88  'zh-chs'
str  0x10012d98  'zh-cht'
str  0x10012da8  'zh-cn'
str  0x10012db4  'zh-hk'
str  0x10012dc0  'zh-mo'
str  0x10012dcc  'zh-sg'
str  0x10012dd8  'zh-tw'
str  0x10012de4  'zu-za'
str  0x10012df0  'log10'
str  0x10012e48  'CONOUT$'
str  0x10013048  'log10'
str  0x100130eb  '\tQ*\x1b='
str  0x100131a7  '?5Wg4p'
str  0x1001326b  'BC .='
str  0x100133b9  '%S#[k'
str  0x1001340a  '"B <1='
str  0x1001343b  "#.X'="
str  0x100138c8  'atan2'
str  0x100138e4  'floor'
str  0x100138fc  'ldexp'
str  0x10013904  '_cabs'
str  0x1001390c  '_hypot'
str  0x1001391c  'frexp'
str  0x10013930  '_logb'
str  0x10013938  '_nextafter'
str  0x10013bd0  'InvokeMainViaCRT'
str  0x10013be1  '"Main Invoked."'
str  0x10013bf2  'FileName'
str  0x10013c0c  'ExitMainViaCRT'
str  0x10013c1b  '"Main Returned."'
str  0x10013c2d  'FileName'
str  0x10013c3a  'Microsoft.CRTProvider'
str  0x10013c70  '.text'
str  0x10013c80  '.text$mn'
str  0x10013c94  '.idata$5'
str  0x10013ca8  '.00cfg'
str  0x10013cb8  '.CRT$XCA'
str  0x10013ccc  '.CRT$XCZ'
str  0x10013ce0  '.CRT$XIA'
str  0x10013cf4  '.CRT$XIC'
str  0x10013d08  '.CRT$XIZ'
str  0x10013d1c  '.CRT$XPA'
str  0x10013d30  '.CRT$XPX'
str  0x10013d44  '.CRT$XPXA'
str  0x10013d58  '.CRT$XPZ'
str  0x10013d6c  '.CRT$XTA'
str  0x10013d80  '.CRT$XTZ'
str  0x10013d94  '.rdata'
str  0x10013da4  '.rdata$sxdata'
str  0x10013dbc  '.rdata$zETW0'
str  0x10013dd4  '.rdata$zETW1'
str  0x10013dec  '.rdata$zETW2'
str  0x10013e04  '.rdata$zETW9'
str  0x10013e1c  '.rdata$zzzdbg'
str  0x10013e34  '.rtc$IAA'
str  0x10013e48  '.rtc$IZZ'
str  0x10013e5c  '.rtc$TAA'
str  0x10013e70  '.rtc$TZZ'
str  0x10013e84  '.xdata$x'
str  0x10013e98  '.edata'
str  0x10013ea8  '.idata$2'
str  0x10013ebc  '.idata$3'
str  0x10013ed0  '.idata$4'
str  0x10013ee4  '.idata$6'
str  0x10013ef8  '.data'
str  0x10013f18  '.rsrc$01'
str  0x10013f2c  '.rsrc$02'
str  0x10014500  'GMS-WinDev.dll'
str  0x1001450f  'delay'
str  0x10014515  'file_copy_win'
str  0x10014523  'file_text_get'
str  0x10014531  'file_text_put'
str  0x1001453f  'get_color_win'
str  0x1001454d  'shell_do'
str  0x10014556  'shell_do_at'
str  0x10014562  'shell_do_ext'
str  0x1001456f  'shell_execute'
str  0x1001457d  'shell_execute_at'
str  0x1001458e  'shell_open'
str  0x10014599  'window_set_caption_ext'
str  0x1001475a  'Sleep'
str  0x10014762  'CopyFileA'
str  0x1001476c  'KERNEL32.dll'
str  0x1001477c  'SetWindowTextA'
str  0x1001478e  'GetActiveWindow'
str  0x1001479e  'USER32.dll'
str  0x100147ac  'ChooseColorA'
str  0x100147ba  'COMDLG32.dll'
str  0x100147ca  'ShellExecuteA'
str  0x100147d8  'SHELL32.dll'
str  0x100147e6  'UnhandledExceptionFilter'
str  0x10014802  'SetUnhandledExceptionFilter'
str  0x10014820  'GetCurrentProcess'
str  0x10014834  'TerminateProcess'
str  0x10014848  'IsProcessorFeaturePresent'
str  0x10014864  'QueryPerformanceCounter'
str  0x1001487e  'GetCurrentProcessId'
str  0x10014894  'GetCurrentThreadId'
str  0x100148aa  'GetSystemTimeAsFileTime'
str  0x100148c4  'InitializeSListHead'
str  0x100148da  'IsDebuggerPresent'
str  0x100148ee  'GetStartupInfoW'
str  0x10014900  'GetModuleHandleW'
str  0x10014914  'GetLastError'
str  0x10014924  'GetModuleFileNameW'
str  0x1001493a  'InterlockedFlushSList'
str  0x10014952  'InitializeCriticalSectionAndSpinCount'
str  0x1001497a  'TlsAlloc'
str  0x10014986  'TlsGetValue'
str  0x10014994  'TlsSetValue'
str  0x100149a2  'TlsFree'
str  0x100149ac  'FreeLibrary'
str  0x100149ba  'GetProcAddress'
str  0x100149cc  'LoadLibraryExW'
str  0x100149de  'RtlUnwind'
str  0x100149ea  'SetLastError'
str  0x100149fa  'EnterCriticalSection'
str  0x10014a12  'LeaveCriticalSection'
str  0x10014a2a  'DeleteCriticalSection'
str  0x10014a42  'ReadFile'
str  0x10014a4e  'ExitProcess'
str  0x10014a5c  'GetModuleHandleExW'
str  0x10014a72  'MultiByteToWideChar'
str  0x10014a88  'WideCharToMultiByte'
str  0x10014a9e  'HeapFree'
str  0x10014aaa  'HeapAlloc'
str  0x10014ab6  'SetFilePointerEx'
str  0x10014aca  'GetConsoleMode'
str  0x10014adc  'ReadConsoleW'
str  0x10014aec  'GetStdHandle'
str  0x10014afc  'GetFileType'
str  0x10014b0a  'CloseHandle'
str  0x10014b18  'LCMapStringW'
str  0x10014b28  'IsValidCodePage'
str  0x10014b3a  'GetACP'
str  0x10014b44  'GetOEMCP'
str  0x10014b50  'GetCPInfo'
str  0x10014b5c  'GetEnvironmentStringsW'
str  0x10014b76  'FreeEnvironmentStringsW'
str  0x10014b90  'GetProcessHeap'
str  0x10014ba2  'GetCommandLineA'
str  0x10014bb4  'GetCommandLineW'
str  0x10014bc6  'GetStringTypeW'
str  0x10014bd8  'SetStdHandle'
str  0x10014be8  'FlushFileBuffers'
str  0x10014bfc  'WriteFile'
str  0x10014c08  'GetConsoleCP'
str  0x10014c18  'CreateFileW'
str  0x10014c26  'HeapSize'
str  0x10014c32  'HeapReAlloc'
str  0x10014c40  'WriteConsoleW'
str  0x10014c50  'SetEndOfFile'
str  0x10014c60  'DecodePointer'
str  0x10014c70  'RaiseException'
str  0x10014c82  'SystemFunction036'
str  0x10014c94  'ADVAPI32.dll'
str  0x100153c2  '                          '
str  0x100154a9  'abcdefghijklmnopqrstuvwxyz'
str  0x100154c9  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
str  0x100155e2  '                          '
str  0x100156c2  'abcdefghijklmnopqrstuvwxyz'
str  0x100156e2  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'

/* ---------------- pseudocode ---------------- */
/* hex-rays available: True */

/* EXPORT delay  @0x10001260  size=24 */
double __cdecl delay(double a1)
{
  Sleep((unsigned int)a1);
  return 1.0;
}


/* EXPORT get_color_win  @0x10001280  size=149 */
double __cdecl get_color_win(double a1)
{
  struct tagCHOOSECOLORA v2; // [esp+8h] [ebp-28h] BYREF

  memset(&v2, 0, sizeof(v2));
  v2.lStructSize = 36;
  v2.hwndOwner = GetActiveWindow();
  v2.lpCustColors = (COLORREF *)&unk_100161E8;
  v2.Flags = 3;
  v2.rgbResult = (int)a1;
  if ( ChooseColorA(&v2) )
    return (double)v2.rgbResult;
  else
    return a1;
}


/* EXPORT file_copy_win  @0x10001320  size=42 */
double __cdecl file_copy_win(LPCSTR lpExistingFileName, LPCSTR lpNewFileName)
{
  return (double)CopyFileA(lpExistingFileName, lpNewFileName, 0);
}


/* EXPORT window_set_caption_ext  @0x10001350  size=32 */
double __cdecl window_set_caption_ext(__int64 a1, LPCSTR lpString)
{
  HWND v3; // [esp+Ch] [ebp+Ch]

  v3 = (HWND)(int)*(double *)&a1;
  SetWindowTextA(v3, lpString);
  return (double)(int)v3;
}


/* EXPORT shell_open  @0x10001370  size=41 */
double __cdecl shell_open(LPCSTR lpFile)
{
  return (double)(int)ShellExecuteA(nullptr, nullptr, lpFile, nullptr, nullptr, 1);
}


/* EXPORT shell_do  @0x100013a0  size=42 */
double __cdecl shell_do(LPCSTR lpOperation, LPCSTR lpFile)
{
  return (double)(int)ShellExecuteA(nullptr, lpOperation, lpFile, nullptr, nullptr, 1);
}


/* EXPORT shell_do_at  @0x100013d0  size=43 */
double __cdecl shell_do_at(LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpDirectory)
{
  return (double)(int)ShellExecuteA(nullptr, lpOperation, lpFile, nullptr, lpDirectory, 1);
}


/* EXPORT shell_do_ext  @0x10001400  size=44 */
double __cdecl shell_do_ext(LPCSTR lpOperation, LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory)
{
  return (double)(int)ShellExecuteA(nullptr, lpOperation, lpFile, lpParameters, lpDirectory, 1);
}


/* EXPORT shell_execute  @0x10001430  size=42 */
double __cdecl shell_execute(LPCSTR lpFile, LPCSTR lpParameters)
{
  return (double)(int)ShellExecuteA(nullptr, nullptr, lpFile, lpParameters, nullptr, 1);
}


/* EXPORT shell_execute_at  @0x10001460  size=43 */
double __cdecl shell_execute_at(LPCSTR lpFile, LPCSTR lpParameters, LPCSTR lpDirectory)
{
  return (double)(int)ShellExecuteA(nullptr, nullptr, lpFile, lpParameters, lpDirectory, 1);
}


/* EXPORT file_text_get  @0x10001490  size=198 */
_BYTE *__cdecl file_text_get(char *FileName)
{
  size_t v1; // edi
  void *v2; // eax
  void *v3; // esi
  _BYTE *result; // eax
  FILE *Stream; // [esp+4h] [ebp-8h] BYREF

  fopen_s(&Stream, FileName, "r");
  if ( Stream )
  {
    fseek(Stream, 0, 2);
    v1 = ftell(Stream);
    rewind(Stream);
    v2 = calloc(1u, __CFADD__(v1, 1) ? -1 : v1 + 1);
    v3 = v2;
    if ( v2 )
    {
      if ( !fread(v2, v1, 1u, Stream) )
      {
        j___free_base(v3);
        v3 = nullptr;
      }
    }
    fclose(Stream);
    if ( v3 )
      return v3;
  }
  result = calloc(1u, 1u);
  *result = 0;
  return result;
}


/* EXPORT file_text_put  @0x10001560  size=110 */
double __cdecl file_text_put(char *FileName, char *Buffer)
{
  BOOL v3; // [esp+Ch] [ebp-Ch]
  FILE *Stream; // [esp+10h] [ebp-8h] BYREF

  fopen_s(&Stream, FileName, "w");
  v3 = 0;
  if ( Stream )
  {
    v3 = fputs(Buffer, Stream) != 0;
    fclose(Stream);
  }
  return (double)v3;
}


/* EXPORT DllEntryPoint  @0x100018f4  size=35  [lib] */
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}


/* sub_10001AF8  @0x10001af8  size=13 */
char sub_10001AF8()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}


/* sub_10001B5B  @0x10001b5b  size=13 */
__vcrt_bool sub_10001B5B()
{
  __acrt_uninitialize_critical(0);
  return __vcrt_uninitialize_critical();
}


/* _DllMain@12  @0x10001df6  size=6 */
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return 1;
}


/* sub_10001DFC  @0x10001dfc  size=12 */
void sub_10001DFC()
{
  InitializeSListHead(&ListHead);
}


/* sub_10001E08  @0x10001e08  size=12 */
void __cdecl sub_10001E08()
{
  __std_type_info_destroy_list(&ListHead);
}


/* sub_10001E14  @0x10001e14  size=6 */
void *sub_10001E14()
{
  return &unk_10015C30;
}


/* sub_10001E1A  @0x10001e1a  size=6 */
void *sub_10001E1A()
{
  return &unk_10015C38;
}


/* sub_10001E3D  @0x10001e3d  size=6 */
void *sub_10001E3D()
{
  return &unk_1001622C;
}


/* sub_10001F5E  @0x10001f5e  size=8 */
void sub_10001F5E()
{
  dword_10015C40 = 0;
}


/* sub_10001F66  @0x10001f66  size=43 */
void sub_10001F66()
{
  ;
}


/* sub_10001F91  @0x10001f91  size=43 */
void __cdecl sub_10001F91()
{
  ;
}


/* j_@_guard_check_icall_nop@4  @0x10001fbc  size=6 */
// attributes: thunk
void _guard_check_icall_nop()
{
  ;
}


/* sub_1000235D  @0x1000235d  size=12 */
None

/* @_guard_check_icall_nop@4  @0x10002c2e  size=1 */
void _guard_check_icall_nop()
{
  ;
}


/* sub_10003A66  @0x10003a66  size=40 */
int __cdecl sub_10003A66(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<unsigned int>::operator()<_lambda_11b4f7b0d3157825a5656a18eba1ae27_,_lambda_b51c0495177f500e782686251704ae76_ &,_lambda_cf89b47920b5017557bfe891e78aca36_>(
           &v3,
           a2,
           &v4);
}


/* j___free_base  @0x10003bb7  size=5 */
// attributes: thunk
void __cdecl j___free_base(void *Block)
{
  _free_base(Block);
}


/* sub_10004287  @0x10004287  size=15 */
int __cdecl sub_10004287(int a1)
{
  dword_10015D08 = a1;
  return a1;
}


/* sub_100042BB  @0x100042bb  size=6 */
int sub_100042BB()
{
  return dword_10015D04;
}


/* sub_1000445A  @0x1000445a  size=27 */
void *__cdecl sub_1000445A(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10015D1C )
    return (void *)unknown_libname_8(*a1);
  return result;
}


/* sub_10004475  @0x10004475  size=27 */
void *__cdecl sub_10004475(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10015D18 )
    return (void *)unknown_libname_8(*a1);
  return result;
}


/* j_??$common_initialize_environment_nolock@D@@YAHXZ  @0x100044c7  size=5 */
// attributes: thunk
int common_initialize_environment_nolock<char>()
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}


/* sub_1000456E  @0x1000456e  size=40 */
int __cdecl sub_1000456E(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
           &v3,
           a2,
           &v4);
}


/* sub_10004596  @0x10004596  size=40 */
int __cdecl sub_10004596(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<char *>::operator()<_lambda_0fef6fff2b5e6b53303c9058db11ae1f_,_lambda_082c17da81b0962e08c0587ee0fac50c_ &,_lambda_fa6e051aed0a38726081083cc7c328e9_>(
           &v3,
           a2,
           &v4);
}


/* sub_1000483E  @0x1000483e  size=22 */
int __cdecl sub_1000483E(_onexit_t Function)
{
  return _register_onexit_function(&stru_10015D20, Function);
}


/* sub_100048D2  @0x100048d2  size=18 */
char sub_100048D2()
{
  unknown_libname_11(&off_10015790);
  return 1;
}


/* sub_100048FE  @0x100048fe  size=3 */
char sub_100048FE()
{
  return 1;
}


/* sub_10004901  @0x10004901  size=8 */
char sub_10004901()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}


/* sub_10004946  @0x10004946  size=9 */
__vcrt_bool sub_10004946()
{
  return __vcrt_uninitialize(0);
}


/* sub_10004E19  @0x10004e19  size=20 */
int __cdecl sub_10004E19(int a1)
{
  return unknown_libname_11(a1);
}


/* sub_10006093  @0x10006093  size=40 */
int __cdecl sub_10006093(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<int>::operator()<_lambda_123407a5e2ac06da108355a851863b7a_,_lambda_2fe9b910cf3cbf4a0ab98a02ba45b3ec_ &,_lambda_ae55bdf541ad94d75914d381c370e64d_>(
           &v3,
           a2,
           &v4);
}


/* sub_100060BB  @0x100060bb  size=127 */
int __cdecl sub_100060BB(int a1)
{
  int *v2; // [esp+4h] [ebp-4h] BYREF

  if ( a1 == -2 )
  {
    *__doserrno() = 0;
    *_errno() = 9;
  }
  else
  {
    if ( a1 >= 0
      && a1 < (unsigned int)dword_10015F48
      && ((int)lpCriticalSection[a1 >> 6][2 * (a1 & 0x3F) + 1].LockSemaphore & 1) != 0 )
    {
      v2 = &a1;
      return sub_10006093(a1, (int)&v2);
    }
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
  }
  return -1;
}


/* sub_1000641E  @0x1000641e  size=9 */
int sub_1000641E()
{
  return common_flush_all(1);
}


/* sub_10006DEB  @0x10006deb  size=40 */
int __cdecl sub_10006DEB(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_51b6e8b1eb166f2a3faf91f424b38130_,_lambda_6250bd4b2a391816dd638c3bf72b0bcb_ &,_lambda_0b5a4a3e68152e1d9b943535f5f47bed_>(
           &v3,
           a2,
           &v4);
}


/* sub_10006E13  @0x10006e13  size=40 */
int __cdecl sub_10006E13(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_3518db117f0e7cdb002338c5d3c47b6c_,_lambda_b2ea41f6bbb362cd97d94c6828d90b61_ &,_lambda_abdedf541bb04549bc734292b4a045d4_>(
           &v3,
           a2,
           &v4);
}


/* sub_10006E3B  @0x10006e3b  size=40 */
int __cdecl sub_10006E3B(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_5b71d36f03204c0beab531769a5b5694_,_lambda_be2b3da3f62db62e9dad5dc70221a656_ &,_lambda_8f9ce462984622f9bf76b59e2aaaf805_>(
           &v3,
           a2,
           &v4);
}


/* sub_10006E63  @0x10006e63  size=40 */
int __cdecl sub_10006E63(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_9df27f884b057bc3edfc946cb5b7cf47_,_lambda_e69574bed617af4e071282c136b37893_ &,_lambda_cc0d902bcbbeb830f749456577db4721_>(
           &v3,
           a2,
           &v4);
}


/* sub_10007760  @0x10007760  size=40 */
int __cdecl sub_10007760(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void>::operator()<_lambda_c76fdea48760d5f9368b465f31df4405_,_lambda_e378711a6f6581bf7f0efd7cdf97f5d9_ &,_lambda_e927a58b2a85c081d733e8c6192ae2d2_>(
           &v3,
           a2,
           &v4);
}


/* sub_10007FE3  @0x10007fe3  size=120 */
char *__cdecl sub_10007FE3(void *Block, unsigned int a2, unsigned int a3)
{
  size_t v4; // edi
  unsigned int v5; // esi
  char *v6; // ebx
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  savedregs = (int)&savedregs;
  if ( a2 && 0xFFFFFFE0 / a2 < a3 )
  {
    *_errno() = 12;
    return nullptr;
  }
  else
  {
    if ( Block )
      v4 = _msize(Block);
    else
      v4 = 0;
    v5 = a3 * a2;
    v6 = (char *)_realloc_base(Block, a3 * a2);
    if ( v6 )
    {
      if ( v4 < v5 )
        memset(&v6[v4], 0, v5 - v4);
    }
    return v6;
  }
}


/* sub_1000806C  @0x1000806c  size=10 */
char sub_1000806C()
{
  hHeap = nullptr;
  return 1;
}


/* sub_1000815F  @0x1000815f  size=20 */
int __cdecl sub_1000815F(int a1)
{
  return unknown_libname_11(a1);
}


/* sub_10008263  @0x10008263  size=40 */
int __cdecl sub_10008263(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<void (__cdecl *)(int)>::operator()<_lambda_a048d3beccc847880fc8490e18b82769_,_lambda_ec61778202f4f5fc7e7711acc23c3bca_ &,_lambda_f7496a158712204296dd6628a163878e_>(
           &v3,
           a2,
           &v4);
}


/* sub_10008571  @0x10008571  size=20 */
int __cdecl sub_10008571(int a1)
{
  return unknown_libname_11(a1);
}


/* sub_100085CE  @0x100085ce  size=6 */
int sub_100085CE()
{
  return dword_100161BC;
}


/* sub_10008869  @0x10008869  size=45 */
struct __crt_locale_data *__cdecl sub_10008869(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_100161B8 )
  {
    result = (struct __crt_locale_data *)dword_10015860;
    if ( (dword_10015860 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}


/* sub_10008896  @0x10008896  size=45 */
void *__cdecl sub_10008896(int a1, void **a2)
{
  void *result; // eax

  result = *a2;
  if ( *a2 != Block )
  {
    result = (void *)dword_10015860;
    if ( (dword_10015860 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (void *)__acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}


/* sub_100088C3  @0x100088c3  size=11 */
__int32 sub_100088C3()
{
  return _InterlockedExchange(&dword_100161C0, 1);
}


/* sub_10008FD4  @0x10008fd4  size=40 */
int __cdecl sub_10008FD4(int a1, int a2)
{
  int v3; // [esp+0h] [ebp-Ch] BYREF
  int v4; // [esp+4h] [ebp-8h] BYREF

  v4 = a1;
  v3 = a1;
  return __crt_seh_guarded_call<int>::operator()<_lambda_61cee617f5178ae960314fd4d05640a0_,_lambda_6978c1fb23f02e42e1d9e99668cc68aa_ &,_lambda_9cd88cf8ad10232537feb2133f08c833_>(
           &v3,
           a2,
           &v4);
}


/* sub_1000B1DD  @0x1000b1dd  size=6 */
int sub_1000B1DD()
{
  return dword_100161D0;
}


/* sub_1000B291  @0x1000b291  size=44 */
int __cdecl sub_1000B291(_DWORD *a1)
{
  if ( a1 )
  {
    *a1 = dword_100161D8;
    return 0;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 22;
  }
}


/* sub_1000B8B3  @0x1000b8b3  size=15 */
int sub_1000B8B3()
{
  dword_10016238 = IsProcessorFeaturePresent(0xAu);
  return 0;
}


/* sub_1000BB54  @0x1000bb54  size=116 */
void __usercall sub_1000BB54(char a1@<ch>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  if ( a1 && !isintTOS() )
    JUMPOUT(0x1000BF13);
  _ffexpm1();
  JUMPOUT(0x1000BE58);
}


/* IsProcessorFeaturePresent  @0x1000d042  size=6 */
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}


/* RtlUnwind  @0x1000d048  size=6 */
// attributes: thunk
void __stdcall RtlUnwind(PVOID TargetFrame, PVOID TargetIp, PEXCEPTION_RECORD ExceptionRecord, PVOID ReturnValue)
{
  __imp_RtlUnwind(TargetFrame, TargetIp, ExceptionRecord, ReturnValue);
}


/* SystemFunction036  @0x1000d04e  size=6 */
// attributes: thunk
BOOLEAN __stdcall SystemFunction036(PVOID RandomBuffer, ULONG RandomBufferLength)
{
  return __imp_SystemFunction036(RandomBuffer, RandomBufferLength);
}


/* decompiled 67 functions, 0 failed, 0.3s */
