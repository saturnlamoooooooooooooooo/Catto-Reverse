/* DialogModule.dll  sha256=ccce3ddf96d2f38aa63608d843dda7fc89914f7b9189fad6de720c4d83947369 */
/* IDA 9.3, image base 0x10000000, 889 functions */

/* ---------------- exports ---------------- */
export  ord=1    0x1000ca50  RegisterCallbacks
export  ord=2    0x1000c410  get_color
export  ord=3    0x1000c490  get_color_async
export  ord=4    0x1000c5a0  get_color_ext
export  ord=5    0x1000c680  get_color_ext_async
export  ord=6    0x1000c190  get_directory
export  ord=7    0x1000c2b0  get_directory_alt
export  ord=8    0x1000c2c0  get_directory_alt_async
export  ord=9    0x1000c1a0  get_directory_async
export  ord=10   0x1000b4f0  get_integer
export  ord=11   0x1000b520  get_integer_async
export  ord=12   0x1000b770  get_open_filename
export  ord=13   0x1000b780  get_open_filename_async
export  ord=14   0x1000b8d0  get_open_filename_ext
export  ord=15   0x1000b8f0  get_open_filename_ext_async
export  ord=16   0x1000bad0  get_open_filenames
export  ord=17   0x1000bae0  get_open_filenames_async
export  ord=18   0x1000bc30  get_open_filenames_ext
export  ord=19   0x1000bc50  get_open_filenames_ext_async
export  ord=20   0x1000b630  get_passcode
export  ord=21   0x1000b660  get_passcode_async
export  ord=22   0x1000b380  get_password
export  ord=23   0x1000b3a0  get_password_async
export  ord=24   0x1000be30  get_save_filename
export  ord=25   0x1000be40  get_save_filename_async
export  ord=26   0x1000bf90  get_save_filename_ext
export  ord=27   0x1000bfb0  get_save_filename_ext_async
export  ord=28   0x1000b210  get_string
export  ord=29   0x1000b230  get_string_async
export  ord=30   0x1000af20  show_attempt
export  ord=31   0x1000af80  show_attempt_async
export  ord=32   0x1000b090  show_error
export  ord=33   0x1000b100  show_error_async
export  ord=34   0x1000a960  show_message
export  ord=35   0x1000a9c0  show_message_async
export  ord=36   0x1000aad0  show_message_cancelable
export  ord=37   0x1000ab30  show_message_cancelable_async
export  ord=38   0x1000ac40  show_question
export  ord=39   0x1000aca0  show_question_async
export  ord=40   0x1000adb0  show_question_cancelable
export  ord=41   0x1000ae10  show_question_cancelable_async
export  ord=42   0x1000c970  widget_get_button_name
export  ord=43   0x1000c7d0  widget_get_caption
export  ord=44   0x1000c820  widget_get_icon
export  ord=45   0x1000c930  widget_get_owner
export  ord=46   0x1000c950  widget_get_system
export  ord=47   0x1000c990  widget_set_button_name
export  ord=48   0x1000c7f0  widget_set_caption
export  ord=49   0x1000c830  widget_set_icon
export  ord=50   0x1000c940  widget_set_owner
export  ord=51   0x1000c960  widget_set_system
export  ord=268494965 0x1000e875  DllEntryPoint

/* ---------------- imports ---------------- */
import  KERNEL32: RaiseException, DecodePointer, DeleteCriticalSection, GetModuleHandleW, WideCharToMultiByte, WriteConsoleW, CreateFileW, SetStdHandle, GetStringTypeW, GetConsoleMode, GetLastError, WriteFile, FlushFileBuffers, GetProcessHeap, FreeEnvironmentStringsW, GetEnvironmentStringsW, GetCommandLineW, GetCommandLineA, GetCPInfo, GetOEMCP, GetACP, IsValidCodePage, GetModuleHandleA, MultiByteToWideChar, GetCurrentThreadId, InitializeCriticalSectionEx, GetConsoleCP, GetFullPathNameW, FindNextFileW, FindFirstFileExW, FindClose, SetFilePointerEx, HeapReAlloc, HeapSize, LCMapStringW, GetFileType, GetStdHandle, HeapAlloc, HeapFree, ExitThread, GetModuleHandleExW, ExitProcess, RtlUnwind, LocalFree, IsDebuggerPresent, OutputDebugStringW, EnterCriticalSection, LeaveCriticalSection, CloseHandle, WaitForSingleObjectEx, SwitchToThread, QueryPerformanceCounter, SetLastError, InitializeCriticalSectionAndSpinCount, CreateEventW, TlsAlloc, TlsGetValue, TlsSetValue, TlsFree, GetSystemTimeAsFileTime, GetProcAddress, SetEvent, ResetEvent, UnhandledExceptionFilter, SetUnhandledExceptionFilter, GetCurrentProcess, TerminateProcess, IsProcessorFeaturePresent, GetStartupInfoW, GetCurrentProcessId, InitializeSListHead, CreateThread, EncodePointer, GetCurrentThread, GetThreadTimes, FreeLibrary, FreeLibraryAndExitThread, GetModuleFileNameW, LoadLibraryExW, InterlockedFlushSList
import  USER32: GetDesktopWindow, LoadIconA, UnhookWindowsHookEx, MoveWindow, GetClassLongW, EnableWindow, GetForegroundWindow, SendDlgItemMessageW, SetDlgItemTextW, PostMessageW, GetWindowRect, MessageBoxW, PostMessageA, SendMessageW, CallNextHookEx, SetWindowTextW, SetWindowsHookExA
import  GDI32: DeleteObject
import  COMDLG32: GetSaveFileNameW, ChooseColorW, GetOpenFileNameW
import  SHELL32: SHBrowseForFolderW, SHGetPathFromIDListW
import  ole32: CLSIDFromProgID, CoCreateInstance, CoUninitialize, CoInitialize, CoTaskMemFree
import  OLEAUT32: SysAllocString, SysFreeString, VariantInit, VariantClear, VariantCopy, VariantChangeType
import  SHLWAPI: PathFileExistsW
import  gdiplus: GdipFree, GdipCloneImage, GdipAlloc, GdipDisposeImage, GdipCreateHICONFromBitmap, GdipCreateBitmapFromFile

/* ---------------- strings (len>=5) ---------------- */
str  0x100242e8  'ERROR : Unable to initialize critical section in CAtlBaseModule\n'
str  0x10024378  'Unknown exception'
str  0x10024398  'bad allocation'
str  0x10024410  'device or resource busy'
str  0x10024428  'invalid argument'
str  0x1002443c  'no such process'
str  0x1002444c  'not enough memory'
str  0x10024460  'operation not permitted'
str  0x10024478  'resource deadlock would occur'
str  0x10024498  'resource unavailable try again'
str  0x100244f0  'generic'
str  0x100244f8  'unknown error'
str  0x100249e0  'address family not supported'
str  0x10024a00  'address in use'
str  0x10024a10  'address not available'
str  0x10024a28  'already connected'
str  0x10024a3c  'argument list too long'
str  0x10024a54  'argument out of domain'
str  0x10024a6c  'bad address'
str  0x10024a78  'bad file descriptor'
str  0x10024a8c  'bad message'
str  0x10024a98  'broken pipe'
str  0x10024aa4  'connection aborted'
str  0x10024ab8  'connection already in progress'
str  0x10024ad8  'connection refused'
str  0x10024aec  'connection reset'
str  0x10024b00  'cross device link'
str  0x10024b14  'destination address required'
str  0x10024b34  'directory not empty'
str  0x10024b48  'executable format error'
str  0x10024b60  'file exists'
str  0x10024b6c  'file too large'
str  0x10024b7c  'filename too long'
str  0x10024b90  'function not supported'
str  0x10024ba8  'host unreachable'
str  0x10024bbc  'identifier removed'
str  0x10024bd0  'illegal byte sequence'
str  0x10024be8  'inappropriate io control operation'
str  0x10024c0c  'interrupted'
str  0x10024c18  'invalid seek'
str  0x10024c28  'io error'
str  0x10024c34  'is a directory'
str  0x10024c44  'message size'
str  0x10024c54  'network down'
str  0x10024c64  'network reset'
str  0x10024c74  'network unreachable'
str  0x10024c88  'no buffer space'
str  0x10024c98  'no child process'
str  0x10024cac  'no link'
str  0x10024cb4  'no lock available'
str  0x10024cc8  'no message available'
str  0x10024ce0  'no message'
str  0x10024cec  'no protocol option'
str  0x10024d00  'no space on device'
str  0x10024d14  'no stream resources'
str  0x10024d28  'no such device or address'
str  0x10024d44  'no such device'
str  0x10024d54  'no such file or directory'
str  0x10024d70  'not a directory'
str  0x10024d80  'not a socket'
str  0x10024d90  'not a stream'
str  0x10024da0  'not connected'
str  0x10024db0  'not supported'
str  0x10024dc0  'operation canceled'
str  0x10024dd4  'operation in progress'
str  0x10024dec  'operation not supported'
str  0x10024e04  'operation would block'
str  0x10024e1c  'owner dead'
str  0x10024e28  'permission denied'
str  0x10024e3c  'protocol error'
str  0x10024e4c  'protocol not supported'
str  0x10024e64  'read only file system'
str  0x10024e7c  'result out of range'
str  0x10024e90  'state not recoverable'
str  0x10024ea8  'stream timeout'
str  0x10024eb8  'text file busy'
str  0x10024ec8  'timed out'
str  0x10024ed4  'too many files open in system'
str  0x10024ef4  'too many files open'
str  0x10024f08  'too many links'
str  0x10024f18  'too many symbolic link levels'
str  0x10024f38  'value too large'
str  0x10024f48  'wrong protocol type'
str  0x10024f5c  'kernel32.dll'
str  0x10024f78  'FlsAlloc'
str  0x10024f84  'FlsFree'
str  0x10024f8c  'FlsGetValue'
str  0x10024f98  'FlsSetValue'
str  0x10024fa4  'InitializeCriticalSectionEx'
str  0x10024fc0  'InitOnceExecuteOnce'
str  0x10024fd4  'CreateEventExW'
str  0x10024fe4  'CreateSemaphoreW'
str  0x10024ff8  'CreateSemaphoreExW'
str  0x1002500c  'CreateThreadpoolTimer'
str  0x10025024  'SetThreadpoolTimer'
str  0x10025038  'WaitForThreadpoolTimerCallbacks'
str  0x10025058  'CloseThreadpoolTimer'
str  0x10025070  'CreateThreadpoolWait'
str  0x10025088  'SetThreadpoolWait'
str  0x1002509c  'CloseThreadpoolWait'
str  0x100250b0  'FlushProcessWriteBuffers'
str  0x100250cc  'FreeLibraryWhenCallbackReturns'
str  0x100250ec  'GetCurrentProcessorNumber'
str  0x10025108  'CreateSymbolicLinkW'
str  0x1002511c  'GetCurrentPackageId'
str  0x10025130  'GetTickCount64'
str  0x10025140  'GetFileInformationByHandleEx'
str  0x10025160  'SetFileInformationByHandle'
str  0x1002517c  'GetSystemTimePreciseAsFileTime'
str  0x1002519c  'InitializeConditionVariable'
str  0x100251b8  'WakeConditionVariable'
str  0x100251d0  'WakeAllConditionVariable'
str  0x100251ec  'SleepConditionVariableCS'
str  0x10025208  'InitializeSRWLock'
str  0x1002521c  'AcquireSRWLockExclusive'
str  0x10025234  'TryAcquireSRWLockExclusive'
str  0x10025250  'ReleaseSRWLockExclusive'
str  0x10025268  'SleepConditionVariableSRW'
str  0x10025284  'CreateThreadpoolWork'
str  0x1002529c  'SubmitThreadpoolWork'
str  0x100252b4  'CloseThreadpoolWork'
str  0x100252c8  'CompareStringEx'
str  0x100252d8  'GetLocaleInfoEx'
str  0x100252e8  'LCMapStringEx'
str  0x100252f8  'api-ms-win-core-synch-l1-2-0.dll'
str  0x1002535c  'bad array new length'
str  0x1002537c  'SchedulerKind'
str  0x1002538c  'MaxConcurrency'
str  0x1002539c  'MinConcurrency'
str  0x100253ac  'TargetOversubscriptionFactor'
str  0x100253cc  'LocalContextCacheSize'
str  0x100253e4  'ContextStackSize'
str  0x100253f8  'ContextPriority'
str  0x10025408  'SchedulingProtocol'
str  0x1002541c  'DynamicProgressFeedback'
str  0x10025434  'WinRTInitialization'
str  0x10025448  'MaxPolicyElementKey'
str  0x1002545c  'RoInitialize'
str  0x1002546c  'RoUninitialize'
str  0x1002548f  'rLp>B'
str  0x1002551f  '1eaB@'
str  0x10025708  'bad exception'
str  0x100258b8  '__based('
str  0x100258c4  '__cdecl'
str  0x100258cc  '__pascal'
str  0x100258d8  '__stdcall'
str  0x100258e4  '__thiscall'
str  0x100258f0  '__fastcall'
str  0x100258fc  '__vectorcall'
str  0x1002590c  '__clrcall'
str  0x10025918  '__eabi'
str  0x10025920  '__swift_1'
str  0x1002592c  '__swift_2'
str  0x10025938  '__ptr64'
str  0x10025940  '__restrict'
str  0x1002594c  '__unaligned'
str  0x10025958  'restrict('
str  0x1002596c  ' delete'
str  0x10025990  'operator'
str  0x10025a14  "`vftable'"
str  0x10025a20  "`vbtable'"
str  0x10025a2c  "`vcall'"
str  0x10025a34  "`typeof'"
str  0x10025a40  "`local static guard'"
str  0x10025a58  "`string'"
str  0x10025a64  "`vbase destructor'"
str  0x10025a78  "`vector deleting destructor'"
str  0x10025a98  "`default constructor closure'"
str  0x10025ab8  "`scalar deleting destructor'"
str  0x10025ad8  "`vector constructor iterator'"
str  0x10025af8  "`vector destructor iterator'"
str  0x10025b18  "`vector vbase constructor iterator'"
str  0x10025b3c  "`virtual displacement map'"
str  0x10025b58  "`eh vector constructor iterator'"
str  0x10025b7c  "`eh vector destructor iterator'"
str  0x10025b9c  "`eh vector vbase constructor iterator'"
str  0x10025bc4  "`copy constructor closure'"
str  0x10025be0  "`udt returning'"
str  0x10025bf4  '`RTTI'
str  0x10025bfc  "`local vftable'"
str  0x10025c0c  "`local vftable constructor closure'"
str  0x10025c30  ' new[]'
str  0x10025c38  ' delete[]'
str  0x10025c44  "`omni callsig'"
str  0x10025c54  "`placement delete closure'"
str  0x10025c70  "`placement delete[] closure'"
str  0x10025c90  "`managed vector constructor iterator'"
str  0x10025cb8  "`managed vector destructor iterator'"
str  0x10025ce0  "`eh vector copy constructor iterator'"
str  0x10025d08  "`eh vector vbase copy constructor iterator'"
str  0x10025d34  "`dynamic initializer for '"
str  0x10025d50  "`dynamic atexit destructor for '"
str  0x10025d74  "`vector copy constructor iterator'"
str  0x10025d98  "`vector vbase copy constructor iterator'"
str  0x10025dc4  "`managed vector copy constructor iterator'"
str  0x10025df0  "`local static thread guard'"
str  0x10025e0c  'operator "" '
str  0x10025e1c  'operator co_await'
str  0x10025e30  'operator<=>'
str  0x10025e3c  " Type Descriptor'"
str  0x10025e50  ' Base Class Descriptor at ('
str  0x10025e6c  " Base Class Array'"
str  0x10025e80  " Class Hierarchy Descriptor'"
str  0x10025ea0  " Complete Object Locator'"
str  0x10025ec8  'api-ms-win-core-fibers-l1-1-1'
str  0x10025f04  'api-ms-win-core-synch-l1-2-0'
str  0x10025f40  'kernel32'
str  0x10025f54  'api-ms-'
str  0x10025f8c  'mscoree.dll'
str  0x10025fa4  'CorExitProcess'
str  0x10026104  '[aOni*{'
str  0x100261db  'eLK(w'
str  0x10026247  '\x08FEMh'
str  0x100262e5  '~ $s%r'
str  0x100262f3  '\x07@b;zO]'
str  0x1002640c  'iu+-,'
str  0x1002647d  'obwQ4'
str  0x100266cf  'v2!L.2'
str  0x10026852  '^<V7w'
str  0x10026980  'minkernel\\crts\\ucrt\\inc\\corecrt_internal_strtox.h'
str  0x100269e8  '__crt_strtox::floating_point_value::as_double'
str  0x10026a44  '_is_double'
str  0x10026a60  '__crt_strtox::floating_point_value::as_float'
str  0x10026abc  '!_is_double'
str  0x10026b31  '( 8PX\x07\x08'
str  0x10026b39  '700WP\x07'
str  0x10026b48  '\x08`h````'
str  0x10026b51  'xpxxxx\x08\x07\x08\x07'
str  0x10026b95  "('8PW"
str  0x10026b9e  '700PP'
str  0x10026bb0  '`h`hhh\x08\x08\x07xwpwpp\x08\x08'
str  0x10026bcc  '(null)'
str  0x10026bdc  '(null)'
str  0x10026f78  '         (((((                  H'
str  0x100271ff  '\x07\x08\t\n\x0b'
str  0x10027218  ' !"#$%&\'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~'
str  0x1002737f  '\x07\x08\t\n\x0b'
str  0x10027398  ' !"#$%&\'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~'
str  0x100275f8  'Sunday'
str  0x10027600  'Monday'
str  0x10027608  'Tuesday'
str  0x10027610  'Wednesday'
str  0x1002761c  'Thursday'
str  0x10027628  'Friday'
str  0x10027630  'Saturday'
str  0x1002766c  'January'
str  0x10027674  'February'
str  0x10027680  'March'
str  0x10027688  'April'
str  0x100276a0  'August'
str  0x100276a8  'September'
str  0x100276b4  'October'
str  0x100276bc  'November'
str  0x100276c8  'December'
str  0x100276dc  'MM/dd/yy'
str  0x100276e8  'dddd, MMMM dd, yyyy'
str  0x100276fc  'HH:mm:ss'
str  0x10027740  'Sunday'
str  0x10027750  'Monday'
str  0x10027760  'Tuesday'
str  0x10027770  'Wednesday'
str  0x10027784  'Thursday'
str  0x10027798  'Friday'
str  0x100277a8  'Saturday'
str  0x1002781c  'January'
str  0x1002782c  'February'
str  0x10027840  'March'
str  0x1002784c  'April'
str  0x10027870  'August'
str  0x10027880  'September'
str  0x10027894  'October'
str  0x100278a4  'November'
str  0x100278b8  'December'
str  0x100278dc  'MM/dd/yy'
str  0x100278f0  'dddd, MMMM dd, yyyy'
str  0x10027918  'HH:mm:ss'
str  0x1002792c  'en-US'
str  0x10027988  'NAN(SNAN)'
str  0x10027994  'nan(snan)'
str  0x100279a0  'NAN(IND)'
str  0x100279ac  'nan(ind)'
str  0x100279b8  'e+000'
str  0x10027a10  'api-ms-win-core-datetime-l1-1-1'
str  0x10027a50  'api-ms-win-core-file-l1-2-2'
str  0x10027a88  'api-ms-win-core-localization-l1-2-1'
str  0x10027ad0  'api-ms-win-core-localization-obsolete-l1-2-0'
str  0x10027b30  'api-ms-win-core-processthreads-l1-1-2'
str  0x10027b7c  'api-ms-win-core-string-l1-1-0'
str  0x10027bb8  'api-ms-win-core-sysinfo-l1-2-1'
str  0x10027bf8  'api-ms-win-core-winrt-l1-1-0'
str  0x10027c34  'api-ms-win-core-xstate-l2-1-0'
str  0x10027c70  'api-ms-win-rtcore-ntuser-window-l1-1-0'
str  0x10027cc0  'api-ms-win-security-systemfunctions-l1-1-0'
str  0x10027d18  'ext-ms-win-ntuser-dialogbox-l1-1-0'
str  0x10027d60  'ext-ms-win-ntuser-windowstation-l1-1-0'
str  0x10027db0  'advapi32'
str  0x10027dc4  'ntdll'
str  0x10027dd0  'api-ms-win-appmodel-runtime-l1-1-2'
str  0x10027e18  'user32'
str  0x10027e28  'ext-ms-'
str  0x10027e3c  'AreFileApisANSI'
str  0x10027e84  'LocaleNameToLCID'
str  0x10027ea4  'AppPolicyGetProcessTerminationMethod'
str  0x10027ed0  'AppPolicyGetThreadInitializationType'
str  0x10027f08  'ja-JP'
str  0x10027f14  'zh-CN'
str  0x10027f20  'ko-KR'
str  0x10027f2c  'zh-TW'
str  0x100281fc  '1#INF'
str  0x10028204  '1#QNAN'
str  0x1002820c  '1#SNAN'
str  0x10028214  '1#IND'
str  0x10028958  'zh-CHS'
str  0x10028b50  'ar-SA'
str  0x10028b5c  'bg-BG'
str  0x10028b68  'ca-ES'
str  0x10028b74  'cs-CZ'
str  0x10028b80  'da-DK'
str  0x10028b8c  'de-DE'
str  0x10028b98  'el-GR'
str  0x10028ba4  'fi-FI'
str  0x10028bb0  'fr-FR'
str  0x10028bbc  'he-IL'
str  0x10028bc8  'hu-HU'
str  0x10028bd4  'is-IS'
str  0x10028be0  'it-IT'
str  0x10028bec  'nl-NL'
str  0x10028bf8  'nb-NO'
str  0x10028c04  'pl-PL'
str  0x10028c10  'pt-BR'
str  0x10028c1c  'ro-RO'
str  0x10028c28  'ru-RU'
str  0x10028c34  'hr-HR'
str  0x10028c40  'sk-SK'
str  0x10028c4c  'sq-AL'
str  0x10028c58  'sv-SE'
str  0x10028c64  'th-TH'
str  0x10028c70  'tr-TR'
str  0x10028c7c  'ur-PK'
str  0x10028c88  'id-ID'
str  0x10028c94  'uk-UA'
str  0x10028ca0  'be-BY'
str  0x10028cac  'sl-SI'
str  0x10028cb8  'et-EE'
str  0x10028cc4  'lv-LV'
str  0x10028cd0  'lt-LT'
str  0x10028cdc  'fa-IR'
str  0x10028ce8  'vi-VN'
str  0x10028cf4  'hy-AM'
str  0x10028d00  'az-AZ-Latn'
str  0x10028d18  'eu-ES'
str  0x10028d24  'mk-MK'
str  0x10028d30  'tn-ZA'
str  0x10028d3c  'xh-ZA'
str  0x10028d48  'zu-ZA'
str  0x10028d54  'af-ZA'
str  0x10028d60  'ka-GE'
str  0x10028d6c  'fo-FO'
str  0x10028d78  'hi-IN'
str  0x10028d84  'mt-MT'
str  0x10028d90  'se-NO'
str  0x10028d9c  'ms-MY'
str  0x10028da8  'kk-KZ'
str  0x10028db4  'ky-KG'
str  0x10028dc0  'sw-KE'
str  0x10028dcc  'uz-UZ-Latn'
str  0x10028de4  'tt-RU'
str  0x10028df0  'bn-IN'
str  0x10028dfc  'pa-IN'
str  0x10028e08  'gu-IN'
str  0x10028e14  'ta-IN'
str  0x10028e20  'te-IN'
str  0x10028e2c  'kn-IN'
str  0x10028e38  'ml-IN'
str  0x10028e44  'mr-IN'
str  0x10028e50  'sa-IN'
str  0x10028e5c  'mn-MN'
str  0x10028e68  'cy-GB'
str  0x10028e74  'gl-ES'
str  0x10028e80  'kok-IN'
str  0x10028e90  'syr-SY'
str  0x10028ea0  'div-MV'
str  0x10028eb0  'quz-BO'
str  0x10028ec0  'ns-ZA'
str  0x10028ecc  'mi-NZ'
str  0x10028ed8  'ar-IQ'
str  0x10028ee4  'de-CH'
str  0x10028ef0  'en-GB'
str  0x10028efc  'es-MX'
str  0x10028f08  'fr-BE'
str  0x10028f14  'it-CH'
str  0x10028f20  'nl-BE'
str  0x10028f2c  'nn-NO'
str  0x10028f38  'pt-PT'
str  0x10028f44  'sr-SP-Latn'
str  0x10028f5c  'sv-FI'
str  0x10028f68  'az-AZ-Cyrl'
str  0x10028f80  'se-SE'
str  0x10028f8c  'ms-BN'
str  0x10028f98  'uz-UZ-Cyrl'
str  0x10028fb0  'quz-EC'
str  0x10028fc0  'ar-EG'
str  0x10028fcc  'zh-HK'
str  0x10028fd8  'de-AT'
str  0x10028fe4  'en-AU'
str  0x10028ff0  'es-ES'
str  0x10028ffc  'fr-CA'
str  0x10029008  'sr-SP-Cyrl'
str  0x10029020  'se-FI'
str  0x1002902c  'quz-PE'
str  0x1002903c  'ar-LY'
str  0x10029048  'zh-SG'
str  0x10029054  'de-LU'
str  0x10029060  'en-CA'
str  0x1002906c  'es-GT'
str  0x10029078  'fr-CH'
str  0x10029084  'hr-BA'
str  0x10029090  'smj-NO'
str  0x100290a0  'ar-DZ'
str  0x100290ac  'zh-MO'
str  0x100290b8  'de-LI'
str  0x100290c4  'en-NZ'
str  0x100290d0  'es-CR'
str  0x100290dc  'fr-LU'
str  0x100290e8  'bs-BA-Latn'
str  0x10029100  'smj-SE'
str  0x10029110  'ar-MA'
str  0x1002911c  'en-IE'
str  0x10029128  'es-PA'
str  0x10029134  'fr-MC'
str  0x10029140  'sr-BA-Latn'
str  0x10029158  'sma-NO'
str  0x10029168  'ar-TN'
str  0x10029174  'en-ZA'
str  0x10029180  'es-DO'
str  0x1002918c  'sr-BA-Cyrl'
str  0x100291a4  'sma-SE'
str  0x100291b4  'ar-OM'
str  0x100291c0  'en-JM'
str  0x100291cc  'es-VE'
str  0x100291d8  'sms-FI'
str  0x100291e8  'ar-YE'
str  0x100291f4  'en-CB'
str  0x10029200  'es-CO'
str  0x1002920c  'smn-FI'
str  0x1002921c  'ar-SY'
str  0x10029228  'en-BZ'
str  0x10029234  'es-PE'
str  0x10029240  'ar-JO'
str  0x1002924c  'en-TT'
str  0x10029258  'es-AR'
str  0x10029264  'ar-LB'
str  0x10029270  'en-ZW'
str  0x1002927c  'es-EC'
str  0x10029288  'ar-KW'
str  0x10029294  'en-PH'
str  0x100292a0  'es-CL'
str  0x100292ac  'ar-AE'
str  0x100292b8  'es-UY'
str  0x100292c4  'ar-BH'
str  0x100292d0  'es-PY'
str  0x100292dc  'ar-QA'
str  0x100292e8  'es-BO'
str  0x100292f4  'es-SV'
str  0x10029300  'es-HN'
str  0x1002930c  'es-NI'
str  0x10029318  'es-PR'
str  0x10029324  'zh-CHT'
str  0x10029a60  'af-za'
str  0x10029a6c  'ar-ae'
str  0x10029a78  'ar-bh'
str  0x10029a84  'ar-dz'
str  0x10029a90  'ar-eg'
str  0x10029a9c  'ar-iq'
str  0x10029aa8  'ar-jo'
str  0x10029ab4  'ar-kw'
str  0x10029ac0  'ar-lb'
str  0x10029acc  'ar-ly'
str  0x10029ad8  'ar-ma'
str  0x10029ae4  'ar-om'
str  0x10029af0  'ar-qa'
str  0x10029afc  'ar-sa'
str  0x10029b08  'ar-sy'
str  0x10029b14  'ar-tn'
str  0x10029b20  'ar-ye'
str  0x10029b2c  'az-az-cyrl'
str  0x10029b44  'az-az-latn'
str  0x10029b5c  'be-by'
str  0x10029b68  'bg-bg'
str  0x10029b74  'bn-in'
str  0x10029b80  'bs-ba-latn'
str  0x10029b98  'ca-es'
str  0x10029ba4  'cs-cz'
str  0x10029bb0  'cy-gb'
str  0x10029bbc  'da-dk'
str  0x10029bc8  'de-at'
str  0x10029bd4  'de-ch'
str  0x10029be0  'de-de'
str  0x10029bec  'de-li'
str  0x10029bf8  'de-lu'
str  0x10029c04  'div-mv'
str  0x10029c14  'el-gr'
str  0x10029c20  'en-au'
str  0x10029c2c  'en-bz'
str  0x10029c38  'en-ca'
str  0x10029c44  'en-cb'
str  0x10029c50  'en-gb'
str  0x10029c5c  'en-ie'
str  0x10029c68  'en-jm'
str  0x10029c74  'en-nz'
str  0x10029c80  'en-ph'
str  0x10029c8c  'en-tt'
str  0x10029c98  'en-us'
str  0x10029ca4  'en-za'
str  0x10029cb0  'en-zw'
str  0x10029cbc  'es-ar'
str  0x10029cc8  'es-bo'
str  0x10029cd4  'es-cl'
str  0x10029ce0  'es-co'
str  0x10029cec  'es-cr'
str  0x10029cf8  'es-do'
str  0x10029d04  'es-ec'
str  0x10029d10  'es-es'
str  0x10029d1c  'es-gt'
str  0x10029d28  'es-hn'
str  0x10029d34  'es-mx'
str  0x10029d40  'es-ni'
str  0x10029d4c  'es-pa'
str  0x10029d58  'es-pe'
str  0x10029d64  'es-pr'
str  0x10029d70  'es-py'
str  0x10029d7c  'es-sv'
str  0x10029d88  'es-uy'
str  0x10029d94  'es-ve'
str  0x10029da0  'et-ee'
str  0x10029dac  'eu-es'
str  0x10029db8  'fa-ir'
str  0x10029dc4  'fi-fi'
str  0x10029dd0  'fo-fo'
str  0x10029ddc  'fr-be'
str  0x10029de8  'fr-ca'
str  0x10029df4  'fr-ch'
str  0x10029e00  'fr-fr'
str  0x10029e0c  'fr-lu'
str  0x10029e18  'fr-mc'
str  0x10029e24  'gl-es'
str  0x10029e30  'gu-in'
str  0x10029e3c  'he-il'
str  0x10029e48  'hi-in'
str  0x10029e54  'hr-ba'
str  0x10029e60  'hr-hr'
str  0x10029e6c  'hu-hu'
str  0x10029e78  'hy-am'
str  0x10029e84  'id-id'
str  0x10029e90  'is-is'
str  0x10029e9c  'it-ch'
str  0x10029ea8  'it-it'
str  0x10029eb4  'ja-jp'
str  0x10029ec0  'ka-ge'
str  0x10029ecc  'kk-kz'
str  0x10029ed8  'kn-in'
str  0x10029ee4  'kok-in'
str  0x10029ef4  'ko-kr'
str  0x10029f00  'ky-kg'
str  0x10029f0c  'lt-lt'
str  0x10029f18  'lv-lv'
str  0x10029f24  'mi-nz'
str  0x10029f30  'mk-mk'
str  0x10029f3c  'ml-in'
str  0x10029f48  'mn-mn'
str  0x10029f54  'mr-in'
str  0x10029f60  'ms-bn'
str  0x10029f6c  'ms-my'
str  0x10029f78  'mt-mt'
str  0x10029f84  'nb-no'
str  0x10029f90  'nl-be'
str  0x10029f9c  'nl-nl'
str  0x10029fa8  'nn-no'
str  0x10029fb4  'ns-za'
str  0x10029fc0  'pa-in'
str  0x10029fcc  'pl-pl'
str  0x10029fd8  'pt-br'
str  0x10029fe4  'pt-pt'
str  0x10029ff0  'quz-bo'
str  0x1002a000  'quz-ec'
str  0x1002a010  'quz-pe'
str  0x1002a020  'ro-ro'
str  0x1002a02c  'ru-ru'
str  0x1002a038  'sa-in'
str  0x1002a044  'se-fi'
str  0x1002a050  'se-no'
str  0x1002a05c  'se-se'
str  0x1002a068  'sk-sk'
str  0x1002a074  'sl-si'
str  0x1002a080  'sma-no'
str  0x1002a090  'sma-se'
str  0x1002a0a0  'smj-no'
str  0x1002a0b0  'smj-se'
str  0x1002a0c0  'smn-fi'
str  0x1002a0d0  'sms-fi'
str  0x1002a0e0  'sq-al'
str  0x1002a0ec  'sr-ba-cyrl'
str  0x1002a104  'sr-ba-latn'
str  0x1002a11c  'sr-sp-cyrl'
str  0x1002a134  'sr-sp-latn'
str  0x1002a14c  'sv-fi'
str  0x1002a158  'sv-se'
str  0x1002a164  'sw-ke'
str  0x1002a170  'syr-sy'
str  0x1002a180  'ta-in'
str  0x1002a18c  'te-in'
str  0x1002a198  'th-th'
str  0x1002a1a4  'tn-za'
str  0x1002a1b0  'tr-tr'
str  0x1002a1bc  'tt-ru'
str  0x1002a1c8  'uk-ua'
str  0x1002a1d4  'ur-pk'
str  0x1002a1e0  'uz-uz-cyrl'
str  0x1002a1f8  'uz-uz-latn'
str  0x1002a210  'vi-vn'
str  0x1002a21c  'xh-za'
str  0x1002a228  'zh-chs'
str  0x1002a238  'zh-cht'
str  0x1002a248  'zh-cn'
str  0x1002a254  'zh-hk'
str  0x1002a260  'zh-mo'
str  0x1002a26c  'zh-sg'
str  0x1002a278  'zh-tw'
str  0x1002a284  'zu-za'
str  0x1002a294  'log10'
str  0x1002a341  '?RbSQ'
str  0x1002a347  '<zQ}<'
str  0x1002a387  '<8bunz8'
str  0x1002a446  "v<'*6"
str  0x1002a623  'l,kg<i'
str  0x1002a63a  '\x07J-\x07\r'
str  0x1002a6a7  '<@En[vP'
str  0x1002a6d0  'log10'
str  0x1002a728  'CONOUT$'
str  0x1002a858  'atan2'
str  0x1002a874  'floor'
str  0x1002a88c  'ldexp'
str  0x1002a894  '_cabs'
str  0x1002a89c  '_hypot'
str  0x1002a8ac  'frexp'
str  0x1002a8c0  '_logb'
str  0x1002a8c8  '_nextafter'
str  0x1002aa4b  '\tQ*\x1b='
str  0x1002ab07  '?5Wg4p'
str  0x1002abcb  'BC .='
str  0x1002ad19  '%S#[k'
str  0x1002ad6a  '"B <1='
str  0x1002ad9b  "#.X'="
str  0x1002b218  'Abort'
str  0x1002b220  'Ignore'
str  0x1002b22c  'Cancel'
str  0x1002b23c  'Retry'
str  0x1002b244  'Question'
str  0x1002b250  'Information'
str  0x1002b25c  'Error'
str  0x1002b26c  'VBScript'
str  0x1002b29c  'InputBox("'
str  0x1002b2a8  '" + vbNewLine + "'
str  0x1002b2c0  'Input Query'
str  0x1002b2e4  'Win32'
str  0x1002b2ec  'invalid string position'
str  0x1002b304  'string too long'
str  0x1002b314  'vector<T> too long'
str  0x1002b3b0  'status'
str  0x1002b3b8  'result'
str  0x1002b3c0  'value'
str  0x1002bbf8  'C:\\Users\\owner\\Desktop\\DialogModule\\DialogModule (x86)\\DialogModule.pdb'
str  0x1002bc60  '.text$di'
str  0x1002bc74  '.text$mn'
str  0x1002bc88  '.text$x'
str  0x1002bc98  '.text$yd'
str  0x1002bcac  '.idata$5'
str  0x1002bcc0  '.00cfg'
str  0x1002bcd0  '.CRT$XCA'
str  0x1002bce4  '.CRT$XCC'
str  0x1002bcf8  '.CRT$XCL'
str  0x1002bd0c  '.CRT$XCU'
str  0x1002bd20  '.CRT$XCZ'
str  0x1002bd34  '.CRT$XIA'
str  0x1002bd48  '.CRT$XIC'
str  0x1002bd5c  '.CRT$XIZ'
str  0x1002bd70  '.CRT$XLA'
str  0x1002bd84  '.CRT$XLZ'
str  0x1002bd98  '.CRT$XPA'
str  0x1002bdac  '.CRT$XPB'
str  0x1002bdc0  '.CRT$XPX'
str  0x1002bdd4  '.CRT$XPXA'
str  0x1002bde8  '.CRT$XPZ'
str  0x1002bdfc  '.CRT$XTA'
str  0x1002be10  '.CRT$XTZ'
str  0x1002be24  '.rdata'
str  0x1002be34  '.rdata$T'
str  0x1002be48  '.rdata$r'
str  0x1002be5c  '.rdata$sxdata'
str  0x1002be74  '.rdata$zzzdbg'
str  0x1002be8c  '.rtc$IAA'
str  0x1002bea0  '.rtc$IZZ'
str  0x1002beb4  '.rtc$TAA'
str  0x1002bec8  '.rtc$TZZ'
str  0x1002beec  '.tls$'
str  0x1002befc  '.tls$ZZZ'
str  0x1002bf10  '.xdata$x'
str  0x1002bf24  '.edata'
str  0x1002bf34  '.idata$2'
str  0x1002bf48  '.idata$3'
str  0x1002bf5c  '.idata$4'
str  0x1002bf70  '.idata$6'
str  0x1002bf84  '.data'
str  0x1002bf94  '.data$r'
str  0x1002bfb4  '.rsrc$01'
str  0x1002bfc8  '.rsrc$02'
str  0x1002d166  'DialogModule.dll'
str  0x1002d177  'RegisterCallbacks'
str  0x1002d189  'get_color'
str  0x1002d193  'get_color_async'
str  0x1002d1a3  'get_color_ext'
str  0x1002d1b1  'get_color_ext_async'
str  0x1002d1c5  'get_directory'
str  0x1002d1d3  'get_directory_alt'
str  0x1002d1e5  'get_directory_alt_async'
str  0x1002d1fd  'get_directory_async'
str  0x1002d211  'get_integer'
str  0x1002d21d  'get_integer_async'
str  0x1002d22f  'get_open_filename'
str  0x1002d241  'get_open_filename_async'
str  0x1002d259  'get_open_filename_ext'
str  0x1002d26f  'get_open_filename_ext_async'
str  0x1002d28b  'get_open_filenames'
str  0x1002d29e  'get_open_filenames_async'
str  0x1002d2b7  'get_open_filenames_ext'
str  0x1002d2ce  'get_open_filenames_ext_async'
str  0x1002d2eb  'get_passcode'
str  0x1002d2f8  'get_passcode_async'
str  0x1002d30b  'get_password'
str  0x1002d318  'get_password_async'
str  0x1002d32b  'get_save_filename'
str  0x1002d33d  'get_save_filename_async'
str  0x1002d355  'get_save_filename_ext'
str  0x1002d36b  'get_save_filename_ext_async'
str  0x1002d387  'get_string'
str  0x1002d392  'get_string_async'
str  0x1002d3a3  'show_attempt'
str  0x1002d3b0  'show_attempt_async'
str  0x1002d3c3  'show_error'
str  0x1002d3ce  'show_error_async'
str  0x1002d3df  'show_message'
str  0x1002d3ec  'show_message_async'
str  0x1002d3ff  'show_message_cancelable'
str  0x1002d417  'show_message_cancelable_async'
str  0x1002d435  'show_question'
str  0x1002d443  'show_question_async'
str  0x1002d457  'show_question_cancelable'
str  0x1002d470  'show_question_cancelable_async'
str  0x1002d48f  'widget_get_button_name'
str  0x1002d4a6  'widget_get_caption'
str  0x1002d4b9  'widget_get_icon'
str  0x1002d4c9  'widget_get_owner'
str  0x1002d4da  'widget_get_system'
str  0x1002d4ec  'widget_set_button_name'
str  0x1002d503  'widget_set_caption'
str  0x1002d516  'widget_set_icon'
str  0x1002d526  'widget_set_owner'
str  0x1002d537  'widget_set_system'
str  0x1002d81e  'GetFullPathNameW'
str  0x1002d832  'InitializeCriticalSectionEx'
str  0x1002d850  'GetCurrentThreadId'
str  0x1002d866  'GetModuleHandleA'
str  0x1002d87a  'MultiByteToWideChar'
str  0x1002d890  'GetLastError'
str  0x1002d8a0  'RaiseException'
str  0x1002d8b2  'DecodePointer'
str  0x1002d8c2  'DeleteCriticalSection'
str  0x1002d8da  'GetModuleHandleW'
str  0x1002d8ee  'WideCharToMultiByte'
str  0x1002d902  'KERNEL32.dll'
str  0x1002d912  'EnableWindow'
str  0x1002d922  'GetDesktopWindow'
str  0x1002d936  'GetClassLongW'
str  0x1002d946  'LoadIconA'
str  0x1002d952  'UnhookWindowsHookEx'
str  0x1002d968  'MoveWindow'
str  0x1002d976  'GetForegroundWindow'
str  0x1002d98c  'SendDlgItemMessageW'
str  0x1002d9a2  'SetDlgItemTextW'
str  0x1002d9b4  'SetWindowsHookExA'
str  0x1002d9c8  'SetWindowTextW'
str  0x1002d9da  'CallNextHookEx'
str  0x1002d9ec  'SendMessageW'
str  0x1002d9fc  'PostMessageA'
str  0x1002da0c  'MessageBoxW'
str  0x1002da1a  'GetWindowRect'
str  0x1002da2a  'PostMessageW'
str  0x1002da38  'USER32.dll'
str  0x1002da46  'DeleteObject'
str  0x1002da54  'GDI32.dll'
str  0x1002da60  'ChooseColorW'
str  0x1002da70  'GetSaveFileNameW'
str  0x1002da84  'GetOpenFileNameW'
str  0x1002da96  'COMDLG32.dll'
str  0x1002daa6  'SHBrowseForFolderW'
str  0x1002dabc  'SHGetPathFromIDListW'
str  0x1002dad2  'SHELL32.dll'
str  0x1002dae0  'CoInitialize'
str  0x1002daf0  'CoUninitialize'
str  0x1002db02  'CoCreateInstance'
str  0x1002db16  'CLSIDFromProgID'
str  0x1002db28  'CoTaskMemFree'
str  0x1002db36  'ole32.dll'
str  0x1002db40  'OLEAUT32.dll'
str  0x1002db50  'PathFileExistsW'
str  0x1002db60  'SHLWAPI.dll'
str  0x1002db6e  'GdipCreateBitmapFromFile'
str  0x1002db8a  'GdipFree'
str  0x1002db96  'GdipCreateHICONFromBitmap'
str  0x1002dbb2  'GdipDisposeImage'
str  0x1002dbc6  'GdipAlloc'
str  0x1002dbd2  'GdipCloneImage'
str  0x1002dbe2  'gdiplus.dll'
str  0x1002dbf0  'LocalFree'
str  0x1002dbfc  'IsDebuggerPresent'
str  0x1002dc10  'OutputDebugStringW'
str  0x1002dc26  'EnterCriticalSection'
str  0x1002dc3e  'LeaveCriticalSection'
str  0x1002dc56  'CloseHandle'
str  0x1002dc64  'WaitForSingleObjectEx'
str  0x1002dc7c  'SwitchToThread'
str  0x1002dc8e  'QueryPerformanceCounter'
str  0x1002dca8  'SetLastError'
str  0x1002dcb8  'InitializeCriticalSectionAndSpinCount'
str  0x1002dce0  'CreateEventW'
str  0x1002dcf0  'TlsAlloc'
str  0x1002dcfc  'TlsGetValue'
str  0x1002dd0a  'TlsSetValue'
str  0x1002dd18  'TlsFree'
str  0x1002dd22  'GetSystemTimeAsFileTime'
str  0x1002dd3c  'GetProcAddress'
str  0x1002dd4e  'SetEvent'
str  0x1002dd5a  'ResetEvent'
str  0x1002dd68  'UnhandledExceptionFilter'
str  0x1002dd84  'SetUnhandledExceptionFilter'
str  0x1002dda2  'GetCurrentProcess'
str  0x1002ddb6  'TerminateProcess'
str  0x1002ddca  'IsProcessorFeaturePresent'
str  0x1002dde6  'GetStartupInfoW'
str  0x1002ddf8  'GetCurrentProcessId'
str  0x1002de0e  'InitializeSListHead'
str  0x1002de24  'CreateThread'
str  0x1002de34  'EncodePointer'
str  0x1002de44  'GetCurrentThread'
str  0x1002de58  'GetThreadTimes'
str  0x1002de6a  'FreeLibrary'
str  0x1002de78  'FreeLibraryAndExitThread'
str  0x1002de94  'GetModuleFileNameW'
str  0x1002deaa  'LoadLibraryExW'
str  0x1002debc  'InterlockedFlushSList'
str  0x1002ded4  'RtlUnwind'
str  0x1002dee0  'ExitProcess'
str  0x1002deee  'GetModuleHandleExW'
str  0x1002df04  'ExitThread'
str  0x1002df12  'HeapFree'
str  0x1002df1e  'HeapAlloc'
str  0x1002df2a  'GetStdHandle'
str  0x1002df3a  'GetFileType'
str  0x1002df48  'LCMapStringW'
str  0x1002df58  'HeapSize'
str  0x1002df64  'HeapReAlloc'
str  0x1002df72  'SetFilePointerEx'
str  0x1002df86  'FindClose'
str  0x1002df92  'FindFirstFileExW'
str  0x1002dfa6  'FindNextFileW'
str  0x1002dfb6  'IsValidCodePage'
str  0x1002dfc8  'GetACP'
str  0x1002dfd2  'GetOEMCP'
str  0x1002dfde  'GetCPInfo'
str  0x1002dfea  'GetCommandLineA'
str  0x1002dffc  'GetCommandLineW'
str  0x1002e00e  'GetEnvironmentStringsW'
str  0x1002e028  'FreeEnvironmentStringsW'
str  0x1002e042  'GetProcessHeap'
str  0x1002e054  'FlushFileBuffers'
str  0x1002e068  'WriteFile'
str  0x1002e074  'GetConsoleCP'
str  0x1002e084  'GetConsoleMode'
str  0x1002e096  'GetStringTypeW'
str  0x1002e0a8  'SetStdHandle'
str  0x1002e0b8  'CreateFileW'
str  0x1002e0c6  'WriteConsoleW'
str  0x1002f2ca  '                          '
str  0x1002f3aa  'abcdefghijklmnopqrstuvwxyz'
str  0x1002f3ca  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
str  0x1002f4d2  '                          '
str  0x1002f5b9  'abcdefghijklmnopqrstuvwxyz'
str  0x1002f5d9  'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
str  0x1002fa98  '.?AV_com_error@@'
str  0x1002fab4  '.?AVbad_alloc@std@@'
str  0x1002fad0  '.?AVexception@std@@'
str  0x1002faec  '.?AVlogic_error@std@@'
str  0x1002fb0c  '.?AVlength_error@std@@'
str  0x1002fb2c  '.?AVout_of_range@std@@'
str  0x1002fb4c  '.?AVruntime_error@std@@'
str  0x1002fb6c  '.?AVsystem_error@std@@'
str  0x1002fb8c  '.?AV_System_error@std@@'
str  0x1002fbac  '.?AVerror_category@std@@'
str  0x1002fbd0  '.?AV_Generic_error_category@std@@'
str  0x1002fbfc  '.?AVtype_info@@'
str  0x1002fc14  '.?AVbad_array_new_length@std@@'
str  0x1002fc3c  '.?AVbad_exception@std@@'
str  0x1002fc5c  '.?AUIUnknown@@'
str  0x1002fc74  '.?AVGdiplusBase@Gdiplus@@'
str  0x1002fc98  '.?AVCSimpleScriptSite@?A0x3dc68cab@dialog_module@@'
str  0x1002fcd4  '.?AUIActiveScriptSite@@'
str  0x1002fcf4  '.?AVImage@Gdiplus@@'
str  0x1002fd10  '.?AUIActiveScriptSiteWindow@@'
str  0x1002fd38  '.?AVBitmap@Gdiplus@@'

/* ---------------- pseudocode ---------------- */
/* hex-rays available: True */

/* sub_10001000  @0x10001000  size=12 */
int sub_10001000()
{
  return atexit(sub_10022DF0);
}


/* sub_10001010  @0x10001010  size=12 */
int sub_10001010()
{
  return atexit(sub_10022E50);
}


/* sub_10001020  @0x10001020  size=12 */
int sub_10001020()
{
  return atexit(sub_10022EB0);
}


/* sub_10001030  @0x10001030  size=12 */
int sub_10001030()
{
  return atexit(sub_10022F10);
}


/* sub_10001040  @0x10001040  size=12 */
int sub_10001040()
{
  return atexit(sub_10022F70);
}


/* sub_10001050  @0x10001050  size=12 */
int sub_10001050()
{
  return atexit(sub_10022FD0);
}


/* sub_10001060  @0x10001060  size=370 */
int sub_10001060()
{
  sub_10008B40(&unk_1002F940, "Abort", 5u);
  dword_1002F968 = 0;
  dword_1002F96C = 15;
  byte_1002F958 = 0;
  sub_10008B40(&byte_1002F958, "Ignore", 6u);
  dword_1002F980 = 0;
  dword_1002F984 = 15;
  byte_1002F970 = 0;
  sub_10008B40(&byte_1002F970, "OK", 2u);
  dword_1002F998 = 0;
  dword_1002F99C = 15;
  byte_1002F988 = 0;
  sub_10008B40(&byte_1002F988, "Cancel", 6u);
  dword_1002F9B0 = 0;
  dword_1002F9B4 = 15;
  byte_1002F9A0 = 0;
  sub_10008B40(&byte_1002F9A0, "Yes", 3u);
  dword_1002F9C8 = 0;
  dword_1002F9CC = 15;
  byte_1002F9B8 = 0;
  sub_10008B40(&byte_1002F9B8, "No", 2u);
  dword_1002F9E0 = 0;
  dword_1002F9E4 = 15;
  byte_1002F9D0 = 0;
  sub_10008B40(&byte_1002F9D0, "Retry", 5u);
  return atexit(sub_10023030);
}


/* sub_100011E0  @0x100011e0  size=12 */
int sub_100011E0()
{
  return atexit(sub_10023410);
}


/* sub_100011F0  @0x100011f0  size=12 */
int sub_100011F0()
{
  return atexit(sub_10023470);
}


/* sub_10001200  @0x10001200  size=12 */
int sub_10001200()
{
  return atexit(sub_100234D0);
}


/* sub_10001210  @0x10001210  size=12 */
int sub_10001210()
{
  return atexit(sub_10023530);
}


/* sub_1000121C  @0x1000121c  size=22 */
int sub_1000121C()
{
  sub_1000D195(&unk_1002FD50);
  return atexit(sub_10023586);
}


/* sub_10001232  @0x10001232  size=22 */
int sub_10001232()
{
  std::_Init_locks::_Init_locks((std::_Init_locks *)&unk_1002FF38);
  return atexit(sub_10023590);
}


/* sub_10001248  @0x10001248  size=12 */
int sub_10001248()
{
  return atexit(sub_1002359A);
}


/* sub_10001254  @0x10001254  size=14 */
FILE *sub_10001254()
{
  FILE *result; // eax

  result = __acrt_iob_func(2u);
  dword_10030458 = (int)result;
  return result;
}


/* sub_10001262  @0x10001262  size=11 */
int sub_10001262()
{
  int result; // eax

  result = sub_1000EF9C();
  dword_100304BC = result;
  return result;
}


/* sub_1000126D  @0x1000126d  size=12 */
void sub_1000126D()
{
  InitializeSListHead(&stru_100304C8);
}


/* sub_10001280  @0x10001280  size=64 */
_DWORD *__thiscall sub_10001280(_DWORD *this, char a2)
{
  int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1);
  *this = &Gdiplus::Image::`vftable';
  GdipDisposeImage(v4);
  if ( (a2 & 1) == 0 || (a2 & 4) != 0 )
    return this;
  GdipFree(this);
  return this;
}


/* sub_100012C0  @0x100012c0  size=114 */
int __thiscall sub_100012C0(_DWORD *this)
{
  int v2; // eax
  int result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // [esp+4h] [ebp-8h] BYREF

  v6 = 0;
  v2 = GdipCloneImage(*(this + 1), &v6);
  if ( v2 )
    *(this + 2) = v2;
  result = GdipAlloc(16);
  if ( !result )
    return 0;
  *(_OWORD *)result = 0;
  v4 = *(this + 2);
  v5 = v6;
  *(_DWORD *)result = &Gdiplus::Image::`vftable';
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


/* sub_10001340  @0x10001340  size=6 */
void *sub_10001340()
{
  return &unk_10030C88;
}


/* sub_10001350  @0x10001350  size=51 */
int __cdecl sub_10001350(char *Buffer, size_t BufferCount, char *Format, _locale_t Locale, va_list ArgList)
{
  unsigned __int64 *v5; // eax
  int result; // eax

  v5 = (unsigned __int64 *)sub_10001340();
  result = __stdio_common_vsprintf_s(*v5, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}


/* sub_10001390  @0x10001390  size=50 */
int __cdecl sub_10001390(int a1)
{
  int v1; // ecx
  _DWORD *v2; // eax
  int result; // eax
  int v4; // [esp-Ch] [ebp-Ch]

  v4 = v1;
  v2 = sub_10001340();
  result = sub_100164E1(*v2 | 2, v2[1], 0, 0, v4, nullptr, a1);
  if ( result < 0 )
    return -1;
  return result;
}


/* sub_100013D0  @0x100013d0  size=31 */
int sub_100013D0(char *Buffer, size_t BufferCount, char *Format, ...)
{
  va_list va; // [esp+14h] [ebp+14h] BYREF

  va_start(va, Format);
  return sub_10001350(Buffer, BufferCount, Format, nullptr, va);
}


/* sub_100013F0  @0x100013f0  size=22 */
int __cdecl sub_100013F0(int a1, int a2)
{
  return sub_10001390((int)&a2);
}


/* sub_10001410  @0x10001410  size=90 */
int __thiscall sub_10001410(int *this)
{
  int v2; // esi
  int result; // eax

  v2 = *this;
  if ( *this )
  {
    result = _InterlockedDecrement((volatile signed __int32 *)(v2 + 8));
    if ( !result )
    {
      if ( *(_DWORD *)v2 )
      {
        SysFreeString(*(BSTR *)v2);
        *(_DWORD *)v2 = 0;
      }
      if ( *(_DWORD *)(v2 + 4) )
      {
        j_j__free(*(void **)(v2 + 4));
        *(_DWORD *)(v2 + 4) = 0;
      }
      result = sub_1000E529((void *)v2);
    }
    *this = 0;
  }
  return result;
}


/* sub_10001470  @0x10001470  size=272 */
OLECHAR ***__thiscall sub_10001470(OLECHAR ***this, OLECHAR *psz)
{
  OLECHAR *v3; // eax
  BSTR *v4; // esi
  BSTR *v5; // eax
  BSTR *v6; // esi
  BSTR v7; // eax

  if ( !psz || (!*this ? (v3 = nullptr) : (v3 = **this), v3 != psz) )
  {
    v4 = *this;
    if ( *this )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)v4 + 2) )
      {
        if ( *v4 )
        {
          SysFreeString(*v4);
          *v4 = nullptr;
        }
        if ( v4[1] )
        {
          j_j__free(v4[1]);
          v4[1] = nullptr;
        }
        sub_1000E529(v4);
      }
      *this = nullptr;
    }
    v5 = (BSTR *)operator new(0xCu);
    v6 = v5;
    if ( v5 )
    {
      *(_QWORD *)v5 = 0;
      v5[2] = nullptr;
      v5[1] = nullptr;
      v5[2] = (BSTR)1;
      v7 = SysAllocString(psz);
      *v6 = v7;
      if ( !v7 && psz )
        sub_1000D030(-2147024882);
    }
    else
    {
      v6 = nullptr;
    }
    *this = v6;
    if ( !v6 )
      sub_1000D030(-2147024882);
  }
  return this;
}


/* sub_100015A0  @0x100015a0  size=37 */
int __thiscall sub_100015A0(LPCRITICAL_SECTION lpCriticalSection)
{
  int result; // eax

  if ( InitializeCriticalSectionEx(lpCriticalSection, 0, 0) )
    return 0;
  result = GetLastError();
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}


/* sub_100015D0  @0x100015d0  size=170 */
_DWORD *__fastcall sub_100015D0(_DWORD *a1, int a2)
{
  _BYTE *v3; // esi
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  _BYTE v7[3]; // [esp+25h] [ebp-7h] BYREF

  v3 = v7;
  v4 = a2;
  if ( a2 >= 0 )
  {
    do
    {
      *--v3 = v4 % 0xA + 48;
      v4 /= 0xAu;
    }
    while ( v4 );
  }
  else
  {
    v5 = -a2;
    do
    {
      *--v3 = v5 % 0xA + 48;
      v5 /= 0xAu;
    }
    while ( v5 );
    *--v3 = 45;
  }
  a1[4] = 0;
  a1[5] = 15;
  *(_BYTE *)a1 = 0;
  if ( v3 != v7 )
    sub_10008B40(a1, v3, v7 - v3);
  return a1;
}


/* sub_10001680  @0x10001680  size=404 */
_DWORD *__cdecl sub_10001680(const CHAR *MultiByteStr, int a2, int a3, int a4, int a5, unsigned int a6)
{
  _DWORD *v6; // ecx
  _DWORD *v7; // ebx
  char *v8; // edx
  _DWORD *v9; // esi
  char *v10; // edi
  unsigned int v11; // eax
  size_t v12; // ebx
  size_t v13; // eax
  void *v14; // eax
  const CHAR *p_MultiByteStr; // ecx
  int v16; // eax
  CHAR *v17; // ecx
  _DWORD *v19; // [esp+10h] [ebp-24h]
  unsigned int v20; // [esp+14h] [ebp-20h]

  v7 = v6;
  v19 = v6;
  v8 = nullptr;
  v9 = nullptr;
  v10 = nullptr;
  v11 = a5 + 1;
  v20 = a5 + 1;
  if ( a5 != -1 )
  {
    if ( v11 > 0x7FFFFFFF )
      sub_10009890();
    v12 = 2 * v11;
    if ( 2 * v11 < 0x1000 )
    {
      if ( v12 )
        v9 = operator new(2 * v11);
      else
        v9 = nullptr;
    }
    else
    {
      v13 = v12 + 35;
      if ( v12 + 35 < v12 )
        v13 = -1;
      v14 = operator new(v13);
      if ( !v14 )
        goto LABEL_25;
      v9 = (_DWORD *)(((unsigned int)v14 + 35) & 0xFFFFFFE0);
      *(v9 - 1) = v14;
    }
    v10 = (char *)v9 + v12;
    memset(v9, 0, v12);
    v7 = v19;
    v11 = v20;
    v8 = v10;
  }
  p_MultiByteStr = (const CHAR *)&MultiByteStr;
  if ( a6 >= 0x10 )
  {
    p_MultiByteStr = MultiByteStr;
    v10 = v8;
  }
  v16 = MultiByteToWideChar(0xFDE9u, 0, p_MultiByteStr, -1, (LPWSTR)v9, v11);
  v7[4] = 0;
  v7[5] = 7;
  *(_WORD *)v7 = 0;
  sub_10008870(v7, v9, v16);
  if ( v9 )
  {
    if ( ((v10 - (char *)v9) & 0xFFFFFFFE) >= 0x1000 )
    {
      if ( (unsigned int)v9 - *(v9 - 1) - 4 > 0x1F )
        goto LABEL_25;
      v9 = (_DWORD *)*(v9 - 1);
    }
    sub_1000E529(v9);
  }
  if ( a6 >= 0x10 )
  {
    v17 = (CHAR *)MultiByteStr;
    if ( a6 + 1 < 0x1000 || (v17 = *((CHAR **)MultiByteStr - 1), (unsigned int)(MultiByteStr - v17 - 4) <= 0x1F) )
    {
      sub_1000E529(v17);
      return v7;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  return v7;
}


/* sub_10001820  @0x10001820  size=445 */
_DWORD *__cdecl sub_10001820(WCHAR *lpWideCharStr, int a2, int a3, int a4, int cchWideChar, unsigned int a6)
{
  _DWORD *v6; // ecx
  const WCHAR *p_lpWideCharStr; // eax
  size_t v8; // eax
  unsigned int v9; // ebx
  _DWORD *v10; // esi
  char *v11; // edi
  char *v12; // ecx
  size_t v13; // eax
  void *v14; // eax
  const WCHAR *v15; // eax
  size_t v16; // eax
  WCHAR *v17; // ecx
  _DWORD *v19; // [esp+14h] [ebp-20h]

  v19 = v6;
  p_lpWideCharStr = (const WCHAR *)&lpWideCharStr;
  if ( a6 >= 8 )
    p_lpWideCharStr = lpWideCharStr;
  v8 = WideCharToMultiByte(0xFDE9u, 0, p_lpWideCharStr, cchWideChar, nullptr, 0, nullptr, nullptr);
  v9 = v8;
  v10 = nullptr;
  v11 = nullptr;
  v12 = nullptr;
  if ( v8 )
  {
    if ( v8 > 0x7FFFFFFF )
      sub_10009890(0);
    if ( v8 < 0x1000 )
    {
      v10 = operator new(v8);
    }
    else
    {
      v13 = v8 + 35;
      if ( v9 + 35 < v9 )
        v13 = -1;
      v14 = operator new(v13);
      if ( !v14 )
        goto LABEL_25;
      v10 = (_DWORD *)(((unsigned int)v14 + 35) & 0xFFFFFFE0);
      *(v10 - 1) = v14;
    }
    v11 = (char *)v10 + v9;
    memset(v10, 0, v9);
    v12 = (char *)v10 + v9;
  }
  v15 = (const WCHAR *)&lpWideCharStr;
  if ( a6 >= 8 )
  {
    v15 = lpWideCharStr;
    v11 = v12;
  }
  v16 = WideCharToMultiByte(0xFDE9u, 0, v15, cchWideChar, (LPSTR)v10, v9, nullptr, nullptr);
  v19[4] = 0;
  v19[5] = 15;
  *(_BYTE *)v19 = 0;
  sub_10008B40(v19, v10, v16);
  if ( v10 )
  {
    if ( (unsigned int)(v11 - (char *)v10) >= 0x1000 )
    {
      if ( (unsigned int)v10 - *(v10 - 1) - 4 > 0x1F )
        goto LABEL_25;
      v10 = (_DWORD *)*(v10 - 1);
    }
    sub_1000E529(v10);
  }
  if ( a6 >= 8 )
  {
    v17 = lpWideCharStr;
    if ( 2 * a6 + 2 < 0x1000
      || (v17 = *((WCHAR **)lpWideCharStr - 1), (unsigned int)((char *)lpWideCharStr - (char *)v17 - 4) <= 0x1F) )
    {
      sub_1000E529(v17);
      return v19;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  return v19;
}


/* sub_100019E0  @0x100019e0  size=917 */
int __usercall sub_100019E0@<eax>(void *a1@<ecx>, char a2@<dl>, int a3@<ebp>)
{
  char *v3; // edx
  _DWORD *v4; // eax
  int v5; // ecx
  _BYTE *v6; // ecx
  unsigned int v7; // edx
  void *v8; // ecx
  unsigned int v9; // edx
  const WCHAR *v10; // edi
  UINT v11; // esi
  const WCHAR *v12; // eax
  HWND ForegroundWindow; // eax
  int v14; // eax
  int v15; // esi
  void *v16; // ecx
  void *v17; // ecx
  void *v18; // ecx
  void *v19; // ecx
  const CHAR *v21; // [esp-D4h] [ebp-E0h]
  const CHAR *v22; // [esp-D4h] [ebp-E0h]
  int v23; // [esp-D0h] [ebp-DCh]
  int v24; // [esp-D0h] [ebp-DCh]
  int v25; // [esp-CCh] [ebp-D8h]
  int v26; // [esp-CCh] [ebp-D8h]
  int v27; // [esp-C8h] [ebp-D4h]
  int v28; // [esp-C8h] [ebp-D4h]
  int v29; // [esp-C4h] [ebp-D0h]
  int v30; // [esp-C4h] [ebp-D0h]
  unsigned int v31; // [esp-C0h] [ebp-CCh]
  unsigned int v32; // [esp-C0h] [ebp-CCh]
  _BYTE *v33; // [esp-B0h] [ebp-BCh]
  unsigned int v34; // [esp-9Ch] [ebp-A8h]
  _DWORD v35[5]; // [esp-98h] [ebp-A4h] BYREF
  unsigned int v36; // [esp-84h] [ebp-90h]
  LPCWSTR v37; // [esp-7Ch] [ebp-88h]
  char v38; // [esp-75h] [ebp-81h]
  __int128 v39; // [esp-74h] [ebp-80h] BYREF
  __int64 v40; // [esp-64h] [ebp-70h]
  _DWORD v41[5]; // [esp-5Ch] [ebp-68h] BYREF
  unsigned int v42; // [esp-48h] [ebp-54h]
  _DWORD v43[5]; // [esp-44h] [ebp-50h] BYREF
  unsigned int v44; // [esp-30h] [ebp-3Ch]
  _DWORD v45[5]; // [esp-2Ch] [ebp-38h] BYREF
  unsigned int v46; // [esp-18h] [ebp-24h]
  int *v47; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v49; // [esp-8h] [ebp-14h]
  int v50; // [esp-4h] [ebp-10h]
  int v51; // [esp+0h] [ebp-Ch]
  void *v52; // [esp+4h] [ebp-8h]
  int v53; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v51 = a3;
  v52 = retaddr;
  v50 = -1;
  v49 = &loc_10022564;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v47 = &v53;
  v38 = a2;
  v37 = nullptr;
  v41[4] = 0;
  v42 = 15;
  LOBYTE(v41[0]) = 0;
  sub_10008B40(v41, a1, strlen((const char *)a1));
  v50 = 0;
  sub_100087A0(v41);
  sub_10001680(v21, v23, v25, v27, v29, v31);
  LOBYTE(v50) = 1;
  if ( dword_1002F938 )
  {
    v4 = (_DWORD *)sub_100087A0(&Src);
    v5 = 2;
  }
  else
  {
    v3 = "Question";
    v35[4] = 0;
    if ( !v38 )
      v3 = "Information";
    v36 = 15;
    LOBYTE(v35[0]) = 0;
    sub_10008B40(v35, v3, strlen(v3));
    v4 = v35;
    v5 = 1;
  }
  v39 = *(_OWORD *)v4;
  v40 = *((_QWORD *)v4 + 2);
  v4[4] = 0;
  v4[5] = 15;
  *(_BYTE *)v4 = 0;
  v50 = 3;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    v37 = (LPCWSTR)v5;
    if ( v34 >= 0x10 )
    {
      v6 = v33;
      v7 = v34 + 1;
      if ( v34 + 1 >= 0x1000 )
      {
        v6 = *((_BYTE **)v33 - 1);
        v7 = v34 + 36;
        if ( (unsigned int)(v33 - v6 - 4) > 0x1F )
          goto LABEL_46;
      }
      v32 = v7;
      sub_1000E529(v6);
      LOBYTE(v5) = (_BYTE)v37;
    }
  }
  LOBYTE(v50) = 4;
  if ( (v5 & 1) != 0 && v36 >= 0x10 )
  {
    v8 = (void *)v35[0];
    v9 = v36 + 1;
    if ( v36 + 1 < 0x1000
      || (v8 = *(void **)(v35[0] - 4), v9 = v36 + 36, (unsigned int)(v35[0] - (_DWORD)v8 - 4) <= 0x1F) )
    {
      v32 = v9;
      sub_1000E529(v8);
      goto LABEL_16;
    }
LABEL_46:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_16:
  sub_100087A0(&v39);
  sub_10001680(v22, v24, v26, v28, v30, v32);
  v10 = (const WCHAR *)v45;
  v11 = 64;
  if ( v38 )
    v11 = 33;
  v12 = (const WCHAR *)v43;
  if ( v46 >= 8 )
    v10 = (const WCHAR *)v45[0];
  if ( v44 >= 8 )
    v12 = (const WCHAR *)v43[0];
  v37 = v12;
  ForegroundWindow = hWnd;
  if ( !hWnd )
    ForegroundWindow = GetForegroundWindow();
  dword_1003309C = ForegroundWindow;
  if ( !ForegroundWindow )
  {
    ForegroundWindow = GetDesktopWindow();
    dword_1003309C = ForegroundWindow;
  }
  v14 = MessageBoxW(ForegroundWindow, v37, v10, v11);
  if ( v38 )
  {
    v37 = (LPCWSTR)(2 * (v14 == 1) - 1);
    v15 = (int)v37;
  }
  else
  {
    v15 = 1;
  }
  if ( v46 >= 8 )
  {
    v16 = (void *)v45[0];
    if ( 2 * v46 + 2 >= 0x1000 )
    {
      v16 = *(void **)(v45[0] - 4);
      if ( (unsigned int)(v45[0] - (_DWORD)v16 - 4) > 0x1F )
        goto LABEL_47;
    }
    sub_1000E529(v16);
  }
  v45[4] = 0;
  v46 = 7;
  LOWORD(v45[0]) = 0;
  if ( HIDWORD(v40) >= 0x10 )
  {
    v17 = (void *)v39;
    if ( (unsigned int)(HIDWORD(v40) + 1) >= 0x1000 )
    {
      v17 = *(void **)(v39 - 4);
      if ( (unsigned int)(v39 - (_DWORD)v17 - 4) > 0x1F )
        goto LABEL_47;
    }
    sub_1000E529(v17);
  }
  if ( v44 >= 8 )
  {
    v18 = (void *)v43[0];
    if ( 2 * v44 + 2 >= 0x1000 )
    {
      v18 = *(void **)(v43[0] - 4);
      if ( (unsigned int)(v43[0] - (_DWORD)v18 - 4) > 0x1F )
        goto LABEL_47;
    }
    sub_1000E529(v18);
  }
  v43[4] = 0;
  v44 = 7;
  LOWORD(v43[0]) = 0;
  if ( v42 >= 0x10 )
  {
    v19 = (void *)v41[0];
    if ( v42 + 1 < 0x1000 || (v19 = *(void **)(v41[0] - 4), (unsigned int)(v41[0] - (_DWORD)v19 - 4) <= 0x1F) )
    {
      sub_1000E529(v19);
      return v15;
    }
LABEL_47:
    _invalid_parameter_noinfo_noreturn();
  }
  return v15;
}


/* sub_10001D80  @0x10001d80  size=889 */
int __usercall sub_10001D80@<eax>(void *a1@<ecx>, unsigned __int8 a2@<dl>, int a3@<ebp>)
{
  _DWORD *v3; // eax
  int v4; // ecx
  _BYTE *v5; // ecx
  unsigned int v6; // edx
  void *v7; // ecx
  unsigned int v8; // edx
  const WCHAR *v9; // edi
  const WCHAR *v10; // eax
  UINT v11; // esi
  HWND ForegroundWindow; // eax
  int v13; // eax
  int v14; // esi
  void *v15; // ecx
  void *v16; // ecx
  void *v17; // ecx
  void *v18; // ecx
  const CHAR *v20; // [esp-D4h] [ebp-E0h]
  const CHAR *v21; // [esp-D4h] [ebp-E0h]
  int v22; // [esp-D0h] [ebp-DCh]
  int v23; // [esp-D0h] [ebp-DCh]
  int v24; // [esp-CCh] [ebp-D8h]
  int v25; // [esp-CCh] [ebp-D8h]
  int v26; // [esp-C8h] [ebp-D4h]
  int v27; // [esp-C8h] [ebp-D4h]
  int v28; // [esp-C4h] [ebp-D0h]
  int v29; // [esp-C4h] [ebp-D0h]
  unsigned int v30; // [esp-C0h] [ebp-CCh]
  unsigned int v31; // [esp-C0h] [ebp-CCh]
  _BYTE *v32; // [esp-B0h] [ebp-BCh]
  unsigned int v33; // [esp-9Ch] [ebp-A8h]
  _DWORD v34[5]; // [esp-98h] [ebp-A4h] BYREF
  unsigned int v35; // [esp-84h] [ebp-90h]
  LPCWSTR v36; // [esp-7Ch] [ebp-88h]
  unsigned __int8 v37; // [esp-75h] [ebp-81h]
  __int128 v38; // [esp-74h] [ebp-80h] BYREF
  __int64 v39; // [esp-64h] [ebp-70h]
  _DWORD v40[5]; // [esp-5Ch] [ebp-68h] BYREF
  unsigned int v41; // [esp-48h] [ebp-54h]
  _DWORD v42[5]; // [esp-44h] [ebp-50h] BYREF
  unsigned int v43; // [esp-30h] [ebp-3Ch]
  _DWORD v44[5]; // [esp-2Ch] [ebp-38h] BYREF
  unsigned int v45; // [esp-18h] [ebp-24h]
  int *v46; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v48; // [esp-8h] [ebp-14h]
  int v49; // [esp-4h] [ebp-10h]
  int v50; // [esp+0h] [ebp-Ch]
  void *v51; // [esp+4h] [ebp-8h]
  int v52; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v50 = a3;
  v51 = retaddr;
  v49 = -1;
  v48 = &loc_10022564;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v46 = &v52;
  v37 = a2;
  v36 = nullptr;
  v40[4] = 0;
  v41 = 15;
  LOBYTE(v40[0]) = 0;
  sub_10008B40(v40, a1, strlen((const char *)a1));
  v49 = 0;
  sub_100087A0(v40);
  sub_10001680(v20, v22, v24, v26, v28, v30);
  LOBYTE(v49) = 1;
  if ( dword_1002F938 )
  {
    v3 = (_DWORD *)sub_100087A0(&Src);
    v4 = 2;
  }
  else
  {
    v34[4] = 0;
    v35 = 15;
    LOBYTE(v34[0]) = 0;
    sub_10008B40(v34, "Question", 8u);
    v3 = v34;
    v4 = 1;
  }
  v38 = *(_OWORD *)v3;
  v39 = *((_QWORD *)v3 + 2);
  v3[4] = 0;
  v3[5] = 15;
  *(_BYTE *)v3 = 0;
  v49 = 3;
  if ( (v4 & 2) != 0 )
  {
    v4 &= ~2u;
    v36 = (LPCWSTR)v4;
    if ( v33 >= 0x10 )
    {
      v5 = v32;
      v6 = v33 + 1;
      if ( v33 + 1 >= 0x1000 )
      {
        v5 = *((_BYTE **)v32 - 1);
        v6 = v33 + 36;
        if ( (unsigned int)(v32 - v5 - 4) > 0x1F )
          goto LABEL_44;
      }
      v31 = v6;
      sub_1000E529(v5);
      LOBYTE(v4) = (_BYTE)v36;
    }
  }
  LOBYTE(v49) = 4;
  if ( (v4 & 1) != 0 && v35 >= 0x10 )
  {
    v7 = (void *)v34[0];
    v8 = v35 + 1;
    if ( v35 + 1 < 0x1000
      || (v7 = *(void **)(v34[0] - 4), v8 = v35 + 36, (unsigned int)(v34[0] - (_DWORD)v7 - 4) <= 0x1F) )
    {
      v31 = v8;
      sub_1000E529(v7);
      goto LABEL_14;
    }
LABEL_44:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_14:
  sub_100087A0(&v38);
  sub_10001680(v21, v23, v25, v27, v29, v31);
  v9 = (const WCHAR *)v44;
  v10 = (const WCHAR *)v42;
  v11 = ((v37 ^ 1) + 3) | 0x20;
  if ( v45 >= 8 )
    v9 = (const WCHAR *)v44[0];
  if ( v43 >= 8 )
    v10 = (const WCHAR *)v42[0];
  v36 = v10;
  ForegroundWindow = hWnd;
  if ( !hWnd )
    ForegroundWindow = GetForegroundWindow();
  dword_1003309C = ForegroundWindow;
  if ( !ForegroundWindow )
  {
    ForegroundWindow = GetDesktopWindow();
    dword_1003309C = ForegroundWindow;
  }
  v13 = MessageBoxW(ForegroundWindow, v36, v9, v11);
  if ( v37 )
  {
    if ( v13 == 6 )
      v14 = 1;
    else
      v14 = -(v13 != 7);
  }
  else
  {
    v14 = v13 == 6;
  }
  if ( v45 >= 8 )
  {
    v15 = (void *)v44[0];
    if ( 2 * v45 + 2 >= 0x1000 )
    {
      v15 = *(void **)(v44[0] - 4);
      if ( (unsigned int)(v44[0] - (_DWORD)v15 - 4) > 0x1F )
        goto LABEL_45;
    }
    sub_1000E529(v15);
  }
  v44[4] = 0;
  v45 = 7;
  LOWORD(v44[0]) = 0;
  if ( HIDWORD(v39) >= 0x10 )
  {
    v16 = (void *)v38;
    if ( (unsigned int)(HIDWORD(v39) + 1) >= 0x1000 )
    {
      v16 = *(void **)(v38 - 4);
      if ( (unsigned int)(v38 - (_DWORD)v16 - 4) > 0x1F )
        goto LABEL_45;
    }
    sub_1000E529(v16);
  }
  if ( v43 >= 8 )
  {
    v17 = (void *)v42[0];
    if ( 2 * v43 + 2 >= 0x1000 )
    {
      v17 = *(void **)(v42[0] - 4);
      if ( (unsigned int)(v42[0] - (_DWORD)v17 - 4) > 0x1F )
        goto LABEL_45;
    }
    sub_1000E529(v17);
  }
  v42[4] = 0;
  v43 = 7;
  LOWORD(v42[0]) = 0;
  if ( v41 >= 0x10 )
  {
    v18 = (void *)v40[0];
    if ( v41 + 1 < 0x1000 || (v18 = *(void **)(v40[0] - 4), (unsigned int)(v40[0] - (_DWORD)v18 - 4) <= 0x1F) )
    {
      sub_1000E529(v18);
      return v14;
    }
LABEL_45:
    _invalid_parameter_noinfo_noreturn();
  }
  return v14;
}


/* sub_10002100  @0x10002100  size=1245 */
LPCWSTR __usercall sub_10002100@<eax>(void *a1@<ecx>, unsigned __int8 a2@<dl>, int a3@<ebp>, char a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  _BYTE *v6; // ecx
  unsigned int v7; // edx
  void *v8; // ecx
  unsigned int v9; // edx
  const WCHAR *v10; // esi
  HWND ForegroundWindow; // eax
  const WCHAR *v12; // edi
  int v13; // esi
  void *v14; // ecx
  void *v15; // ecx
  void *v16; // ecx
  void *v17; // ecx
  const WCHAR *v19; // edi
  const WCHAR *v20; // eax
  UINT v21; // esi
  HWND DesktopWindow; // eax
  int v23; // eax
  void *v24; // ecx
  void *v25; // ecx
  void *v26; // ecx
  void *v27; // ecx
  const CHAR *v28; // [esp-D4h] [ebp-E0h]
  const CHAR *v29; // [esp-D4h] [ebp-E0h]
  int v30; // [esp-D0h] [ebp-DCh]
  int v31; // [esp-D0h] [ebp-DCh]
  int v32; // [esp-CCh] [ebp-D8h]
  int v33; // [esp-CCh] [ebp-D8h]
  int v34; // [esp-C8h] [ebp-D4h]
  int v35; // [esp-C8h] [ebp-D4h]
  int v36; // [esp-C4h] [ebp-D0h]
  int v37; // [esp-C4h] [ebp-D0h]
  unsigned int v38; // [esp-C0h] [ebp-CCh]
  unsigned int v39; // [esp-C0h] [ebp-CCh]
  _BYTE *v40; // [esp-B0h] [ebp-BCh]
  unsigned int v41; // [esp-9Ch] [ebp-A8h]
  _DWORD v42[5]; // [esp-98h] [ebp-A4h] BYREF
  unsigned int v43; // [esp-84h] [ebp-90h]
  LPCWSTR v44; // [esp-7Ch] [ebp-88h]
  unsigned __int8 v45; // [esp-75h] [ebp-81h]
  __int128 v46; // [esp-74h] [ebp-80h] BYREF
  __int64 v47; // [esp-64h] [ebp-70h]
  _DWORD v48[5]; // [esp-5Ch] [ebp-68h] BYREF
  unsigned int v49; // [esp-48h] [ebp-54h]
  _DWORD v50[4]; // [esp-44h] [ebp-50h] BYREF
  int v51; // [esp-34h] [ebp-40h]
  unsigned int v52; // [esp-30h] [ebp-3Ch]
  _DWORD v53[4]; // [esp-2Ch] [ebp-38h] BYREF
  int v54; // [esp-1Ch] [ebp-28h]
  unsigned int v55; // [esp-18h] [ebp-24h]
  int *v56; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v58; // [esp-8h] [ebp-14h]
  int v59; // [esp-4h] [ebp-10h]
  int v60; // [esp+0h] [ebp-Ch]
  void *v61; // [esp+4h] [ebp-8h]
  int v62; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v60 = a3;
  v61 = retaddr;
  v59 = -1;
  v58 = &loc_10022564;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v56 = &v62;
  v45 = a2;
  v44 = nullptr;
  v48[4] = 0;
  v49 = 15;
  LOBYTE(v48[0]) = 0;
  sub_10008B40(v48, a1, strlen((const char *)a1));
  v59 = 0;
  sub_100087A0(v48);
  sub_10001680(v28, v30, v32, v34, v36, v38);
  LOBYTE(v59) = 1;
  if ( dword_1002F938 )
  {
    v4 = (_DWORD *)sub_100087A0(&Src);
    v5 = 2;
  }
  else
  {
    v42[4] = 0;
    v43 = 15;
    LOBYTE(v42[0]) = 0;
    sub_10008B40(v42, "Error", 5u);
    v4 = v42;
    v5 = 1;
  }
  v46 = *(_OWORD *)v4;
  v47 = *((_QWORD *)v4 + 2);
  v4[4] = 0;
  v4[5] = 15;
  *(_BYTE *)v4 = 0;
  v59 = 3;
  if ( (v5 & 2) != 0 )
  {
    v5 &= ~2u;
    v44 = (LPCWSTR)v5;
    if ( v41 >= 0x10 )
    {
      v6 = v40;
      v7 = v41 + 1;
      if ( v41 + 1 >= 0x1000 )
      {
        v6 = *((_BYTE **)v40 - 1);
        v7 = v41 + 36;
        if ( (unsigned int)(v40 - v6 - 4) > 0x1F )
          goto LABEL_68;
      }
      v39 = v7;
      sub_1000E529(v6);
      LOBYTE(v5) = (_BYTE)v44;
    }
  }
  LOBYTE(v59) = 4;
  if ( (v5 & 1) != 0 && v43 >= 0x10 )
  {
    v8 = (void *)v42[0];
    v9 = v43 + 1;
    if ( v43 + 1 < 0x1000
      || (v8 = *(void **)(v42[0] - 4), v9 = v43 + 36, (unsigned int)(v42[0] - (_DWORD)v8 - 4) <= 0x1F) )
    {
      v39 = v9;
      sub_1000E529(v8);
      goto LABEL_14;
    }
LABEL_68:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_14:
  sub_100087A0(&v46);
  sub_10001680(v29, v31, v33, v35, v37, v39);
  if ( a4 )
  {
    v10 = (const WCHAR *)v53;
    ForegroundWindow = hWnd;
    v12 = (const WCHAR *)v50;
    if ( v55 >= 8 )
      v10 = (const WCHAR *)v53[0];
    if ( v52 >= 8 )
      v12 = (const WCHAR *)v50[0];
    if ( !hWnd )
      ForegroundWindow = GetForegroundWindow();
    dword_1003309C = ForegroundWindow;
    if ( !ForegroundWindow )
    {
      ForegroundWindow = GetDesktopWindow();
      dword_1003309C = ForegroundWindow;
    }
    v13 = -(MessageBoxW(ForegroundWindow, v12, v10, 0x15u) != 4);
    if ( v55 >= 8 )
    {
      v14 = (void *)v53[0];
      if ( 2 * v55 + 2 >= 0x1000 )
      {
        v14 = *(void **)(v53[0] - 4);
        if ( (unsigned int)(v53[0] - (_DWORD)v14 - 4) > 0x1F )
          goto LABEL_69;
      }
      sub_1000E529(v14);
    }
    v54 = 0;
    v55 = 7;
    LOWORD(v53[0]) = 0;
    if ( HIDWORD(v47) >= 0x10 )
    {
      v15 = (void *)v46;
      if ( (unsigned int)(HIDWORD(v47) + 1) >= 0x1000 )
      {
        v15 = *(void **)(v46 - 4);
        if ( (unsigned int)(v46 - (_DWORD)v15 - 4) > 0x1F )
          goto LABEL_69;
      }
      sub_1000E529(v15);
    }
    if ( v52 >= 8 )
    {
      v16 = (void *)v50[0];
      if ( 2 * v52 + 2 >= 0x1000 )
      {
        v16 = *(void **)(v50[0] - 4);
        if ( (unsigned int)(v50[0] - (_DWORD)v16 - 4) > 0x1F )
          goto LABEL_69;
      }
      sub_1000E529(v16);
    }
    v51 = 0;
    v52 = 7;
    LOWORD(v50[0]) = 0;
    if ( v49 < 0x10 )
      return (LPCWSTR)v13;
    v17 = (void *)v48[0];
    if ( v49 + 1 < 0x1000 || (v17 = *(void **)(v48[0] - 4), (unsigned int)(v48[0] - (_DWORD)v17 - 4) <= 0x1F) )
    {
      sub_1000E529(v17);
      return (LPCWSTR)v13;
    }
LABEL_69:
    _invalid_parameter_noinfo_noreturn();
  }
  v19 = (const WCHAR *)v53;
  v20 = (const WCHAR *)v50;
  v21 = v45 ^ 1 | 0x10;
  if ( v55 >= 8 )
    v19 = (const WCHAR *)v53[0];
  if ( v52 >= 8 )
    v20 = (const WCHAR *)v50[0];
  v44 = v20;
  DesktopWindow = hWnd;
  if ( !hWnd )
    DesktopWindow = GetForegroundWindow();
  dword_1003309C = DesktopWindow;
  if ( !DesktopWindow )
  {
    DesktopWindow = GetDesktopWindow();
    dword_1003309C = DesktopWindow;
  }
  v23 = MessageBoxW(DesktopWindow, v44, v19, v21);
  if ( v45 || (v44 = (LPCWSTR)(2 * (v23 == 1) - 1), v23 == 1) )
  {
    _loaddll(nullptr);
    goto LABEL_68;
  }
  if ( v55 >= 8 )
  {
    v24 = (void *)v53[0];
    if ( 2 * v55 + 2 >= 0x1000 )
    {
      v24 = *(void **)(v53[0] - 4);
      if ( (unsigned int)(v53[0] - (_DWORD)v24 - 4) > 0x1F )
        goto LABEL_69;
    }
    sub_1000E529(v24);
  }
  v54 = 0;
  v55 = 7;
  LOWORD(v53[0]) = 0;
  if ( HIDWORD(v47) >= 0x10 )
  {
    v25 = (void *)v46;
    if ( (unsigned int)(HIDWORD(v47) + 1) >= 0x1000 )
    {
      v25 = *(void **)(v46 - 4);
      if ( (unsigned int)(v46 - (_DWORD)v25 - 4) > 0x1F )
        goto LABEL_69;
    }
    sub_1000E529(v25);
  }
  if ( v52 >= 8 )
  {
    v26 = (void *)v50[0];
    if ( 2 * v52 + 2 >= 0x1000 )
    {
      v26 = *(void **)(v50[0] - 4);
      if ( (unsigned int)(v50[0] - (_DWORD)v26 - 4) > 0x1F )
        goto LABEL_69;
    }
    sub_1000E529(v26);
  }
  v51 = 0;
  v52 = 7;
  LOWORD(v50[0]) = 0;
  if ( v49 >= 0x10 )
  {
    v27 = (void *)v48[0];
    if ( v49 + 1 >= 0x1000 )
    {
      v27 = *(void **)(v48[0] - 4);
      if ( (unsigned int)(v48[0] - (_DWORD)v27 - 4) > 0x1F )
        goto LABEL_69;
    }
    sub_1000E529(v27);
  }
  return v44;
}


/* sub_100025E0  @0x100025e0  size=18 */
int __stdcall sub_100025E0(int a1, _DWORD *a2)
{
  *a2 = 0;
  return 0;
}


/* sub_10002600  @0x10002600  size=8 */
int __stdcall sub_10002600(int a1, int a2, int a3, int a4, int a5)
{
  return -2147319765;
}


/* sub_10002610  @0x10002610  size=25 */
int __stdcall sub_10002610(int a1, BSTR *a2)
{
  *a2 = SysAllocString(L"1.0");
  return 0;
}


/* sub_10002630  @0x10002630  size=5 */
int __stdcall sub_10002630(int a1, int a2, int a3)
{
  return 0;
}


/* sub_10002640  @0x10002640  size=5 */
int __stdcall sub_10002640(int a1, int a2)
{
  return 0;
}


/* sub_10002650  @0x10002650  size=5 */
int __stdcall sub_10002650(int a1)
{
  return 0;
}


/* sub_10002660  @0x10002660  size=20 */
int __stdcall sub_10002660(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 8);
  return 0;
}


/* sub_10002680  @0x10002680  size=18 */
int __stdcall sub_10002680(int a1, int a2)
{
  *(_DWORD *)(a1 + 12) = a2;
  return 0;
}


/* sub_100026A0  @0x100026a0  size=21 */
signed __int32 __stdcall sub_100026A0(int a1)
{
  return _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
}


/* sub_100026C0  @0x100026c0  size=41 */
int __stdcall sub_100026C0(void *Block)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Block + 2, 0xFFFFFFFF) )
    return *((_DWORD *)Block + 2);
  sub_1000E529(Block);
  return 0;
}


/* sub_100026F0  @0x100026f0  size=153 */
int __stdcall sub_100026F0(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  _DWORD *v5; // esi
  unsigned int v6; // edi
  bool v7; // cf
  _DWORD *v8; // edx
  _DWORD *v9; // esi
  unsigned int v10; // edi
  _DWORD *v12; // edx
  unsigned int v13; // esi

  v3 = a2;
  v4 = a2;
  v5 = &unk_100242C0;
  v6 = 12;
  while ( *v4 == *v5 )
  {
    ++v4;
    ++v5;
    v7 = v6 < 4;
    v6 -= 4;
    if ( v7 )
    {
LABEL_8:
      *a3 = a1 + 4;
      (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
      return 0;
    }
  }
  v8 = a2;
  v9 = &unk_100242B0;
  v10 = 12;
  while ( *v8 == *v9 )
  {
    ++v8;
    ++v9;
    v7 = v10 < 4;
    v10 -= 4;
    if ( v7 )
      goto LABEL_8;
  }
  v12 = &unk_100242A0;
  v13 = 12;
  while ( *v3 == *v12 )
  {
    ++v3;
    ++v12;
    v7 = v13 < 4;
    v13 -= 4;
    if ( v7 )
    {
      *a3 = a1;
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)a1 + 4))(a1, v12, a1);
      return 0;
    }
  }
  return -2147467262;
}


/* sub_10002790  @0x10002790  size=60 */
int __stdcall sub_10002790(HWND hWnd, int a2, int a3, int a4)
{
  LPARAM *v4; // eax

  if ( a2 == 1 && dword_1002F9F8 )
  {
    v4 = &lParam;
    if ( (unsigned int)dword_1002F9FC >= 8 )
      v4 = (LPARAM *)lParam;
    PostMessageW(hWnd, 0x46Au, 1u, (LPARAM)v4);
  }
  return 0;
}


/* sub_100027D0  @0x100027d0  size=71 */
int __stdcall sub_100027D0(HWND hWnd, int a2, int a3, int a4)
{
  const WCHAR *v4; // eax

  if ( a2 == 272 )
  {
    if ( dword_1002F920 )
    {
      v4 = (const WCHAR *)&lpString;
      if ( (unsigned int)dword_1002FA14 >= 8 )
        v4 = lpString;
      SetWindowTextW(hWnd, v4);
    }
    PostMessageW(hWnd, 7u, 0, 0);
  }
  return 0;
}


/* fn  @0x10002820  size=671 */
LRESULT __stdcall fn(int code, HWND wParam, LPARAM lParam)
{
  LPARAM v3; // esi
  HWND v4; // eax
  char v5; // cl
  const WCHAR *v6; // eax
  LPCWSTR *v7; // eax
  int v8; // esi
  int v9; // eax
  void *ClassLongW; // esi
  HMODULE ModuleHandleW; // eax
  WCHAR *v12; // ecx
  const CHAR *v14; // [esp-18h] [ebp-60h]
  int v15; // [esp-14h] [ebp-5Ch]
  int v16; // [esp-10h] [ebp-58h]
  int v17; // [esp-Ch] [ebp-54h]
  int v18; // [esp-8h] [ebp-50h]
  unsigned int v19; // [esp-4h] [ebp-4Ch]
  HWND v20; // [esp+Ch] [ebp-3Ch]
  HWND v21; // [esp+Ch] [ebp-3Ch]
  int v22; // [esp+14h] [ebp-34h] BYREF
  LPARAM lParama; // [esp+18h] [ebp-30h] BYREF
  LPCWSTR pszPath[5]; // [esp+1Ch] [ebp-2Ch] BYREF
  unsigned int v25; // [esp+30h] [ebp-18h]
  struct tagRECT Rect; // [esp+34h] [ebp-14h] BYREF

  v3 = lParam;
  if ( code >= 0 )
  {
    if ( code == 3
      && ((EnableWindow(dword_1003309C, 1), dword_1003309C == GetDesktopWindow())
       || dword_1003309C != wParam && *(HWND *)(*(_DWORD *)lParam + 12) == dword_1003309C) )
    {
      v4 = wParam;
      v5 = 1;
      MultiByteStr = wParam;
      byte_100330A1 = 1;
    }
    else
    {
      v4 = MultiByteStr;
      v5 = byte_100330A1;
    }
    if ( v4 )
    {
      if ( code == 5 && v5 == 1 )
      {
        GetWindowRect(v4, &Rect);
        MoveWindow(
          MultiByteStr,
          Rect.left - ((unsigned int)(Rect.right - Rect.left) >> 1),
          Rect.top - ((unsigned int)(Rect.bottom - Rect.top) >> 1),
          Rect.right - Rect.left,
          Rect.bottom - Rect.top,
          1);
        if ( byte_100330A0 == 1 )
          SendDlgItemMessageW(MultiByteStr, 1000, 0xCCu, 0x25CFu, 0);
        byte_100330A1 = 0;
      }
      sub_100087A0(&dword_1002F8F8);
      sub_10001680(v14, v15, v16, v17, v18, v19);
      v6 = (const WCHAR *)pszPath;
      if ( v25 >= 8 )
        v6 = pszPath[0];
      if ( PathFileExistsW(v6) )
      {
        v7 = pszPath;
        if ( v25 >= 8 )
          v7 = (LPCWSTR *)pszPath[0];
        v20 = (HWND)v7;
        v8 = GdipAlloc(16);
        if ( v8 )
        {
          v22 = 0;
          *(_OWORD *)v8 = 0;
          *(_DWORD *)v8 = &Gdiplus::Bitmap::`vftable';
          *(_DWORD *)(v8 + 8) = GdipCreateBitmapFromFile(v20, &v22);
          *(_DWORD *)(v8 + 4) = v22;
        }
        else
        {
          v8 = 0;
        }
        v9 = GdipCreateHICONFromBitmap(*(_DWORD *)(v8 + 4), &lParama);
        if ( v9 )
          *(_DWORD *)(v8 + 8) = v9;
        PostMessageA(MultiByteStr, 0x80u, 0, lParama);
        DeleteObject((HGDIOBJ)lParama);
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      else
      {
        v21 = dword_1003309C;
        ClassLongW = (void *)SendMessageW(dword_1003309C, 0x7Fu, 0, 0);
        if ( !ClassLongW )
        {
          ClassLongW = (void *)GetClassLongW(v21, -34);
          if ( !ClassLongW )
          {
            ModuleHandleW = GetModuleHandleW(nullptr);
            ClassLongW = LoadIconA(ModuleHandleW, nullptr);
            if ( !ClassLongW )
              ClassLongW = LoadIconA(nullptr, (LPCSTR)0x7F00);
          }
        }
        PostMessageA(MultiByteStr, 0x80u, 0, (LPARAM)ClassLongW);
        DeleteObject(ClassLongW);
      }
      if ( v25 >= 8 )
      {
        v12 = (WCHAR *)pszPath[0];
        if ( 2 * v25 + 2 >= 0x1000 )
        {
          v12 = *((WCHAR **)pszPath[0] - 1);
          if ( (unsigned int)((char *)pszPath[0] - (char *)v12 - 4) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        sub_1000E529(v12);
      }
      v3 = lParam;
      pszPath[4] = nullptr;
      v25 = 7;
      LOWORD(pszPath[0]) = 0;
    }
  }
  return CallNextHookEx(hhk, code, (WPARAM)wParam, v3);
}


/* sub_10003490  @0x10003490  size=672 */
LRESULT __stdcall sub_10003490(int code, HWND wParam, LPARAM lParam)
{
  LPARAM v3; // esi
  HWND v4; // eax
  char v5; // cl
  const WCHAR *v6; // eax
  LPCWSTR *v7; // eax
  int v8; // esi
  int v9; // eax
  void *ClassLongW; // esi
  HMODULE ModuleHandleW; // eax
  WCHAR *v12; // ecx
  const CHAR *v14; // [esp-18h] [ebp-70h]
  int v15; // [esp-14h] [ebp-6Ch]
  int v16; // [esp-10h] [ebp-68h]
  int v17; // [esp-Ch] [ebp-64h]
  int v18; // [esp-8h] [ebp-60h]
  unsigned int v19; // [esp-4h] [ebp-5Ch]
  HWND v20; // [esp+Ch] [ebp-4Ch]
  HWND v21; // [esp+Ch] [ebp-4Ch]
  int v22; // [esp+14h] [ebp-44h] BYREF
  LPARAM lParama; // [esp+18h] [ebp-40h] BYREF
  LPCWSTR pszPath[5]; // [esp+1Ch] [ebp-3Ch] BYREF
  unsigned int v25; // [esp+30h] [ebp-28h]
  struct tagRECT Rect; // [esp+34h] [ebp-24h] BYREF
  struct tagRECT v27; // [esp+44h] [ebp-14h] BYREF

  v3 = lParam;
  if ( code >= 0 )
  {
    if ( code == 3
      && ((EnableWindow(dword_1003309C, 1), dword_1003309C == GetDesktopWindow())
       || dword_1003309C != wParam && *(HWND *)(*(_DWORD *)lParam + 12) == dword_1003309C) )
    {
      v4 = wParam;
      v5 = 1;
      MultiByteStr = wParam;
      byte_100330A1 = 1;
    }
    else
    {
      v4 = MultiByteStr;
      v5 = byte_100330A1;
    }
    if ( v4 )
    {
      if ( code == 5 && v5 == 1 )
      {
        GetWindowRect(v4, &Rect);
        GetWindowRect(dword_1003309C, &v27);
        MoveWindow(
          MultiByteStr,
          v27.left + ((unsigned int)(v27.right - v27.left) >> 1) - ((unsigned int)(Rect.right - Rect.left) >> 1),
          v27.top + ((unsigned int)(v27.bottom - v27.top) >> 1) - ((unsigned int)(Rect.bottom - Rect.top) >> 1),
          Rect.right - Rect.left,
          Rect.bottom - Rect.top,
          1);
        byte_100330A1 = 0;
      }
      sub_100087A0(&dword_1002F8F8);
      sub_10001680(v14, v15, v16, v17, v18, v19);
      v6 = (const WCHAR *)pszPath;
      if ( v25 >= 8 )
        v6 = pszPath[0];
      if ( PathFileExistsW(v6) )
      {
        v7 = pszPath;
        if ( v25 >= 8 )
          v7 = (LPCWSTR *)pszPath[0];
        v20 = (HWND)v7;
        v8 = GdipAlloc(16);
        if ( v8 )
        {
          v22 = 0;
          *(_OWORD *)v8 = 0;
          *(_DWORD *)v8 = &Gdiplus::Bitmap::`vftable';
          *(_DWORD *)(v8 + 8) = GdipCreateBitmapFromFile(v20, &v22);
          *(_DWORD *)(v8 + 4) = v22;
        }
        else
        {
          v8 = 0;
        }
        v9 = GdipCreateHICONFromBitmap(*(_DWORD *)(v8 + 4), &lParama);
        if ( v9 )
          *(_DWORD *)(v8 + 8) = v9;
        PostMessageA(MultiByteStr, 0x80u, 0, lParama);
        DeleteObject((HGDIOBJ)lParama);
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
      }
      else
      {
        v21 = dword_1003309C;
        ClassLongW = (void *)SendMessageW(dword_1003309C, 0x7Fu, 0, 0);
        if ( !ClassLongW )
        {
          ClassLongW = (void *)GetClassLongW(v21, -34);
          if ( !ClassLongW )
          {
            ModuleHandleW = GetModuleHandleW(nullptr);
            ClassLongW = LoadIconA(ModuleHandleW, nullptr);
            if ( !ClassLongW )
              ClassLongW = LoadIconA(nullptr, (LPCSTR)0x7F00);
          }
        }
        PostMessageA(MultiByteStr, 0x80u, 0, (LPARAM)ClassLongW);
        DeleteObject(ClassLongW);
      }
      if ( v25 >= 8 )
      {
        v12 = (WCHAR *)pszPath[0];
        if ( 2 * v25 + 2 >= 0x1000 )
        {
          v12 = *((WCHAR **)pszPath[0] - 1);
          if ( (unsigned int)((char *)pszPath[0] - (char *)v12 - 4) > 0x1F )
            _invalid_parameter_noinfo_noreturn();
        }
        sub_1000E529(v12);
      }
      v3 = lParam;
      pszPath[4] = nullptr;
      v25 = 7;
      LOWORD(pszPath[0]) = 0;
    }
  }
  return CallNextHookEx(hhk, code, (WPARAM)wParam, v3);
}


/* sub_10003740  @0x10003740  size=524 */
int __cdecl sub_10003740(
        __int128 Src,
        __int64 a2,
        _DWORD *Block,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        _DWORD *a9,
        int a10,
        int a11,
        int a12,
        size_t Size,
        unsigned int a14)
{
  int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // esi
  _DWORD **p_Block; // edx
  __int128 *p_Src; // ecx
  int v19; // eax
  char *v20; // edi
  _DWORD **v21; // eax
  char *v22; // edx
  unsigned int v23; // esi
  bool v24; // cf
  unsigned __int8 v25; // cl
  unsigned __int8 v26; // cl
  unsigned __int8 v27; // cl
  int v28; // eax
  _DWORD **v29; // eax
  __int128 v30; // xmm0
  unsigned int v31; // eax
  _BYTE *v32; // edx
  void *v33; // ecx
  int v35; // [esp+Ch] [ebp-28h]
  int v36; // [esp+10h] [ebp-24h]
  __int128 *v37; // [esp+14h] [ebp-20h]
  int Val; // [esp+18h] [ebp-1Ch]
  char *v39; // [esp+1Ch] [ebp-18h]
  _DWORD **v40; // [esp+20h] [ebp-14h]
  size_t v41; // [esp+24h] [ebp-10h]

  v35 = v14;
  v15 = 0;
  v16 = a7;
  v36 = a7;
  v41 = Size;
LABEL_2:
  p_Block = &Block;
  p_Src = &Src;
  if ( a8 >= 0x10 )
    p_Block = (_DWORD **)Block;
  v40 = p_Block;
  if ( HIDWORD(a2) >= 0x10 )
    p_Src = (__int128 *)Src;
  v37 = p_Src;
  if ( v16 <= (unsigned int)a2 )
  {
    v19 = a2 - v16;
    if ( v15 <= (unsigned int)a2 - v16 )
    {
      if ( !v16 )
        goto LABEL_27;
      Val = *(char *)p_Block;
      v39 = (char *)p_Src + v19 + 1;
      v20 = (char *)memchr((char *)p_Src + v15, Val, v19 + 1 - v15);
      if ( v20 )
      {
        while ( 1 )
        {
          v21 = v40;
          v22 = v20;
          v24 = v16 < 4;
          v23 = v16 - 4;
          if ( v24 )
          {
LABEL_13:
            if ( v23 == -4 )
              goto LABEL_22;
          }
          else
          {
            while ( *(_DWORD **)v22 == *v21 )
            {
              v22 += 4;
              ++v21;
              v24 = v23 < 4;
              v23 -= 4;
              if ( v24 )
                goto LABEL_13;
            }
          }
          v24 = (unsigned __int8)*v22 < *(_BYTE *)v21;
          if ( *v22 != *(_BYTE *)v21
            || v23 != -3
            && ((v25 = v22[1], v24 = v25 < *((_BYTE *)v21 + 1), v25 != *((_BYTE *)v21 + 1))
             || v23 != -2
             && ((v26 = v22[2], v24 = v26 < *((_BYTE *)v21 + 2), v26 != *((_BYTE *)v21 + 2))
              || v23 != -1 && (v27 = v22[3], v24 = v27 < *((_BYTE *)v21 + 3), v27 != *((_BYTE *)v21 + 3)))) )
          {
            v28 = v24 ? -1 : 1;
            goto LABEL_23;
          }
LABEL_22:
          v28 = 0;
LABEL_23:
          if ( !v28 )
          {
            v15 = v20 - (char *)v37;
LABEL_27:
            if ( v15 != -1 )
            {
              v29 = &a9;
              if ( a14 >= 0x10 )
                v29 = (_DWORD **)a9;
              sub_100089D0(&Src, v15, v36, v29, Size);
              v15 += v41;
              v16 = a7;
              goto LABEL_2;
            }
            break;
          }
          v20 = (char *)memchr(v20 + 1, Val, v39 - (v20 + 1));
          if ( !v20 )
            break;
          v16 = a7;
        }
      }
    }
  }
  v30 = Src;
  v31 = a8;
  LOBYTE(Src) = 0;
  *(_DWORD *)(v35 + 16) = 0;
  *(_DWORD *)(v35 + 20) = 0;
  *(_OWORD *)v35 = v30;
  *(_QWORD *)(v35 + 16) = a2;
  a2 = 0xF00000000LL;
  if ( v31 >= 0x10 )
  {
    v32 = Block;
    if ( v31 + 1 >= 0x1000 )
    {
      v32 = (_BYTE *)*(Block - 1);
      if ( (unsigned int)((char *)Block - v32 - 4) > 0x1F )
        goto LABEL_40;
    }
    sub_1000E529(v32);
  }
  a7 = 0;
  a8 = 15;
  LOBYTE(Block) = 0;
  if ( a14 >= 0x10 )
  {
    v33 = a9;
    if ( a14 + 1 < 0x1000 || (v33 = (void *)*(a9 - 1), (unsigned int)((char *)a9 - (_BYTE *)v33 - 4) <= 0x1F) )
    {
      sub_1000E529(v33);
      return v35;
    }
LABEL_40:
    _invalid_parameter_noinfo_noreturn();
  }
  return v35;
}


/* sub_10003950  @0x10003950  size=4321 */
// bad sp value at call has been detected, the output may be wrong!
void **__usercall sub_10003950@<eax>(void *a1@<edx>, void *a2@<ecx>, int a3@<ebp>, void *a4)
{
  _DWORD *v4; // esi
  HWND ForegroundWindow; // edi
  __int64 *v6; // esi
  _BYTE *v7; // esi
  const char *v8; // ecx
  int v9; // edi
  int v10; // edx
  __int64 *v11; // eax
  char *v12; // esi
  __int64 *v13; // ecx
  int v14; // edx
  __int64 *v15; // eax
  __int128 v16; // xmm0
  _DWORD *v17; // ecx
  unsigned int v18; // edi
  int v19; // edx
  char *v20; // esi
  __int128 v21; // xmm0
  _DWORD *v22; // edi
  unsigned int v23; // edx
  int v24; // ecx
  _DWORD *v25; // eax
  char *v26; // esi
  __int128 v27; // xmm0
  _DWORD *v28; // ecx
  unsigned int v29; // edi
  int v30; // edx
  char *v31; // esi
  __int128 v32; // xmm0
  _DWORD *v33; // ecx
  unsigned int v34; // edi
  int v35; // edx
  char *v36; // esi
  _BYTE *v37; // ecx
  unsigned int v38; // edx
  void *v39; // ecx
  int v40; // edx
  _BYTE *v41; // ecx
  unsigned int v42; // edx
  _BYTE *v43; // ecx
  int v44; // edx
  _BYTE *v45; // ecx
  unsigned int v46; // edx
  _BYTE *v47; // ecx
  int v48; // edx
  _BYTE *v49; // ecx
  unsigned int v50; // edx
  _BYTE *v51; // ecx
  int v52; // edx
  void *v53; // ecx
  int v54; // edx
  int v55; // eax
  _BYTE *v56; // ecx
  unsigned int v57; // edx
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  HHOOK v60; // eax
  _DWORD *v61; // edx
  unsigned int v62; // eax
  WCHAR *v63; // eax
  HRESULT v64; // eax
  HRESULT v65; // eax
  OLECHAR **v66; // esi
  char *v67; // eax
  char *v68; // ecx
  __int16 v69; // ax
  _DWORD *v70; // eax
  void **v71; // eax
  void *v72; // ecx
  unsigned int v73; // edx
  void *v74; // ecx
  int v75; // edx
  void *v76; // ecx
  unsigned int v77; // edx
  void *v78; // ecx
  unsigned int v79; // edx
  void *v80; // ecx
  unsigned int v81; // edx
  void *v82; // ecx
  unsigned int v83; // edx
  char *v84; // ecx
  int v85; // edx
  _BYTE *v87; // [esp-230h] [ebp-23Ch]
  unsigned int v88; // [esp-21Ch] [ebp-228h]
  _BYTE *v89; // [esp-218h] [ebp-224h]
  unsigned int v90; // [esp-204h] [ebp-210h]
  _BYTE *v91; // [esp-200h] [ebp-20Ch]
  unsigned int v92; // [esp-1ECh] [ebp-1F8h]
  _BYTE *v93; // [esp-1E8h] [ebp-1F4h]
  unsigned int v94; // [esp-1D4h] [ebp-1E0h]
  _BYTE *v95; // [esp-1D0h] [ebp-1DCh]
  __int64 v96; // [esp-1C0h] [ebp-1CCh]
  _BYTE *v97; // [esp-1B8h] [ebp-1C4h]
  __int64 v98; // [esp-1A8h] [ebp-1B4h]
  _BYTE *v99; // [esp-1A0h] [ebp-1ACh]
  __int64 v100; // [esp-190h] [ebp-19Ch]
  __int64 v101; // [esp-178h] [ebp-184h]
  _BYTE *v102; // [esp-170h] [ebp-17Ch]
  unsigned int v103; // [esp-15Ch] [ebp-168h]
  _DWORD *v105; // [esp-150h] [ebp-15Ch]
  char *v106; // [esp-150h] [ebp-15Ch]
  void **v107; // [esp-150h] [ebp-15Ch]
  char *v109; // [esp-148h] [ebp-154h]
  int v110; // [esp-144h] [ebp-150h]
  struct tagRECT v111; // [esp-140h] [ebp-14Ch] BYREF
  struct tagRECT v112; // [esp-130h] [ebp-13Ch] BYREF
  VARIANTARG v113; // [esp-120h] [ebp-12Ch] BYREF
  _BYTE v114[32]; // [esp-110h] [ebp-11Ch] BYREF
  _DWORD v115[5]; // [esp-F0h] [ebp-FCh] BYREF
  unsigned int v116; // [esp-DCh] [ebp-E8h]
  _DWORD v117[5]; // [esp-D8h] [ebp-E4h] BYREF
  unsigned int v118; // [esp-C4h] [ebp-D0h]
  _DWORD v119[5]; // [esp-C0h] [ebp-CCh] BYREF
  unsigned int v120; // [esp-ACh] [ebp-B8h]
  _DWORD v121[5]; // [esp-A8h] [ebp-B4h] BYREF
  unsigned int v122; // [esp-94h] [ebp-A0h]
  __int128 v123; // [esp-90h] [ebp-9Ch] BYREF
  __int64 v124; // [esp-80h] [ebp-8Ch]
  VARIANTARG v125; // [esp-78h] [ebp-84h] BYREF
  _DWORD v126[5]; // [esp-68h] [ebp-74h] BYREF
  unsigned int v127; // [esp-54h] [ebp-60h]
  const char *v128; // [esp-50h] [ebp-5Ch] BYREF
  __int128 v129; // [esp-48h] [ebp-54h] BYREF
  __int64 v130; // [esp-38h] [ebp-44h] BYREF
  CLSID v131; // [esp-30h] [ebp-3Ch] BYREF
  WCHAR *v132; // [esp-20h] [ebp-2Ch] BYREF
  unsigned int v133; // [esp-1Ch] [ebp-28h] BYREF
  int v134; // [esp-18h] [ebp-24h] BYREF
  int v135; // [esp-14h] [ebp-20h]
  int *v136; // [esp-10h] [ebp-1Ch]
  unsigned int ExceptionList; // [esp-Ch] [ebp-18h]
  const char *v138; // [esp-8h] [ebp-14h]
  unsigned int v139; // [esp-4h] [ebp-10h]
  int v140; // [esp+0h] [ebp-Ch]
  void *v141; // [esp+4h] [ebp-8h]
  int v142; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v140 = a3;
  v141 = retaddr;
  v139 = -1;
  v138 = (const char *)&loc_100227B0;
  ExceptionList = (unsigned int)NtCurrentTeb()->NtTib.ExceptionList;
  v136 = &v142;
  v134 = 0;
  CoInitialize(nullptr);
  v4 = operator new(0x10u);
  v105 = v4;
  *(_OWORD *)v4 = 0;
  *v4 = &dialog_module::`anonymous namespace'::CSimpleScriptSite::`vftable';
  v4[1] = &dialog_module::`anonymous namespace'::CSimpleScriptSite::`vftable';
  v4[2] = 1;
  v4[3] = 0;
  v132 = nullptr;
  v139 = 1;
  v133 = 0;
  ForegroundWindow = hWnd;
  if ( !hWnd )
    ForegroundWindow = GetForegroundWindow();
  dword_1003309C = ForegroundWindow;
  if ( !ForegroundWindow )
  {
    ForegroundWindow = GetDesktopWindow();
    dword_1003309C = ForegroundWindow;
  }
  (*(void (__cdecl **)(_DWORD *, HWND))(*v4 + 44))(v4, ForegroundWindow);
  if ( CLSIDFromProgID(L"VBScript", &v131) >= 0 )
    CoCreateInstance(&v131, nullptr, 0x17u, &riid, (LPVOID *)&v132);
  (*(void (__stdcall **)(WCHAR *, _DWORD *))(*(_DWORD *)v132 + 12))(v132, v4);
  (**(void (__stdcall ***)(WCHAR *, void *, unsigned int *))v132)(v132, &unk_1002B340, &v133);
  (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v133 + 12))(v133);
  v134 = (int)&v134;
  v138 = nullptr;
  v139 = 15;
  LOBYTE(v134) = 0;
  sub_10008B40(&v134, "\"\"", 2u);
  LOBYTE(v139) = 2;
  v132 = nullptr;
  v133 = 15;
  LOBYTE(v131.Data1) = 0;
  sub_10008B40(&v131, "\"", 1u);
  LOBYTE(v139) = 3;
  v130 = 0xF00000000LL;
  LOBYTE(v129) = 0;
  sub_10008B40(&v129, a2, strlen((const char *)a2));
  LOBYTE(v139) = 1;
  sub_10003740(
    v129,
    v130,
    v131.Data1,
    *(int *)&v131.Data2,
    *(int *)v131.Data4,
    *(int *)&v131.Data4[4],
    (int)v132,
    v133,
    (_DWORD *)v134,
    v135,
    (int)v136,
    ExceptionList,
    (size_t)v138,
    v139);
  v138 = nullptr;
  v139 = 15;
  LOBYTE(v134) = 0;
  sub_10008B40(&v134, "\"\"", 2u);
  LOBYTE(v139) = 5;
  v132 = nullptr;
  v133 = 15;
  LOBYTE(v131.Data1) = 0;
  sub_10008B40(&v131, "\"", 1u);
  LOBYTE(v139) = 6;
  v130 = 0xF00000000LL;
  LOBYTE(v129) = 0;
  sub_10008B40(&v129, a1, strlen((const char *)a1));
  LOBYTE(v139) = 4;
  sub_10003740(
    v129,
    v130,
    v131.Data1,
    *(int *)&v131.Data2,
    *(int *)v131.Data4,
    *(int *)&v131.Data4[4],
    (int)v132,
    v133,
    (_DWORD *)v134,
    v135,
    (int)v136,
    ExceptionList,
    (size_t)v138,
    v139);
  v138 = nullptr;
  v139 = 15;
  LOBYTE(v134) = 0;
  sub_10008B40(&v134, "\"\"", 2u);
  LOBYTE(v139) = 8;
  v132 = nullptr;
  v133 = 15;
  LOBYTE(v131.Data1) = 0;
  sub_10008B40(&v131, "\"", 1u);
  LOBYTE(v139) = 9;
  v130 = 0xF00000000LL;
  LOBYTE(v129) = 0;
  v110 = (int)a4 + 1;
  sub_10008B40(&v129, a4, strlen((const char *)a4));
  LOBYTE(v139) = 7;
  sub_10003740(
    v129,
    v130,
    v131.Data1,
    *(int *)&v131.Data2,
    *(int *)v131.Data4,
    *(int *)&v131.Data4[4],
    (int)v132,
    v133,
    (_DWORD *)v134,
    v135,
    (int)v136,
    ExceptionList,
    (size_t)v138,
    v139);
  GetWindowRect(ForegroundWindow, &v112);
  GetWindowRect(ForegroundWindow, &v111);
  sub_100015D0(v115, 15 * ((v112.left + v111.right) / 2));
  sub_100015D0(v117, 15 * ((v112.top + v111.bottom) / 2));
  *(_DWORD *)v131.Data4 = 0;
  *(_DWORD *)&v131.Data4[4] = 15;
  LOBYTE(v130) = 0;
  v134 = 1;
  sub_100096F0(&v130, DWORD2(v129) + 10);
  v139 = 10;
  v138 = "InputBox(\"";
  if ( (unsigned int)(*(_DWORD *)&v131.Data4[4] - *(_DWORD *)v131.Data4) < 0xA )
  {
    LOBYTE(v110) = 0;
    sub_10009580(&v130, 10, v110, (int)v138, v139);
  }
  else
  {
    v6 = &v130;
    if ( *(_DWORD *)&v131.Data4[4] >= 0x10u )
      v6 = (__int64 *)v130;
    v7 = (char *)v6 + *(_DWORD *)v131.Data4;
    *(_DWORD *)v131.Data4 += 10;
    memmove(v7, v138, v139);
    v7[10] = 0;
  }
  v8 = (const char *)&v128;
  if ( HIDWORD(v129) >= 0x10 )
    v8 = v128;
  v9 = DWORD2(v129);
  v10 = *(_DWORD *)v131.Data4;
  v139 = DWORD2(v129);
  v138 = v8;
  if ( DWORD2(v129) > *(_DWORD *)&v131.Data4[4] - *(_DWORD *)v131.Data4 )
  {
    LOBYTE(v110) = 0;
    sub_10009580(&v130, SDWORD2(v129), v110, (int)v138, v139);
  }
  else
  {
    *(_DWORD *)v131.Data4 += DWORD2(v129);
    v11 = &v130;
    if ( *(_DWORD *)&v131.Data4[4] >= 0x10u )
      v11 = (__int64 *)v130;
    v12 = (char *)v11 + v10;
    memmove((char *)v11 + v10, v138, v139);
    v12[v9] = 0;
  }
  v13 = &v130;
  v14 = *(_DWORD *)v131.Data4;
  if ( (unsigned int)(*(_DWORD *)&v131.Data4[4] - *(_DWORD *)v131.Data4) < 4 )
  {
    LOBYTE(v110) = 0;
    v15 = (__int64 *)sub_10009580(&v130, 4, v110, (int)"\", \"", 4u);
  }
  else
  {
    *(_DWORD *)v131.Data4 += 4;
    if ( *(_DWORD *)&v131.Data4[4] >= 0x10u )
      v13 = (__int64 *)v130;
    strcpy((char *)v13 + v14, "\", \"");
    v15 = &v130;
  }
  v16 = *(_OWORD *)v15;
  v134 = 3;
  v95 = (_BYTE *)v16;
  v96 = v15[2];
  *((_DWORD *)v15 + 4) = 0;
  *((_DWORD *)v15 + 5) = 15;
  *(_BYTE *)v15 = 0;
  v17 = (_DWORD *)sub_10008DA0(v119);
  LOBYTE(v139) = 15;
  v18 = v17[5];
  v19 = v17[4];
  if ( v18 - v19 < 4 )
  {
    LOBYTE(v110) = 0;
    v17 = (_DWORD *)sub_10009580(v17, 4, v110, (int)"\", \"", 4u);
  }
  else
  {
    v20 = (char *)v17;
    v17[4] = v19 + 4;
    if ( v18 >= 0x10 )
      v20 = (char *)*v17;
    strcpy(&v20[v19], "\", \"");
  }
  v21 = *(_OWORD *)v17;
  v134 = 7;
  v97 = (_BYTE *)v21;
  v98 = *((_QWORD *)v17 + 2);
  v17[4] = 0;
  v17[5] = 15;
  *(_BYTE *)v17 = 0;
  v22 = (_DWORD *)sub_10008DA0(v121);
  LOBYTE(v139) = 17;
  v23 = v22[5];
  v24 = v22[4];
  if ( v23 - v24 < 3 )
  {
    LOBYTE(v110) = 0;
    v22 = (_DWORD *)sub_10009580(v22, 3, v110, (int)"\", ", 3u);
  }
  else
  {
    v22[4] = v24 + 3;
    v25 = v22;
    if ( v23 >= 0x10 )
      v25 = (_DWORD *)*v22;
    v26 = (char *)v25 + v24;
    memmove((char *)v25 + v24, "\", ", 3u);
    v26[3] = 0;
  }
  v27 = *(_OWORD *)v22;
  v134 = 15;
  v99 = (_BYTE *)v27;
  v100 = *((_QWORD *)v22 + 2);
  v22[4] = 0;
  v22[5] = 15;
  *(_BYTE *)v22 = 0;
  v28 = (_DWORD *)sub_10008DA0(v115);
  LOBYTE(v139) = 19;
  v29 = v28[5];
  v30 = v28[4];
  if ( v29 - v30 < 2 )
  {
    LOBYTE(v110) = 0;
    v28 = (_DWORD *)sub_10009580(v28, 2, v110, (int)", ", 2u);
  }
  else
  {
    v31 = (char *)v28;
    v28[4] = v30 + 2;
    if ( v29 >= 0x10 )
      v31 = (char *)*v28;
    strcpy(&v31[v30], ", ");
  }
  v32 = *(_OWORD *)v28;
  v134 = 31;
  v101 = *((_QWORD *)v28 + 2);
  v28[4] = 0;
  v28[5] = 15;
  *(_BYTE *)v28 = 0;
  v33 = (_DWORD *)sub_10008DA0(v117);
  LOBYTE(v139) = 21;
  v34 = v33[5];
  v35 = v33[4];
  if ( v34 == v35 )
  {
    LOBYTE(v110) = 0;
    v33 = (_DWORD *)sub_10009580(v33, 1, v110, (int)")", 1u);
  }
  else
  {
    v36 = (char *)v33;
    v33[4] = v35 + 1;
    if ( v34 >= 0x10 )
      v36 = (char *)*v33;
    strcpy(&v36[v35], ")");
  }
  v123 = *(_OWORD *)v33;
  v124 = *((_QWORD *)v33 + 2);
  v33[4] = 0;
  v33[5] = 15;
  *(_BYTE *)v33 = 0;
  LOBYTE(v139) = 23;
  if ( v94 >= 0x10 )
  {
    v37 = v93;
    v38 = v94 + 1;
    if ( v94 + 1 >= 0x1000 )
    {
      v37 = *((_BYTE **)v93 - 1);
      v38 = v94 + 36;
      if ( (unsigned int)(v93 - v37 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v38;
    sub_1000E529(v37);
  }
  LOBYTE(v139) = 24;
  if ( HIDWORD(v101) >= 0x10 )
  {
    v39 = (void *)v32;
    v40 = HIDWORD(v101) + 1;
    if ( (unsigned int)(HIDWORD(v101) + 1) >= 0x1000 )
    {
      v39 = *(void **)(v32 - 4);
      v40 = HIDWORD(v101) + 36;
      if ( (unsigned int)(v32 - (_DWORD)v39 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v40;
    sub_1000E529(v39);
  }
  LOBYTE(v139) = 25;
  if ( v92 >= 0x10 )
  {
    v41 = v91;
    v42 = v92 + 1;
    if ( v92 + 1 >= 0x1000 )
    {
      v41 = *((_BYTE **)v91 - 1);
      v42 = v92 + 36;
      if ( (unsigned int)(v91 - v41 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v42;
    sub_1000E529(v41);
  }
  LOBYTE(v139) = 26;
  if ( HIDWORD(v100) >= 0x10 )
  {
    v43 = v99;
    v44 = HIDWORD(v100) + 1;
    if ( (unsigned int)(HIDWORD(v100) + 1) >= 0x1000 )
    {
      v43 = *((_BYTE **)v99 - 1);
      v44 = HIDWORD(v100) + 36;
      if ( (unsigned int)(v99 - v43 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v44;
    sub_1000E529(v43);
  }
  LOBYTE(v139) = 27;
  if ( v90 >= 0x10 )
  {
    v45 = v89;
    v46 = v90 + 1;
    if ( v90 + 1 >= 0x1000 )
    {
      v45 = *((_BYTE **)v89 - 1);
      v46 = v90 + 36;
      if ( (unsigned int)(v89 - v45 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v46;
    sub_1000E529(v45);
  }
  LOBYTE(v139) = 28;
  if ( HIDWORD(v98) >= 0x10 )
  {
    v47 = v97;
    v48 = HIDWORD(v98) + 1;
    if ( (unsigned int)(HIDWORD(v98) + 1) >= 0x1000 )
    {
      v47 = *((_BYTE **)v97 - 1);
      v48 = HIDWORD(v98) + 36;
      if ( (unsigned int)(v97 - v47 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v48;
    sub_1000E529(v47);
  }
  LOBYTE(v139) = 29;
  if ( v103 >= 0x10 )
  {
    v49 = v102;
    v50 = v103 + 1;
    if ( v103 + 1 >= 0x1000 )
    {
      v49 = *((_BYTE **)v102 - 1);
      v50 = v103 + 36;
      if ( (unsigned int)(v102 - v49 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v50;
    sub_1000E529(v49);
  }
  LOBYTE(v139) = 30;
  if ( HIDWORD(v96) >= 0x10 )
  {
    v51 = v95;
    v52 = HIDWORD(v96) + 1;
    if ( (unsigned int)(HIDWORD(v96) + 1) >= 0x1000 )
    {
      v51 = *((_BYTE **)v95 - 1);
      v52 = HIDWORD(v96) + 36;
      if ( (unsigned int)(v95 - v51 - 4) > 0x1F )
        goto LABEL_145;
    }
    v139 = v52;
    sub_1000E529(v51);
  }
  LOBYTE(v139) = 31;
  if ( *(_DWORD *)&v131.Data4[4] < 0x10u )
    goto LABEL_80;
  v53 = (void *)v130;
  v54 = *(_DWORD *)&v131.Data4[4] + 1;
  if ( (unsigned int)(*(_DWORD *)&v131.Data4[4] + 1) >= 0x1000 )
  {
    v53 = *(void **)(v130 - 4);
    v54 = *(_DWORD *)&v131.Data4[4] + 36;
    if ( (unsigned int)(v130 - (_DWORD)v53 - 4) > 0x1F )
LABEL_145:
      _invalid_parameter_noinfo_noreturn();
  }
  v139 = v54;
  sub_1000E529(v53);
LABEL_80:
  *(_DWORD *)v131.Data4 = 0;
  *(_DWORD *)&v131.Data4[4] = 15;
  v138 = nullptr;
  v139 = 15;
  LOBYTE(v134) = 0;
  sub_10008B40(&v134, "\" + vbNewLine + \"", 0x11u);
  LOBYTE(v139) = 32;
  v132 = nullptr;
  v133 = 15;
  LOBYTE(v131.Data1) = 0;
  sub_10008B40(&v131, "\r\n", 2u);
  LOBYTE(v139) = 33;
  sub_100087A0(&v123);
  LOBYTE(v139) = 31;
  v55 = sub_10003740(
          v129,
          v130,
          v131.Data1,
          *(int *)&v131.Data2,
          *(int *)v131.Data4,
          *(int *)&v131.Data4[4],
          (int)v132,
          v133,
          (_DWORD *)v134,
          v135,
          (int)v136,
          ExceptionList,
          (size_t)v138,
          v139);
  sub_100086A0(v55);
  if ( v88 >= 0x10 )
  {
    v56 = v87;
    v57 = v88 + 1;
    if ( v88 + 1 >= 0x1000 )
    {
      v56 = *((_BYTE **)v87 - 1);
      v57 = v88 + 36;
      if ( (unsigned int)(v87 - v56 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v139 = v57;
    sub_1000E529(v56);
  }
  sub_100087A0(&v123);
  sub_10001680((const CHAR *)v134, v135, (int)v136, ExceptionList, (int)v138, v139);
  v125 = 0;
  VariantInit(&v125);
  memset(v114, 0, sizeof(v114));
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  v60 = SetWindowsHookExA(5, (HOOKPROC)fn, ModuleHandleA, CurrentThreadId);
  v139 = (unsigned int)v114;
  hhk = v60;
  v61 = v126;
  if ( v127 >= 8 )
    v61 = (_DWORD *)v126[0];
  (*(void (__stdcall **)(unsigned int, _DWORD *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, VARIANTARG *))(*(_DWORD *)v133 + 20))(
    v133,
    v61,
    0,
    0,
    0,
    0,
    0,
    32,
    &v125);
  UnhookWindowsHookEx(hhk);
  v62 = v133;
  if ( v133 )
  {
    v133 = 0;
    (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v62 + 8))(v62);
  }
  v63 = v132;
  if ( v132 )
  {
    v132 = nullptr;
    (*(void (__stdcall **)(WCHAR *))(*(_DWORD *)v63 + 8))(v63);
  }
  (*(void (__thiscall **)(_DWORD *, _DWORD *, unsigned int))(*v105 + 8))(v105, v105, v139);
  CoUninitialize();
  if ( dword_10033184 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_10033184);
    if ( dword_10033184 == -1 )
    {
      dword_1003320C = 0;
      dword_10033210 = 15;
      LOBYTE(dword_100331FC) = 0;
      atexit(sub_10023050);
      _Init_thread_footer(&dword_10033184);
    }
  }
  VariantInit((VARIANTARG *)&v131);
  v64 = VariantCopy((VARIANTARG *)&v131, &v125);
  if ( v64 < 0 )
    sub_1000D030(v64);
  LOBYTE(v139) = 36;
  v134 = 0;
  if ( LOWORD(v131.Data1) == 8 )
  {
    sub_10001470((OLECHAR ***)&v134, *(OLECHAR **)v131.Data4);
  }
  else
  {
    VariantInit(&v113);
    LOBYTE(v139) = 37;
    v65 = VariantChangeType(&v113, (const VARIANTARG *)&v131, 0, 8u);
    if ( v65 < 0 )
      sub_1000D030(v65);
    sub_10001470((OLECHAR ***)&v134, v113.bstrVal);
    VariantClear(&v113);
  }
  LOBYTE(v139) = 39;
  VariantClear((VARIANTARG *)&v131);
  v66 = (OLECHAR **)v134;
  if ( v134 )
    v67 = *(char **)v134;
  else
    v67 = nullptr;
  v109 = v67;
  LOWORD(v132) = 0;
  v68 = v67;
  v136 = nullptr;
  ExceptionList = 7;
  v106 = v67 + 2;
  do
  {
    v69 = *(_WORD *)v68;
    v68 += 2;
  }
  while ( v69 );
  sub_10008870(&v132, v109, (v68 - v106) >> 1);
  v70 = sub_10001820(v132, v133, v134, v135, (int)v136, ExceptionList);
  sub_100086A0(v70);
  v71 = &dword_100331FC;
  if ( (unsigned int)dword_10033210 >= 0x10 )
    v71 = (void **)dword_100331FC;
  v107 = v71;
  if ( v66 && !_InterlockedDecrement((volatile signed __int32 *)v66 + 2) )
  {
    if ( *v66 )
    {
      SysFreeString(*v66);
      *v66 = nullptr;
    }
    if ( v66[1] )
    {
      j_j__free(v66[1]);
      v66[1] = nullptr;
    }
    ExceptionList = 12;
    sub_1000E529(v66);
  }
  VariantClear(&v125);
  LOBYTE(v139) = 31;
  if ( v127 >= 8 )
  {
    v72 = (void *)v126[0];
    v73 = 2 * v127 + 2;
    if ( v73 >= 0x1000 )
    {
      v72 = *(void **)(v126[0] - 4);
      v73 = 2 * v127 + 37;
      if ( (unsigned int)(v126[0] - (_DWORD)v72 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v73;
    sub_1000E529(v72);
  }
  LOBYTE(v139) = 12;
  v126[4] = 0;
  v127 = 7;
  LOWORD(v126[0]) = 0;
  if ( HIDWORD(v124) >= 0x10 )
  {
    v74 = (void *)v123;
    v75 = HIDWORD(v124) + 1;
    if ( (unsigned int)(HIDWORD(v124) + 1) >= 0x1000 )
    {
      v74 = *(void **)(v123 - 4);
      v75 = HIDWORD(v124) + 36;
      if ( (unsigned int)(v123 - (_DWORD)v74 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v75;
    sub_1000E529(v74);
  }
  LOBYTE(v139) = 11;
  if ( v118 >= 0x10 )
  {
    v76 = (void *)v117[0];
    v77 = v118 + 1;
    if ( v118 + 1 >= 0x1000 )
    {
      v76 = *(void **)(v117[0] - 4);
      v77 = v118 + 36;
      if ( (unsigned int)(v117[0] - (_DWORD)v76 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v77;
    sub_1000E529(v76);
  }
  LOBYTE(v139) = 10;
  if ( v116 >= 0x10 )
  {
    v78 = (void *)v115[0];
    v79 = v116 + 1;
    if ( v116 + 1 >= 0x1000 )
    {
      v78 = *(void **)(v115[0] - 4);
      v79 = v116 + 36;
      if ( (unsigned int)(v115[0] - (_DWORD)v78 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v79;
    sub_1000E529(v78);
  }
  LOBYTE(v139) = 7;
  if ( v122 >= 0x10 )
  {
    v80 = (void *)v121[0];
    v81 = v122 + 1;
    if ( v122 + 1 >= 0x1000 )
    {
      v80 = *(void **)(v121[0] - 4);
      v81 = v122 + 36;
      if ( (unsigned int)(v121[0] - (_DWORD)v80 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v81;
    sub_1000E529(v80);
  }
  LOBYTE(v139) = 4;
  v121[4] = 0;
  v122 = 15;
  LOBYTE(v121[0]) = 0;
  if ( v120 >= 0x10 )
  {
    v82 = (void *)v119[0];
    v83 = v120 + 1;
    if ( v120 + 1 >= 0x1000 )
    {
      v82 = *(void **)(v119[0] - 4);
      v83 = v120 + 36;
      if ( (unsigned int)(v119[0] - (_DWORD)v82 - 4) > 0x1F )
        goto LABEL_149;
    }
    ExceptionList = v83;
    sub_1000E529(v82);
  }
  LOBYTE(v139) = 1;
  v119[4] = 0;
  v120 = 15;
  LOBYTE(v119[0]) = 0;
  if ( HIDWORD(v129) < 0x10 )
    goto LABEL_140;
  v84 = (char *)v128;
  v85 = HIDWORD(v129) + 1;
  if ( (unsigned int)(HIDWORD(v129) + 1) >= 0x1000 )
  {
    v84 = *((char **)v128 - 1);
    v85 = HIDWORD(v129) + 36;
    if ( (unsigned int)(v128 - v84 - 4) > 0x1F )
LABEL_149:
      _invalid_parameter_noinfo_noreturn();
  }
  ExceptionList = v85;
  sub_1000E529(v84);
LABEL_140:
  LOBYTE(v139) = 0;
  *((_QWORD *)&v129 + 1) = 0xF00000000LL;
  LOBYTE(v128) = 0;
  if ( v133 )
    (*(void (__stdcall **)(unsigned int))(*(_DWORD *)v133 + 8))(v133);
  v139 = -1;
  if ( v132 )
    (*(void (__stdcall **)(WCHAR *))(*(_DWORD *)v132 + 8))(v132);
  return v107;
}


/* sub_10004A40  @0x10004a40  size=61 */
int __thiscall sub_10004A40(int *this)
{
  int v1; // ecx
  int result; // eax

  v1 = *this;
  if ( v1 )
    return (*(int (__stdcall **)(int))(*(_DWORD *)v1 + 8))(v1);
  return result;
}


/* sub_10004A80  @0x10004a80  size=447 */
void **__usercall sub_10004A80@<eax>(void *a1@<edx>, void *a2@<ecx>, int a3@<ebp>, char a4)
{
  _DWORD *v6; // eax
  int v7; // ecx
  _BYTE *v8; // ecx
  void *v9; // ecx
  __int128 *v10; // edx
  void **v11; // esi
  void *v12; // ecx
  _BYTE *v14; // [esp-64h] [ebp-70h]
  unsigned int v15; // [esp-50h] [ebp-5Ch]
  _DWORD v16[5]; // [esp-48h] [ebp-54h] BYREF
  unsigned int v17; // [esp-34h] [ebp-40h]
  int v18; // [esp-30h] [ebp-3Ch]
  __int128 v19; // [esp-2Ch] [ebp-38h] BYREF
  __int64 v20; // [esp-1Ch] [ebp-28h]
  int *v21; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v23; // [esp-8h] [ebp-14h]
  int v24; // [esp-4h] [ebp-10h]
  _DWORD v25[2]; // [esp+0h] [ebp-Ch] BYREF
  int v26; // [esp+8h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+Ch] [ebp+0h]

  v25[0] = a3;
  v25[1] = retaddr;
  v24 = -1;
  v23 = &loc_10022821;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v21 = &v26;
  v18 = 0;
  byte_100330A0 = a4;
  if ( dword_1002F938 )
  {
    v6 = (_DWORD *)sub_100087A0(&Src);
    v7 = 2;
  }
  else
  {
    v16[4] = 0;
    v17 = 15;
    LOBYTE(v16[0]) = 0;
    sub_10008B40(v16, "Input Query", 0xBu);
    v6 = v16;
    v7 = 1;
  }
  v19 = *(_OWORD *)v6;
  v20 = *((_QWORD *)v6 + 2);
  v6[4] = 0;
  v6[5] = 15;
  *(_BYTE *)v6 = 0;
  v24 = 1;
  if ( (v7 & 2) != 0 )
  {
    v7 &= ~2u;
    v18 = v7;
    if ( v15 >= 0x10 )
    {
      v8 = v14;
      if ( v15 + 1 >= 0x1000 )
      {
        v8 = *((_BYTE **)v14 - 1);
        if ( (unsigned int)(v14 - v8 - 4) > 0x1F )
          goto LABEL_21;
      }
      sub_1000E529(v8);
      LOBYTE(v7) = v18;
    }
  }
  LOBYTE(v24) = 2;
  if ( (v7 & 1) != 0 && v17 >= 0x10 )
  {
    v9 = (void *)v16[0];
    if ( v17 + 1 < 0x1000 || (v9 = *(void **)(v16[0] - 4), (unsigned int)(v16[0] - (_DWORD)v9 - 4) <= 0x1F) )
    {
      sub_1000E529(v9);
      goto LABEL_14;
    }
LABEL_21:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_14:
  v10 = &v19;
  if ( HIDWORD(v20) >= 0x10 )
    v10 = (__int128 *)v19;
  v11 = sub_10003950(v10, a2, (int)v25, a1);
  if ( HIDWORD(v20) >= 0x10 )
  {
    v12 = (void *)v19;
    if ( (unsigned int)(HIDWORD(v20) + 1) >= 0x1000 )
    {
      v12 = *(void **)(v19 - 4);
      if ( (unsigned int)(v19 - (_DWORD)v12 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v12);
  }
  return v11;
}


/* sub_10004C40  @0x10004c40  size=448 */
double __usercall sub_10004C40@<xmm0>(char a1@<dl>, void *a2@<ecx>, double a3@<xmm2>)
{
  size_t v3; // esi
  char *v4; // ecx
  size_t v5; // esi
  unsigned int v6; // ebx
  void **v7; // edi
  _BYTE *v8; // eax
  void **v9; // eax
  void **v10; // eax
  void **v11; // eax
  void **v12; // edx
  void **v13; // eax
  double result; // xmm0_8
  void *v15; // ecx
  char v18[8]; // [esp+20h] [ebp-30h]
  void *Buf[4]; // [esp+28h] [ebp-28h] BYREF
  size_t MaxCount; // [esp+38h] [ebp-18h]
  unsigned int v21; // [esp+3Ch] [ebp-14h]
  int v22; // [esp+4Ch] [ebp-4h]
  int savedregs; // [esp+50h] [ebp+0h] BYREF

  *(double *)v18 = fmin(9.99999999999999e14, fmax(-9.99999999999999e14, a3));
  MaxCount = 0;
  v3 = sub_100013F0((int)"%f", *(int *)v18);
  v21 = 15;
  LOBYTE(Buf[0]) = 0;
  sub_100098A0(Buf, v3, 0);
  v4 = (char *)Buf;
  if ( v21 >= 0x10 )
    v4 = (char *)Buf[0];
  sub_100013D0(v4, v3 + 1, "%f", *(double *)v18);
  v5 = MaxCount;
  if ( MaxCount )
  {
    while ( 1 )
    {
      v6 = v21;
      v7 = Buf;
      if ( v21 >= 0x10 )
        v7 = (void **)Buf[0];
      if ( !v5 )
        break;
      v8 = memchr(v7, 46, v5);
      if ( !v8 || v8 - (_BYTE *)v7 == -1 )
        break;
      v9 = Buf;
      if ( v6 >= 0x10 )
        v9 = (void **)Buf[0];
      if ( *((_BYTE *)v9 + v5 - 1) != 46 )
      {
        v10 = Buf;
        if ( v6 >= 0x10 )
          v10 = (void **)Buf[0];
        if ( *((_BYTE *)v10 + v5 - 1) != 48 )
          break;
      }
      v11 = Buf;
      if ( v6 >= 0x10 )
        v11 = (void **)Buf[0];
      MaxCount = v5 - 1;
      *((_BYTE *)v11 + v5 - 1) = 0;
      v5 = MaxCount;
      if ( !MaxCount )
        goto LABEL_18;
    }
  }
  else
  {
LABEL_18:
    v6 = v21;
  }
  v12 = Buf;
  v22 = 0;
  if ( v6 >= 0x10 )
    v12 = (void **)Buf[0];
  v13 = sub_10004A80(v12, a2, (int)&savedregs, a1);
  result = fmin(9.99999999999999e14, fmax(-9.99999999999999e14, sub_10014F7A(v13, 0)));
  *(double *)v18 = result;
  if ( v21 >= 0x10 )
  {
    v15 = Buf[0];
    if ( v21 + 1 >= 0x1000 )
    {
      v15 = *((void **)Buf[0] - 1);
      if ( (unsigned int)((char *)Buf[0] - (char *)v15 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v15);
    return *(double *)v18;
  }
  return result;
}


/* sub_10005760  @0x10005760  size=2285 */
_DWORD *__usercall sub_10005760@<eax>(
        _DWORD *a1@<ecx>,
        int a2@<ebp>,
        _BYTE *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        _BYTE *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14,
        _BYTE *a15,
        int a16,
        int a17,
        int a18,
        int a19,
        unsigned int a20,
        void *a21,
        int a22,
        int a23,
        int a24,
        int a25,
        unsigned int a26)
{
  _DWORD *v26; // esi
  unsigned int v27; // ecx
  _DWORD *v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // esi
  unsigned int v31; // edx
  _DWORD *v32; // eax
  unsigned int v33; // ecx
  _DWORD *v34; // edx
  _DWORD *v35; // eax
  _DWORD *v36; // eax
  _DWORD *v37; // eax
  _DWORD *v38; // eax
  void *v39; // ecx
  unsigned int v40; // edx
  char *v41; // esi
  unsigned int v42; // eax
  char *v43; // ecx
  int v44; // ecx
  int v45; // esi
  unsigned int v46; // ecx
  _DWORD *v47; // eax
  void *v48; // ecx
  unsigned int v49; // edx
  _DWORD *v50; // eax
  void *v51; // ecx
  unsigned int v52; // edx
  unsigned int v53; // esi
  unsigned int v54; // ecx
  _DWORD *v55; // eax
  void *v56; // ecx
  unsigned int v57; // edx
  void *v58; // ecx
  unsigned int v59; // edx
  void *v60; // ecx
  unsigned int v61; // edx
  _BYTE *v62; // ecx
  int v63; // edx
  _BYTE *v64; // ecx
  int v65; // edx
  _BYTE *v66; // ecx
  int v67; // edx
  void *v68; // ecx
  int v69; // edx
  _BYTE *v70; // ecx
  int v71; // edx
  _BYTE *v72; // ecx
  int v73; // edx
  WCHAR *v75; // [esp-1ACh] [ebp-1B8h]
  int v76; // [esp-1A8h] [ebp-1B4h]
  int v77; // [esp-1A4h] [ebp-1B0h]
  int v78; // [esp-1A0h] [ebp-1ACh]
  int v79; // [esp-19Ch] [ebp-1A8h]
  unsigned int v80; // [esp-198h] [ebp-1A4h]
  __int128 v81; // [esp-194h] [ebp-1A0h] BYREF
  __int64 v82; // [esp-184h] [ebp-190h]
  __int128 v83; // [esp-17Ch] [ebp-188h] BYREF
  __int64 v84; // [esp-16Ch] [ebp-178h]
  _DWORD *v85; // [esp-164h] [ebp-170h] BYREF
  int v86; // [esp-160h] [ebp-16Ch]
  int v87; // [esp-15Ch] [ebp-168h]
  int v88; // [esp-158h] [ebp-164h]
  size_t v89; // [esp-154h] [ebp-160h]
  unsigned int v90; // [esp-150h] [ebp-15Ch]
  CHAR *v91; // [esp-14Ch] [ebp-158h] BYREF
  int v92; // [esp-148h] [ebp-154h]
  int v93; // [esp-144h] [ebp-150h]
  int v94; // [esp-140h] [ebp-14Ch]
  void *v95; // [esp-13Ch] [ebp-148h]
  int v96; // [esp-138h] [ebp-144h]
  int v97; // [esp-128h] [ebp-134h] BYREF
  _DWORD *v98; // [esp-CCh] [ebp-D8h]
  _DWORD v99[4]; // [esp-C8h] [ebp-D4h] BYREF
  int v100; // [esp-B8h] [ebp-C4h]
  unsigned int v101; // [esp-B4h] [ebp-C0h]
  __int128 *v102; // [esp-B0h] [ebp-BCh]
  CHAR **v103; // [esp-ACh] [ebp-B8h]
  CHAR **v104; // [esp-A8h] [ebp-B4h]
  _DWORD **v105; // [esp-A4h] [ebp-B0h]
  struct tagOFNW v106; // [esp-A0h] [ebp-ACh] BYREF
  _DWORD v107[4]; // [esp-44h] [ebp-50h] BYREF
  unsigned int v108; // [esp-34h] [ebp-40h]
  unsigned int v109; // [esp-30h] [ebp-3Ch]
  _DWORD v110[4]; // [esp-2Ch] [ebp-38h] BYREF
  unsigned int v111; // [esp-1Ch] [ebp-28h]
  unsigned int v112; // [esp-18h] [ebp-24h]
  int *v113; // [esp-10h] [ebp-1Ch]
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-Ch] [ebp-18h]
  void *v115; // [esp-8h] [ebp-14h]
  int v116; // [esp-4h] [ebp-10h]
  int v117; // [esp+0h] [ebp-Ch]
  void *v118; // [esp+4h] [ebp-8h]
  int v119; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v117 = a2;
  v118 = retaddr;
  v116 = -1;
  v115 = &loc_100229E9;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v113 = &v119;
  v26 = a1;
  v98 = a1;
  v116 = 3;
  v104 = &v91;
  sub_100087A0(&a21);
  LOBYTE(v116) = 4;
  v105 = &v85;
  sub_100087A0(&a15);
  LOBYTE(v116) = 5;
  v102 = &v83;
  sub_100087A0(&a9);
  LOBYTE(v116) = 6;
  sub_100087A0(&a3);
  LOBYTE(v116) = 3;
  v106 = *(struct tagOFNW *)__std_tzdb_get_time_zones(&v97, v81);
  if ( GetOpenFileNameW(&v106) )
  {
    v108 = 0;
    v109 = 7;
    LOWORD(v107[0]) = 0;
    sub_10008870(v107, word_10031098, wcslen(word_10031098));
    LOBYTE(v116) = 7;
    v27 = v108;
    if ( v108 >= v109 )
    {
      LOBYTE(v104) = 0;
      sub_10009110(v107, v108, (int)v104, 92);
    }
    else
    {
      ++v108;
      v28 = v107;
      if ( v109 >= 8 )
        v28 = (_DWORD *)v107[0];
      *(_DWORD *)((char *)v28 + 2 * v27) = 92;
    }
    v29 = 0;
    v30 = wcslen(word_10031098);
    if ( v30 )
    {
      do
      {
        if ( word_10031096[v30] != 10 && !word_10031098[v30] )
          word_10031098[v30] = 10;
        v31 = v30;
        v30 = wcslen(word_10031098);
        v29 += v30 - v31 + 1;
      }
      while ( v29 < v30 );
    }
    v111 = 0;
    v112 = 7;
    LOWORD(v110[0]) = 0;
    sub_10008870(v110, word_10031098, wcslen(word_10031098));
    LOBYTE(v116) = 8;
    v32 = v110;
    v33 = v112;
    v34 = (_DWORD *)v110[0];
    if ( v112 >= 8 )
      v32 = (_DWORD *)v110[0];
    if ( *((_WORD *)v32 + v30 - 1) == 10 )
    {
      v35 = v110;
      if ( v112 >= 8 )
        v35 = (_DWORD *)v110[0];
      *((_WORD *)v35 + v30 - 1) = 0;
      v33 = v112;
      v34 = (_DWORD *)v110[0];
    }
    v36 = v110;
    if ( v33 >= 8 )
      v36 = v34;
    if ( *((_WORD *)v36 + v30 - 2) == 92 )
    {
      v37 = v110;
      if ( v33 >= 8 )
        v37 = v34;
      *((_WORD *)v37 + v30 - 2) = 0;
    }
    v103 = (CHAR **)&v85;
    sub_10008E40(&v83, v107, v83);
    sub_10001820((WCHAR *)v83, SDWORD1(v83), SDWORD2(v83), SHIDWORD(v83), v84, HIDWORD(v84));
    LOBYTE(v116) = 9;
    v102 = &v83;
    v82 = 0x700000000LL;
    LOWORD(v81) = 0;
    sub_10008870(&v81, "\n", 1);
    sub_10001820((WCHAR *)v81, SDWORD1(v81), SDWORD2(v81), SHIDWORD(v81), v82, HIDWORD(v82));
    LOBYTE(v116) = 10;
    sub_10008570(v110);
    sub_10001820(v75, v76, v77, v78, v79, v80);
    LOBYTE(v116) = 8;
    sub_10003740(
      v81,
      v82,
      (_DWORD *)v83,
      SDWORD1(v83),
      SDWORD2(v83),
      SHIDWORD(v83),
      v84,
      HIDWORD(v84),
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v38 = sub_10001680(v91, v92, v93, v94, (int)v95, v96);
    sub_100084E0(v38);
    if ( v101 >= 8 )
    {
      v39 = (void *)v99[0];
      v40 = 2 * v101 + 2;
      if ( v40 >= 0x1000 )
      {
        v39 = *(void **)(v99[0] - 4);
        v40 = 2 * v101 + 37;
        if ( (unsigned int)(v99[0] - (_DWORD)v39 - 4) > 0x1F )
          _invalid_parameter_noinfo_noreturn();
      }
      v96 = v40;
      sub_1000E529(v39);
    }
    v41 = (char *)v110;
    if ( v112 >= 8 )
      v41 = (char *)v110[0];
    if ( v111 )
    {
      v42 = v111;
      v43 = v41;
      while ( *(_WORD *)v43 != 10 )
      {
        v43 += 2;
        if ( !--v42 )
          goto LABEL_45;
      }
      v44 = (v43 - v41) >> 1;
      if ( v44 != -1 )
      {
        v45 = v44 + 1;
        v100 = 0;
        v101 = 7;
        LOWORD(v99[0]) = 0;
        if ( v111 < v44 + 1 )
          sub_10008D90();
        v46 = v111 - v44 - 1;
        v47 = v110;
        if ( v111 - v45 < v46 )
          v46 = v111 - v45;
        v96 = v46;
        if ( v112 >= 8 )
          v47 = (_DWORD *)v110[0];
        sub_10008870(v99, (char *)v47 + 2 * v45, v96);
        sub_100084E0(v99);
        if ( v101 >= 8 )
        {
          v48 = (void *)v99[0];
          v49 = 2 * v101 + 2;
          if ( v49 >= 0x1000 )
          {
            v48 = *(void **)(v99[0] - 4);
            v49 = 2 * v101 + 37;
            if ( (unsigned int)(v99[0] - (_DWORD)v48 - 4) > 0x1F )
              goto LABEL_101;
          }
          v96 = v49;
          sub_1000E529(v48);
        }
      }
    }
LABEL_45:
    sub_10008400(v110, &unk_1002B2D4);
    if ( v111 >= 0xFFF )
    {
      v100 = 0;
      LOWORD(v99[0]) = 0;
      v50 = v110;
      if ( v112 >= 8 )
        v50 = (_DWORD *)v110[0];
      v101 = 7;
      sub_10008870(v99, v50, 4095);
      sub_100084E0(v99);
      if ( v101 >= 8 )
      {
        v51 = (void *)v99[0];
        v52 = 2 * v101 + 2;
        if ( v52 >= 0x1000 )
        {
          v51 = *(void **)(v99[0] - 4);
          v52 = 2 * v101 + 37;
          if ( (unsigned int)(v99[0] - (_DWORD)v51 - 4) > 0x1F )
            goto LABEL_101;
        }
        v96 = v52;
        sub_1000E529(v51);
      }
      v96 = (int)v103;
      v53 = v111;
      v54 = sub_10008FC0(v93, v94, 1);
      v100 = 0;
      v101 = 7;
      LOWORD(v99[0]) = 0;
      v55 = v110;
      if ( v53 < v54 )
        v54 = v53;
      v96 = v54;
      if ( v112 >= 8 )
        v55 = (_DWORD *)v110[0];
      sub_10008870(v99, v55, v96);
      sub_100084E0(v99);
      if ( v101 >= 8 )
      {
        v56 = (void *)v99[0];
        v57 = 2 * v101 + 2;
        if ( v57 >= 0x1000 )
        {
          v56 = *(void **)(v99[0] - 4);
          v57 = 2 * v101 + 37;
          if ( (unsigned int)(v99[0] - (_DWORD)v56 - 4) > 0x1F )
            goto LABEL_101;
        }
        v96 = v57;
        sub_1000E529(v56);
      }
      sub_10008400(v110, &unk_1002B2D4);
    }
    v103 = &v91;
    v95 = nullptr;
    v96 = 15;
    LOBYTE(v91) = 0;
    sub_10008B40(&v91, "\\", 1u);
    LOBYTE(v116) = 11;
    v102 = (__int128 *)&v85;
    v89 = 0;
    v90 = 15;
    LOBYTE(v85) = 0;
    sub_10008B40(&v85, "\\\\", 2u);
    LOBYTE(v116) = 12;
    sub_10008570(v110);
    sub_10001820((WCHAR *)v81, SDWORD1(v81), SDWORD2(v81), SHIDWORD(v81), v82, HIDWORD(v82));
    v26 = v98;
    LOBYTE(v116) = 8;
    sub_10003740(v83, v84, v85, v86, v87, v88, v89, v90, v91, v92, v93, v94, (size_t)v95, v96);
    if ( v112 >= 8 )
    {
      v58 = (void *)v110[0];
      v59 = 2 * v112 + 2;
      if ( v59 >= 0x1000 )
      {
        v58 = *(void **)(v110[0] - 4);
        v59 = 2 * v112 + 37;
        if ( (unsigned int)(v110[0] - (_DWORD)v58 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v59;
      sub_1000E529(v58);
    }
    v111 = 0;
    v112 = 7;
    LOWORD(v110[0]) = 0;
    if ( v109 >= 8 )
    {
      v60 = (void *)v107[0];
      v61 = 2 * v109 + 2;
      if ( v61 >= 0x1000 )
      {
        v60 = *(void **)(v107[0] - 4);
        v61 = 2 * v109 + 37;
        if ( (unsigned int)(v107[0] - (_DWORD)v60 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v61;
      sub_1000E529(v60);
    }
    if ( a8 >= 0x10 )
    {
      v62 = a3;
      v63 = a8 + 1;
      if ( a8 + 1 >= 0x1000 )
      {
        v62 = *((_BYTE **)a3 - 1);
        v63 = a8 + 36;
        if ( (unsigned int)(a3 - v62 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v63;
      sub_1000E529(v62);
    }
    a7 = 0;
    a8 = 15;
    LOBYTE(a3) = 0;
    if ( a14 >= 0x10 )
    {
      v64 = a9;
      v65 = a14 + 1;
      if ( a14 + 1 >= 0x1000 )
      {
        v64 = *((_BYTE **)a9 - 1);
        v65 = a14 + 36;
        if ( (unsigned int)(a9 - v64 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v65;
      sub_1000E529(v64);
    }
    a13 = 0;
    a14 = 15;
    LOBYTE(a9) = 0;
    if ( a20 >= 0x10 )
    {
      v66 = a15;
      v67 = a20 + 1;
      if ( a20 + 1 >= 0x1000 )
      {
        v66 = *((_BYTE **)a15 - 1);
        v67 = a20 + 36;
        if ( (unsigned int)(a15 - v66 - 4) > 0x1F )
          goto LABEL_101;
      }
LABEL_80:
      v96 = v67;
      sub_1000E529(v66);
    }
  }
  else
  {
    v96 = 0;
    v26[4] = 0;
    v26[5] = 15;
    v95 = &unk_1002B210;
    *(_BYTE *)v26 = 0;
    sub_10008B40(v26, v95, v96);
    if ( a8 >= 0x10 )
    {
      v70 = a3;
      v71 = a8 + 1;
      if ( a8 + 1 >= 0x1000 )
      {
        v70 = *((_BYTE **)a3 - 1);
        v71 = a8 + 36;
        if ( (unsigned int)(a3 - v70 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v71;
      sub_1000E529(v70);
    }
    a7 = 0;
    a8 = 15;
    LOBYTE(a3) = 0;
    if ( a14 >= 0x10 )
    {
      v72 = a9;
      v73 = a14 + 1;
      if ( a14 + 1 >= 0x1000 )
      {
        v72 = *((_BYTE **)a9 - 1);
        v73 = a14 + 36;
        if ( (unsigned int)(a9 - v72 - 4) > 0x1F )
          goto LABEL_101;
      }
      v96 = v73;
      sub_1000E529(v72);
    }
    a13 = 0;
    a14 = 15;
    LOBYTE(a9) = 0;
    if ( a20 >= 0x10 )
    {
      v66 = a15;
      v67 = a20 + 1;
      if ( a20 + 1 >= 0x1000 )
      {
        v66 = *((_BYTE **)a15 - 1);
        v67 = a20 + 36;
        if ( (unsigned int)(a15 - v66 - 4) > 0x1F )
          goto LABEL_101;
      }
      goto LABEL_80;
    }
  }
  a19 = 0;
  a20 = 15;
  LOBYTE(a15) = 0;
  if ( a26 >= 0x10 )
  {
    v68 = a21;
    v69 = a26 + 1;
    if ( a26 + 1 < 0x1000
      || (v68 = *((void **)a21 - 1), v69 = a26 + 36, (unsigned int)((_BYTE *)a21 - (_BYTE *)v68 - 4) <= 0x1F) )
    {
      v96 = v69;
      sub_1000E529(v68);
      return v26;
    }
LABEL_101:
    _invalid_parameter_noinfo_noreturn();
  }
  return v26;
}


/* sub_10006980  @0x10006980  size=365 */
COLORREF __cdecl sub_10006980(_DWORD *Src, int a2, int a3, int a4, size_t Size, unsigned int a6)
{
  COLORREF v6; // ecx
  COLORREF v7; // esi
  _DWORD **p_Src; // eax
  _DWORD *v9; // eax
  _BYTE *v10; // ecx
  HWND ForegroundWindow; // eax
  COLORREF rgbResult; // esi
  _BYTE *v13; // ecx
  const CHAR *v15; // [esp-18h] [ebp-70h]
  int v16; // [esp-14h] [ebp-6Ch]
  int v17; // [esp-10h] [ebp-68h]
  int v18; // [esp-Ch] [ebp-64h]
  int v19; // [esp-8h] [ebp-60h]
  unsigned int v20; // [esp-4h] [ebp-5Ch]
  _BYTE *Block; // [esp+8h] [ebp-50h]
  unsigned int v22; // [esp+1Ch] [ebp-3Ch]
  struct tagCHOOSECOLORW v23; // [esp+24h] [ebp-34h] BYREF
  int v24; // [esp+54h] [ebp-4h]

  v7 = v6;
  v24 = 0;
  p_Src = &Src;
  if ( a6 >= 0x10 )
    p_Src = (_DWORD **)Src;
  sub_10008B40(&dword_1002F910, p_Src, Size);
  sub_100087A0(&dword_1002F910);
  v9 = sub_10001680(v15, v16, v17, v18, v19, v20);
  sub_100084E0(v9);
  if ( v22 >= 8 )
  {
    v10 = Block;
    if ( 2 * v22 + 2 >= 0x1000 )
    {
      v10 = *((_BYTE **)Block - 1);
      if ( (unsigned int)(Block - v10 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v10);
  }
  ForegroundWindow = hWnd;
  v23.hInstance = nullptr;
  v23.lCustData = 0;
  v23.lpTemplateName = nullptr;
  v23.lStructSize = 36;
  if ( !hWnd )
    ForegroundWindow = GetForegroundWindow();
  dword_1003309C = ForegroundWindow;
  if ( !ForegroundWindow )
  {
    ForegroundWindow = GetDesktopWindow();
    dword_1003309C = ForegroundWindow;
  }
  v23.hwndOwner = ForegroundWindow;
  v23.rgbResult = v7;
  v23.lpCustColors = (COLORREF *)&unk_100330F8;
  v23.Flags = 17;
  v23.lpfnHook = (LPCCHOOKPROC)sub_100027D0;
  rgbResult = -1;
  if ( ChooseColorW(&v23) )
    rgbResult = v23.rgbResult;
  if ( a6 >= 0x10 )
  {
    v13 = Src;
    if ( a6 + 1 >= 0x1000 )
    {
      v13 = (_BYTE *)*(Src - 1);
      if ( (unsigned int)((char *)Src - v13 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v13);
  }
  return rgbResult;
}


/* sub_10006AF0  @0x10006af0  size=657 */
void **__fastcall sub_10006AF0(void *Src, void *a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v5; // eax
  void *v6; // ecx
  int v7; // edx
  void **v8; // esi
  void *v9; // ecx
  int v10; // edx
  void *v11; // ecx
  int v12; // edx
  int v14; // [esp-60h] [ebp-D8h]
  int v15; // [esp-5Ch] [ebp-D4h]
  int v16; // [esp-48h] [ebp-C0h] BYREF
  _BYTE v17[16]; // [esp-30h] [ebp-A8h] BYREF
  int v18; // [esp-20h] [ebp-98h]
  int v19; // [esp-1Ch] [ebp-94h]
  _BYTE v20[16]; // [esp-18h] [ebp-90h] BYREF
  int v21; // [esp-8h] [ebp-80h]
  int v22; // [esp-4h] [ebp-7Ch]
  void *Block[5]; // [esp+10h] [ebp-68h] BYREF
  unsigned int v24; // [esp+24h] [ebp-54h]
  void *v25; // [esp+2Ch] [ebp-4Ch]
  void *v26; // [esp+30h] [ebp-48h]
  void *v27; // [esp+34h] [ebp-44h]
  void *v28[5]; // [esp+38h] [ebp-40h] BYREF
  unsigned int v29; // [esp+4Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+50h] [ebp-28h] BYREF
  unsigned int v31; // [esp+64h] [ebp-14h]
  int v32; // [esp+74h] [ebp-4h]

  v28[4] = nullptr;
  v29 = 15;
  LOBYTE(v28[0]) = 0;
  sub_10008B40(v28, Src, strlen((const char *)Src));
  v32 = 0;
  Srca[4] = nullptr;
  v31 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, a2, strlen((const char *)a2));
  LOBYTE(v32) = 1;
  if ( dword_100331DC > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100331DC);
    if ( dword_100331DC == -1 )
    {
      dword_1003314C = 0;
      dword_10033150 = 15;
      LOBYTE(dword_1003313C) = 0;
      atexit(sub_100230B0);
      _Init_thread_footer(&dword_100331DC);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v27 = v20;
  v21 = 0;
  v22 = 15;
  v20[0] = 0;
  sub_10008B40(v20, &unk_1002B210, 0);
  LOBYTE(v32) = 2;
  v26 = v17;
  v18 = 0;
  v19 = 15;
  v17[0] = 0;
  sub_10008B40(v17, &unk_1002B210, 0);
  LOBYTE(v32) = 3;
  v25 = &v16;
  sub_100087A0(Srca);
  LOBYTE(v32) = 4;
  sub_100087A0(v28);
  LOBYTE(v32) = 1;
  v5 = sub_100053D0(Block, v14, v15);
  sub_100086A0(v5);
  if ( v24 >= 0x10 )
  {
    v6 = Block[0];
    v7 = v24 + 1;
    if ( v24 + 1 >= 0x1000 )
    {
      v6 = *((void **)Block[0] - 1);
      v7 = v24 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v6 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v22 = v7;
    sub_1000E529(v6);
  }
  Block[4] = nullptr;
  v24 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v8 = &dword_1003313C;
  if ( (unsigned int)dword_10033150 >= 0x10 )
    v8 = (void **)dword_1003313C;
  if ( v31 >= 0x10 )
  {
    v9 = Srca[0];
    v10 = v31 + 1;
    if ( v31 + 1 >= 0x1000 )
    {
      v9 = *((void **)Srca[0] - 1);
      v10 = v31 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v9 - 4) > 0x1F )
        goto LABEL_20;
    }
    v22 = v10;
    sub_1000E529(v9);
  }
  if ( v29 >= 0x10 )
  {
    v11 = v28[0];
    v12 = v29 + 1;
    if ( v29 + 1 < 0x1000
      || (v11 = *((void **)v28[0] - 1), v12 = v29 + 36, (unsigned int)((char *)v28[0] - (char *)v11 - 4) <= 0x1F) )
    {
      v22 = v12;
      sub_1000E529(v11);
      return v8;
    }
LABEL_20:
    _invalid_parameter_noinfo_noreturn();
  }
  return v8;
}


/* sub_10006D90  @0x10006d90  size=849 */
void **__fastcall sub_10006D90(void *Src, void *a2, void *a3, void *a4)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v7; // eax
  void *v8; // ecx
  unsigned int v9; // edx
  void **v10; // esi
  void *v11; // ecx
  unsigned int v12; // edx
  void *v13; // ecx
  unsigned int v14; // edx
  void *v15; // ecx
  unsigned int v16; // edx
  void *v17; // ecx
  unsigned int v18; // edx
  int v20; // [esp-60h] [ebp-108h]
  int v21; // [esp-5Ch] [ebp-104h]
  int v22; // [esp-48h] [ebp-F0h] BYREF
  int v23; // [esp-30h] [ebp-D8h] BYREF
  int v24; // [esp-18h] [ebp-C0h] BYREF
  unsigned int v25; // [esp-4h] [ebp-ACh]
  void *Block[5]; // [esp+10h] [ebp-98h] BYREF
  unsigned int v27; // [esp+24h] [ebp-84h]
  void *v28; // [esp+2Ch] [ebp-7Ch]
  void *v29; // [esp+30h] [ebp-78h]
  void *v30; // [esp+34h] [ebp-74h]
  void *v31[5]; // [esp+38h] [ebp-70h] BYREF
  unsigned int v32; // [esp+4Ch] [ebp-5Ch]
  void *v33[5]; // [esp+50h] [ebp-58h] BYREF
  unsigned int v34; // [esp+64h] [ebp-44h]
  void *v35[5]; // [esp+68h] [ebp-40h] BYREF
  unsigned int v36; // [esp+7Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+80h] [ebp-28h] BYREF
  unsigned int v38; // [esp+94h] [ebp-14h]
  int v39; // [esp+A4h] [ebp-4h]

  v30 = a4;
  v31[4] = nullptr;
  v32 = 15;
  LOBYTE(v31[0]) = 0;
  sub_10008B40(v31, Src, strlen((const char *)Src));
  v39 = 0;
  v33[4] = nullptr;
  v34 = 15;
  LOBYTE(v33[0]) = 0;
  sub_10008B40(v33, a2, strlen((const char *)a2));
  LOBYTE(v39) = 1;
  v35[4] = nullptr;
  v36 = 15;
  LOBYTE(v35[0]) = 0;
  sub_10008B40(v35, a3, strlen((const char *)a3));
  LOBYTE(v39) = 2;
  Srca[4] = nullptr;
  v38 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, v30, strlen((const char *)v30));
  LOBYTE(v39) = 3;
  if ( dword_100331D4 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100331D4);
    if ( dword_100331D4 == -1 )
    {
      dword_100330F0 = 0;
      dword_100330F4 = 15;
      LOBYTE(dword_100330E0) = 0;
      atexit(sub_10023110);
      _Init_thread_footer(&dword_100331D4);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v30 = &v24;
  sub_100087A0(Srca);
  LOBYTE(v39) = 4;
  v29 = &v23;
  sub_100087A0(v35);
  LOBYTE(v39) = 5;
  v28 = &v22;
  sub_100087A0(v33);
  LOBYTE(v39) = 6;
  sub_100087A0(v31);
  LOBYTE(v39) = 3;
  v7 = sub_100053D0(Block, v20, v21);
  sub_100086A0(v7);
  if ( v27 >= 0x10 )
  {
    v8 = Block[0];
    v9 = v27 + 1;
    if ( v27 + 1 >= 0x1000 )
    {
      v8 = *((void **)Block[0] - 1);
      v9 = v27 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v8 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v25 = v9;
    sub_1000E529(v8);
  }
  Block[4] = nullptr;
  v27 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v10 = &dword_100330E0;
  if ( (unsigned int)dword_100330F4 >= 0x10 )
    v10 = (void **)dword_100330E0;
  if ( v38 >= 0x10 )
  {
    v11 = Srca[0];
    v12 = v38 + 1;
    if ( v38 + 1 >= 0x1000 )
    {
      v11 = *((void **)Srca[0] - 1);
      v12 = v38 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v11 - 4) > 0x1F )
        goto LABEL_28;
    }
    v25 = v12;
    sub_1000E529(v11);
  }
  if ( v36 >= 0x10 )
  {
    v13 = v35[0];
    v14 = v36 + 1;
    if ( v36 + 1 >= 0x1000 )
    {
      v13 = *((void **)v35[0] - 1);
      v14 = v36 + 36;
      if ( (unsigned int)((char *)v35[0] - (char *)v13 - 4) > 0x1F )
        goto LABEL_28;
    }
    v25 = v14;
    sub_1000E529(v13);
  }
  if ( v34 >= 0x10 )
  {
    v15 = v33[0];
    v16 = v34 + 1;
    if ( v34 + 1 >= 0x1000 )
    {
      v15 = *((void **)v33[0] - 1);
      v16 = v34 + 36;
      if ( (unsigned int)((char *)v33[0] - (char *)v15 - 4) > 0x1F )
        goto LABEL_28;
    }
    v25 = v16;
    sub_1000E529(v15);
  }
  if ( v32 >= 0x10 )
  {
    v17 = v31[0];
    v18 = v32 + 1;
    if ( v32 + 1 < 0x1000
      || (v17 = *((void **)v31[0] - 1), v18 = v32 + 36, (unsigned int)((char *)v31[0] - (char *)v17 - 4) <= 0x1F) )
    {
      v25 = v18;
      sub_1000E529(v17);
      return v10;
    }
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  }
  return v10;
}


/* sub_100070F0  @0x100070f0  size=657 */
void **__fastcall sub_100070F0(void *Src, void *a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  _DWORD *v5; // eax
  void *v6; // ecx
  unsigned int v7; // edx
  void **v8; // esi
  void *v9; // ecx
  unsigned int v10; // edx
  void *v11; // ecx
  unsigned int v12; // edx
  _BYTE *v14; // [esp-60h] [ebp-D8h]
  int v15; // [esp-5Ch] [ebp-D4h]
  int v16; // [esp-58h] [ebp-D0h]
  int v17; // [esp-54h] [ebp-CCh]
  int v18; // [esp-50h] [ebp-C8h]
  unsigned int v19; // [esp-4Ch] [ebp-C4h]
  _BYTE *v20[6]; // [esp-48h] [ebp-C0h] BYREF
  _BYTE *v21[4]; // [esp-30h] [ebp-A8h] BYREF
  int v22; // [esp-20h] [ebp-98h]
  unsigned int v23; // [esp-1Ch] [ebp-94h]
  void *v24[4]; // [esp-18h] [ebp-90h] BYREF
  int v25; // [esp-8h] [ebp-80h]
  unsigned int v26; // [esp-4h] [ebp-7Ch]
  void *Block[5]; // [esp+10h] [ebp-68h] BYREF
  unsigned int v28; // [esp+24h] [ebp-54h]
  _BYTE **v29; // [esp+2Ch] [ebp-4Ch]
  _BYTE **v30; // [esp+30h] [ebp-48h]
  void **v31; // [esp+34h] [ebp-44h]
  void *v32[5]; // [esp+38h] [ebp-40h] BYREF
  unsigned int v33; // [esp+4Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+50h] [ebp-28h] BYREF
  unsigned int v35; // [esp+64h] [ebp-14h]
  int v36; // [esp+74h] [ebp-4h]
  int savedregs; // [esp+78h] [ebp+0h] BYREF

  v32[4] = nullptr;
  v33 = 15;
  LOBYTE(v32[0]) = 0;
  sub_10008B40(v32, Src, strlen((const char *)Src));
  v36 = 0;
  Srca[4] = nullptr;
  v35 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, a2, strlen((const char *)a2));
  LOBYTE(v36) = 1;
  if ( dword_100330DC > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100330DC);
    if ( dword_100330DC == -1 )
    {
      dword_100331CC = 0;
      dword_100331D0 = 15;
      LOBYTE(dword_100331BC) = 0;
      atexit(sub_10023170);
      _Init_thread_footer(&dword_100330DC);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v31 = v24;
  v25 = 0;
  v26 = 15;
  LOBYTE(v24[0]) = 0;
  sub_10008B40(v24, &unk_1002B210, 0);
  LOBYTE(v36) = 2;
  v30 = v21;
  v22 = 0;
  v23 = 15;
  LOBYTE(v21[0]) = 0;
  sub_10008B40(v21, &unk_1002B210, 0);
  LOBYTE(v36) = 3;
  v29 = v20;
  sub_100087A0(Srca);
  LOBYTE(v36) = 4;
  sub_100087A0(v32);
  LOBYTE(v36) = 1;
  v5 = sub_10005760(
         Block,
         (int)&savedregs,
         v14,
         v15,
         v16,
         v17,
         v18,
         v19,
         v20[0],
         (int)v20[1],
         (int)v20[2],
         (int)v20[3],
         (int)v20[4],
         (unsigned int)v20[5],
         v21[0],
         (int)v21[1],
         (int)v21[2],
         (int)v21[3],
         v22,
         v23,
         v24[0],
         (int)v24[1],
         (int)v24[2],
         (int)v24[3],
         v25,
         v26);
  sub_100086A0(v5);
  if ( v28 >= 0x10 )
  {
    v6 = Block[0];
    v7 = v28 + 1;
    if ( v28 + 1 >= 0x1000 )
    {
      v6 = *((void **)Block[0] - 1);
      v7 = v28 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v6 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v26 = v7;
    sub_1000E529(v6);
  }
  Block[4] = nullptr;
  v28 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v8 = &dword_100331BC;
  if ( (unsigned int)dword_100331D0 >= 0x10 )
    v8 = (void **)dword_100331BC;
  if ( v35 >= 0x10 )
  {
    v9 = Srca[0];
    v10 = v35 + 1;
    if ( v35 + 1 >= 0x1000 )
    {
      v9 = *((void **)Srca[0] - 1);
      v10 = v35 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v9 - 4) > 0x1F )
        goto LABEL_20;
    }
    v26 = v10;
    sub_1000E529(v9);
  }
  if ( v33 >= 0x10 )
  {
    v11 = v32[0];
    v12 = v33 + 1;
    if ( v33 + 1 < 0x1000
      || (v11 = *((void **)v32[0] - 1), v12 = v33 + 36, (unsigned int)((char *)v32[0] - (char *)v11 - 4) <= 0x1F) )
    {
      v26 = v12;
      sub_1000E529(v11);
      return v8;
    }
LABEL_20:
    _invalid_parameter_noinfo_noreturn();
  }
  return v8;
}


/* sub_10007390  @0x10007390  size=849 */
void **__fastcall sub_10007390(void *Src, void *a2, void *a3, void *a4)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  _DWORD *v7; // eax
  void *v8; // ecx
  unsigned int v9; // edx
  void **v10; // esi
  void *v11; // ecx
  unsigned int v12; // edx
  void *v13; // ecx
  unsigned int v14; // edx
  void *v15; // ecx
  unsigned int v16; // edx
  void *v17; // ecx
  unsigned int v18; // edx
  _BYTE *v20; // [esp-60h] [ebp-108h]
  int v21; // [esp-5Ch] [ebp-104h]
  int v22; // [esp-58h] [ebp-100h]
  int v23; // [esp-54h] [ebp-FCh]
  int v24; // [esp-50h] [ebp-F8h]
  unsigned int v25; // [esp-4Ch] [ebp-F4h]
  _BYTE *v26[6]; // [esp-48h] [ebp-F0h] BYREF
  _BYTE *v27[6]; // [esp-30h] [ebp-D8h] BYREF
  void *v28[5]; // [esp-18h] [ebp-C0h] BYREF
  unsigned int v29; // [esp-4h] [ebp-ACh]
  void *Block[5]; // [esp+10h] [ebp-98h] BYREF
  unsigned int v31; // [esp+24h] [ebp-84h]
  _BYTE **v32; // [esp+2Ch] [ebp-7Ch]
  _BYTE **v33; // [esp+30h] [ebp-78h]
  void *v34; // [esp+34h] [ebp-74h]
  void *v35[5]; // [esp+38h] [ebp-70h] BYREF
  unsigned int v36; // [esp+4Ch] [ebp-5Ch]
  void *v37[5]; // [esp+50h] [ebp-58h] BYREF
  unsigned int v38; // [esp+64h] [ebp-44h]
  void *v39[5]; // [esp+68h] [ebp-40h] BYREF
  unsigned int v40; // [esp+7Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+80h] [ebp-28h] BYREF
  unsigned int v42; // [esp+94h] [ebp-14h]
  int v43; // [esp+A4h] [ebp-4h]
  int savedregs; // [esp+A8h] [ebp+0h] BYREF

  v34 = a4;
  v35[4] = nullptr;
  v36 = 15;
  LOBYTE(v35[0]) = 0;
  sub_10008B40(v35, Src, strlen((const char *)Src));
  v43 = 0;
  v37[4] = nullptr;
  v38 = 15;
  LOBYTE(v37[0]) = 0;
  sub_10008B40(v37, a2, strlen((const char *)a2));
  LOBYTE(v43) = 1;
  v39[4] = nullptr;
  v40 = 15;
  LOBYTE(v39[0]) = 0;
  sub_10008B40(v39, a3, strlen((const char *)a3));
  LOBYTE(v43) = 2;
  Srca[4] = nullptr;
  v42 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, v34, strlen((const char *)v34));
  LOBYTE(v43) = 3;
  if ( dword_10033138 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_10033138);
    if ( dword_10033138 == -1 )
    {
      dword_100331B0 = 0;
      dword_100331B4 = 15;
      LOBYTE(dword_100331A0) = 0;
      atexit(sub_100231D0);
      _Init_thread_footer(&dword_10033138);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v34 = v28;
  sub_100087A0(Srca);
  LOBYTE(v43) = 4;
  v33 = v27;
  sub_100087A0(v39);
  LOBYTE(v43) = 5;
  v32 = v26;
  sub_100087A0(v37);
  LOBYTE(v43) = 6;
  sub_100087A0(v35);
  LOBYTE(v43) = 3;
  v7 = sub_10005760(
         Block,
         (int)&savedregs,
         v20,
         v21,
         v22,
         v23,
         v24,
         v25,
         v26[0],
         (int)v26[1],
         (int)v26[2],
         (int)v26[3],
         (int)v26[4],
         (unsigned int)v26[5],
         v27[0],
         (int)v27[1],
         (int)v27[2],
         (int)v27[3],
         (int)v27[4],
         (unsigned int)v27[5],
         v28[0],
         (int)v28[1],
         (int)v28[2],
         (int)v28[3],
         (int)v28[4],
         v29);
  sub_100086A0(v7);
  if ( v31 >= 0x10 )
  {
    v8 = Block[0];
    v9 = v31 + 1;
    if ( v31 + 1 >= 0x1000 )
    {
      v8 = *((void **)Block[0] - 1);
      v9 = v31 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v8 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v29 = v9;
    sub_1000E529(v8);
  }
  Block[4] = nullptr;
  v31 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v10 = &dword_100331A0;
  if ( (unsigned int)dword_100331B4 >= 0x10 )
    v10 = (void **)dword_100331A0;
  if ( v42 >= 0x10 )
  {
    v11 = Srca[0];
    v12 = v42 + 1;
    if ( v42 + 1 >= 0x1000 )
    {
      v11 = *((void **)Srca[0] - 1);
      v12 = v42 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v11 - 4) > 0x1F )
        goto LABEL_28;
    }
    v29 = v12;
    sub_1000E529(v11);
  }
  if ( v40 >= 0x10 )
  {
    v13 = v39[0];
    v14 = v40 + 1;
    if ( v40 + 1 >= 0x1000 )
    {
      v13 = *((void **)v39[0] - 1);
      v14 = v40 + 36;
      if ( (unsigned int)((char *)v39[0] - (char *)v13 - 4) > 0x1F )
        goto LABEL_28;
    }
    v29 = v14;
    sub_1000E529(v13);
  }
  if ( v38 >= 0x10 )
  {
    v15 = v37[0];
    v16 = v38 + 1;
    if ( v38 + 1 >= 0x1000 )
    {
      v15 = *((void **)v37[0] - 1);
      v16 = v38 + 36;
      if ( (unsigned int)((char *)v37[0] - (char *)v15 - 4) > 0x1F )
        goto LABEL_28;
    }
    v29 = v16;
    sub_1000E529(v15);
  }
  if ( v36 >= 0x10 )
  {
    v17 = v35[0];
    v18 = v36 + 1;
    if ( v36 + 1 < 0x1000
      || (v17 = *((void **)v35[0] - 1), v18 = v36 + 36, (unsigned int)((char *)v35[0] - (char *)v17 - 4) <= 0x1F) )
    {
      v29 = v18;
      sub_1000E529(v17);
      return v10;
    }
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  }
  return v10;
}


/* sub_100076F0  @0x100076f0  size=657 */
void **__fastcall sub_100076F0(void *Src, void *a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int time_zones; // eax
  void *v6; // ecx
  int v7; // edx
  void **v8; // esi
  void *v9; // ecx
  int v10; // edx
  void *v11; // ecx
  int v12; // edx
  int v14; // [esp-48h] [ebp-C0h] BYREF
  _BYTE v15[16]; // [esp-30h] [ebp-A8h] BYREF
  int v16; // [esp-20h] [ebp-98h]
  int v17; // [esp-1Ch] [ebp-94h]
  _BYTE v18[16]; // [esp-18h] [ebp-90h] BYREF
  int v19; // [esp-8h] [ebp-80h]
  int v20; // [esp-4h] [ebp-7Ch]
  void *Block[5]; // [esp+10h] [ebp-68h] BYREF
  unsigned int v22; // [esp+24h] [ebp-54h]
  int *v23; // [esp+2Ch] [ebp-4Ch]
  _BYTE *v24; // [esp+30h] [ebp-48h]
  _BYTE *v25; // [esp+34h] [ebp-44h]
  void *v26[5]; // [esp+38h] [ebp-40h] BYREF
  unsigned int v27; // [esp+4Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+50h] [ebp-28h] BYREF
  unsigned int v29; // [esp+64h] [ebp-14h]
  int v30; // [esp+74h] [ebp-4h]

  v26[4] = nullptr;
  v27 = 15;
  LOBYTE(v26[0]) = 0;
  sub_10008B40(v26, Src, strlen((const char *)Src));
  v30 = 0;
  Srca[4] = nullptr;
  v29 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, a2, strlen((const char *)a2));
  LOBYTE(v30) = 1;
  if ( dword_100331E0 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100331E0);
    if ( dword_100331E0 == -1 )
    {
      dword_10033164 = 0;
      dword_10033168 = 15;
      LOBYTE(dword_10033154) = 0;
      atexit(sub_10023230);
      _Init_thread_footer(&dword_100331E0);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v25 = v18;
  v19 = 0;
  v20 = 15;
  v18[0] = 0;
  sub_10008B40(v18, &unk_1002B210, 0);
  LOBYTE(v30) = 2;
  v24 = v15;
  v16 = 0;
  v17 = 15;
  v15[0] = 0;
  sub_10008B40(v15, &unk_1002B210, 0);
  LOBYTE(v30) = 3;
  v23 = &v14;
  sub_100087A0(Srca);
  LOBYTE(v30) = 4;
  sub_100087A0(v26);
  LOBYTE(v30) = 1;
  time_zones = __std_tzdb_get_time_zones(Block);
  sub_100086A0(time_zones);
  if ( v22 >= 0x10 )
  {
    v6 = Block[0];
    v7 = v22 + 1;
    if ( v22 + 1 >= 0x1000 )
    {
      v6 = *((void **)Block[0] - 1);
      v7 = v22 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v6 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v20 = v7;
    sub_1000E529(v6);
  }
  Block[4] = nullptr;
  v22 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v8 = &dword_10033154;
  if ( (unsigned int)dword_10033168 >= 0x10 )
    v8 = (void **)dword_10033154;
  if ( v29 >= 0x10 )
  {
    v9 = Srca[0];
    v10 = v29 + 1;
    if ( v29 + 1 >= 0x1000 )
    {
      v9 = *((void **)Srca[0] - 1);
      v10 = v29 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v9 - 4) > 0x1F )
        goto LABEL_20;
    }
    v20 = v10;
    sub_1000E529(v9);
  }
  if ( v27 >= 0x10 )
  {
    v11 = v26[0];
    v12 = v27 + 1;
    if ( v27 + 1 < 0x1000
      || (v11 = *((void **)v26[0] - 1), v12 = v27 + 36, (unsigned int)((char *)v26[0] - (char *)v11 - 4) <= 0x1F) )
    {
      v20 = v12;
      sub_1000E529(v11);
      return v8;
    }
LABEL_20:
    _invalid_parameter_noinfo_noreturn();
  }
  return v8;
}


/* sub_10007990  @0x10007990  size=849 */
void **__fastcall sub_10007990(void *Src, void *a2, void *a3, void *a4)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int time_zones; // eax
  void *v8; // ecx
  unsigned int v9; // edx
  void **v10; // esi
  void *v11; // ecx
  unsigned int v12; // edx
  void *v13; // ecx
  unsigned int v14; // edx
  void *v15; // ecx
  unsigned int v16; // edx
  void *v17; // ecx
  unsigned int v18; // edx
  int v20; // [esp-48h] [ebp-F0h] BYREF
  int v21; // [esp-30h] [ebp-D8h] BYREF
  int v22; // [esp-18h] [ebp-C0h] BYREF
  unsigned int v23; // [esp-4h] [ebp-ACh]
  void *Block[5]; // [esp+10h] [ebp-98h] BYREF
  unsigned int v25; // [esp+24h] [ebp-84h]
  int *v26; // [esp+2Ch] [ebp-7Ch]
  int *v27; // [esp+30h] [ebp-78h]
  void *v28; // [esp+34h] [ebp-74h]
  void *v29[5]; // [esp+38h] [ebp-70h] BYREF
  unsigned int v30; // [esp+4Ch] [ebp-5Ch]
  void *v31[5]; // [esp+50h] [ebp-58h] BYREF
  unsigned int v32; // [esp+64h] [ebp-44h]
  void *v33[5]; // [esp+68h] [ebp-40h] BYREF
  unsigned int v34; // [esp+7Ch] [ebp-2Ch]
  void *Srca[5]; // [esp+80h] [ebp-28h] BYREF
  unsigned int v36; // [esp+94h] [ebp-14h]
  int v37; // [esp+A4h] [ebp-4h]

  v28 = a4;
  v29[4] = nullptr;
  v30 = 15;
  LOBYTE(v29[0]) = 0;
  sub_10008B40(v29, Src, strlen((const char *)Src));
  v37 = 0;
  v31[4] = nullptr;
  v32 = 15;
  LOBYTE(v31[0]) = 0;
  sub_10008B40(v31, a2, strlen((const char *)a2));
  LOBYTE(v37) = 1;
  v33[4] = nullptr;
  v34 = 15;
  LOBYTE(v33[0]) = 0;
  sub_10008B40(v33, a3, strlen((const char *)a3));
  LOBYTE(v37) = 2;
  Srca[4] = nullptr;
  v36 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, v28, strlen((const char *)v28));
  LOBYTE(v37) = 3;
  if ( dword_100330D8 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100330D8);
    if ( dword_100330D8 == -1 )
    {
      dword_1003317C = 0;
      dword_10033180 = 15;
      LOBYTE(dword_1003316C) = 0;
      atexit(sub_10023290);
      _Init_thread_footer(&dword_100330D8);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v28 = &v22;
  sub_100087A0(Srca);
  LOBYTE(v37) = 4;
  v27 = &v21;
  sub_100087A0(v33);
  LOBYTE(v37) = 5;
  v26 = &v20;
  sub_100087A0(v31);
  LOBYTE(v37) = 6;
  sub_100087A0(v29);
  LOBYTE(v37) = 3;
  time_zones = __std_tzdb_get_time_zones(Block);
  sub_100086A0(time_zones);
  if ( v25 >= 0x10 )
  {
    v8 = Block[0];
    v9 = v25 + 1;
    if ( v25 + 1 >= 0x1000 )
    {
      v8 = *((void **)Block[0] - 1);
      v9 = v25 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v8 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v23 = v9;
    sub_1000E529(v8);
  }
  Block[4] = nullptr;
  v25 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v10 = &dword_1003316C;
  if ( (unsigned int)dword_10033180 >= 0x10 )
    v10 = (void **)dword_1003316C;
  if ( v36 >= 0x10 )
  {
    v11 = Srca[0];
    v12 = v36 + 1;
    if ( v36 + 1 >= 0x1000 )
    {
      v11 = *((void **)Srca[0] - 1);
      v12 = v36 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v11 - 4) > 0x1F )
        goto LABEL_28;
    }
    v23 = v12;
    sub_1000E529(v11);
  }
  if ( v34 >= 0x10 )
  {
    v13 = v33[0];
    v14 = v34 + 1;
    if ( v34 + 1 >= 0x1000 )
    {
      v13 = *((void **)v33[0] - 1);
      v14 = v34 + 36;
      if ( (unsigned int)((char *)v33[0] - (char *)v13 - 4) > 0x1F )
        goto LABEL_28;
    }
    v23 = v14;
    sub_1000E529(v13);
  }
  if ( v32 >= 0x10 )
  {
    v15 = v31[0];
    v16 = v32 + 1;
    if ( v32 + 1 >= 0x1000 )
    {
      v15 = *((void **)v31[0] - 1);
      v16 = v32 + 36;
      if ( (unsigned int)((char *)v31[0] - (char *)v15 - 4) > 0x1F )
        goto LABEL_28;
    }
    v23 = v16;
    sub_1000E529(v15);
  }
  if ( v30 >= 0x10 )
  {
    v17 = v29[0];
    v18 = v30 + 1;
    if ( v30 + 1 < 0x1000
      || (v17 = *((void **)v29[0] - 1), v18 = v30 + 36, (unsigned int)((char *)v29[0] - (char *)v17 - 4) <= 0x1F) )
    {
      v23 = v18;
      sub_1000E529(v17);
      return v10;
    }
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  }
  return v10;
}


/* sub_10007CF0  @0x10007cf0  size=497 */
void **__thiscall sub_10007CF0(void *Src)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v3; // eax
  void *v4; // ecx
  int v5; // edx
  void **v6; // esi
  void *v7; // ecx
  int v8; // edx
  int v10; // [esp-30h] [ebp-80h]
  int v11; // [esp-2Ch] [ebp-7Ch]
  _BYTE v12[16]; // [esp-18h] [ebp-68h] BYREF
  int v13; // [esp-8h] [ebp-58h]
  int v14; // [esp-4h] [ebp-54h]
  void *Block[5]; // [esp+8h] [ebp-48h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-34h]
  void *v17; // [esp+24h] [ebp-2Ch]
  void *Srca[5]; // [esp+28h] [ebp-28h] BYREF
  unsigned int v19; // [esp+3Ch] [ebp-14h]
  int v20; // [esp+4Ch] [ebp-4h]

  Srca[4] = nullptr;
  v19 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, Src, strlen((const char *)Src));
  v20 = 0;
  if ( dword_100331B8 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100331B8);
    if ( dword_100331B8 == -1 )
    {
      dword_100330D0 = 0;
      dword_100330D4 = 15;
      LOBYTE(dword_100330C0) = 0;
      atexit(sub_100232F0);
      _Init_thread_footer(&dword_100331B8);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v17 = v12;
  v13 = 0;
  v14 = 15;
  v12[0] = 0;
  sub_10008B40(v12, &unk_1002B210, 0);
  LOBYTE(v20) = 1;
  sub_100087A0(Srca);
  LOBYTE(v20) = 0;
  v3 = sub_100063F0(Block, v10, v11);
  sub_100086A0(v3);
  if ( v16 >= 0x10 )
  {
    v4 = Block[0];
    v5 = v16 + 1;
    if ( v16 + 1 >= 0x1000 )
    {
      v4 = *((void **)Block[0] - 1);
      v5 = v16 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v4 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v14 = v5;
    sub_1000E529(v4);
  }
  Block[4] = nullptr;
  v16 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v6 = &dword_100330C0;
  if ( (unsigned int)dword_100330D4 >= 0x10 )
    v6 = (void **)dword_100330C0;
  if ( v19 >= 0x10 )
  {
    v7 = Srca[0];
    v8 = v19 + 1;
    if ( v19 + 1 >= 0x1000 )
    {
      v7 = *((void **)Srca[0] - 1);
      v8 = v19 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v7 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v14 = v8;
    sub_1000E529(v7);
  }
  return v6;
}


/* sub_10007F10  @0x10007f10  size=575 */
void **__fastcall sub_10007F10(void *Src, void *a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v5; // eax
  void *v6; // ecx
  unsigned int v7; // edx
  void **v8; // esi
  void *v9; // ecx
  unsigned int v10; // edx
  void *v11; // ecx
  unsigned int v12; // edx
  int v14; // [esp-30h] [ebp-A0h]
  int v15; // [esp-2Ch] [ebp-9Ch]
  int v16; // [esp-18h] [ebp-88h] BYREF
  unsigned int v17; // [esp-4h] [ebp-74h]
  void *Block[5]; // [esp+10h] [ebp-60h] BYREF
  unsigned int v19; // [esp+24h] [ebp-4Ch]
  void *v20; // [esp+2Ch] [ebp-44h]
  void *v21[5]; // [esp+30h] [ebp-40h] BYREF
  unsigned int v22; // [esp+44h] [ebp-2Ch]
  void *Srca[5]; // [esp+48h] [ebp-28h] BYREF
  unsigned int v24; // [esp+5Ch] [ebp-14h]
  int v25; // [esp+6Ch] [ebp-4h]

  v21[4] = nullptr;
  v22 = 15;
  LOBYTE(v21[0]) = 0;
  sub_10008B40(v21, a2, strlen((const char *)a2));
  v25 = 0;
  Srca[4] = nullptr;
  v24 = 15;
  LOBYTE(Srca[0]) = 0;
  sub_10008B40(Srca, Src, strlen((const char *)Src));
  LOBYTE(v25) = 1;
  if ( dword_100331D8 > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100331D8);
    if ( dword_100331D8 == -1 )
    {
      dword_100331F4 = 0;
      dword_100331F8 = 15;
      LOBYTE(dword_100331E4) = 0;
      atexit(sub_10023350);
      _Init_thread_footer(&dword_100331D8);
    }
  }
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v20 = &v16;
  sub_100087A0(Srca);
  LOBYTE(v25) = 2;
  sub_100087A0(v21);
  LOBYTE(v25) = 1;
  v5 = sub_100063F0(Block, v14, v15);
  sub_100086A0(v5);
  if ( v19 >= 0x10 )
  {
    v6 = Block[0];
    v7 = v19 + 1;
    if ( v19 + 1 >= 0x1000 )
    {
      v6 = *((void **)Block[0] - 1);
      v7 = v19 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v6 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v17 = v7;
    sub_1000E529(v6);
  }
  Block[4] = nullptr;
  v19 = 15;
  LOBYTE(Block[0]) = 0;
  UnhookWindowsHookEx(hhk);
  v8 = &dword_100331E4;
  if ( (unsigned int)dword_100331F8 >= 0x10 )
    v8 = (void **)dword_100331E4;
  if ( v24 >= 0x10 )
  {
    v9 = Srca[0];
    v10 = v24 + 1;
    if ( v24 + 1 >= 0x1000 )
    {
      v9 = *((void **)Srca[0] - 1);
      v10 = v24 + 36;
      if ( (unsigned int)((char *)Srca[0] - (char *)v9 - 4) > 0x1F )
        goto LABEL_20;
    }
    v17 = v10;
    sub_1000E529(v9);
  }
  if ( v22 >= 0x10 )
  {
    v11 = v21[0];
    v12 = v22 + 1;
    if ( v22 + 1 < 0x1000
      || (v11 = *((void **)v21[0] - 1), v12 = v22 + 36, (unsigned int)((char *)v21[0] - (char *)v11 - 4) <= 0x1F) )
    {
      v17 = v12;
      sub_1000E529(v11);
      return v8;
    }
LABEL_20:
    _invalid_parameter_noinfo_noreturn();
  }
  return v8;
}


/* widget_get_icon_0  @0x10008150  size=482 */
void **widget_get_icon_0()
{
  const WCHAR *p_lpFileName; // eax
  _DWORD *v1; // eax
  _BYTE *v2; // ecx
  LPWSTR *v3; // edx
  void **v4; // esi
  WCHAR *v5; // ecx
  LPWSTR *v6; // edx
  CHAR *v8; // [esp+0h] [ebp-26Ch] BYREF
  int v9; // [esp+4h] [ebp-268h]
  int v10; // [esp+8h] [ebp-264h]
  int v11; // [esp+Ch] [ebp-260h]
  LPWSTR v12; // [esp+10h] [ebp-25Ch]
  unsigned int v13; // [esp+14h] [ebp-258h]
  void *Block; // [esp+20h] [ebp-24Ch]
  unsigned int v15; // [esp+34h] [ebp-238h]
  LPCWSTR lpFileName; // [esp+3Ch] [ebp-230h] BYREF
  unsigned int v17; // [esp+50h] [ebp-21Ch]
  WCHAR Buffer[260]; // [esp+54h] [ebp-218h] BYREF
  int v19; // [esp+268h] [ebp-4h]

  sub_100087A0(&dword_1002F8F8);
  sub_10001680(v8, v9, v10, v11, (int)v12, v13);
  v13 = 0;
  v19 = 0;
  p_lpFileName = (const WCHAR *)&lpFileName;
  v12 = Buffer;
  if ( v17 >= 8 )
    p_lpFileName = lpFileName;
  GetFullPathNameW(p_lpFileName, 0x104u, v12, (LPWSTR *)v13);
  if ( dword_100330BC > *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 4) )
  {
    _Init_thread_header(&dword_100330BC);
    if ( dword_100330BC == -1 )
    {
      dword_10033198 = 0;
      dword_1003319C = 15;
      LOBYTE(dword_10033188) = 0;
      atexit(sub_100233B0);
      _Init_thread_footer(&dword_100330BC);
    }
  }
  v12 = nullptr;
  v13 = 7;
  LOWORD(v8) = 0;
  sub_10008870(&v8, Buffer, wcslen(Buffer));
  v1 = sub_10001820((WCHAR *)v8, v9, v10, v11, (int)v12, v13);
  sub_100086A0(v1);
  if ( v15 >= 0x10 )
  {
    v2 = Block;
    v3 = (LPWSTR *)(v15 + 1);
    if ( v15 + 1 >= 0x1000 )
    {
      v2 = *((_BYTE **)Block - 1);
      v3 = (LPWSTR *)(v15 + 36);
      if ( (unsigned int)((_BYTE *)Block - v2 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v13 = (unsigned int)v3;
    sub_1000E529(v2);
  }
  v4 = &dword_10033188;
  if ( (unsigned int)dword_1003319C >= 0x10 )
    v4 = (void **)dword_10033188;
  if ( v17 >= 8 )
  {
    v5 = (WCHAR *)lpFileName;
    v6 = (LPWSTR *)(2 * v17 + 2);
    if ( (unsigned int)v6 >= 0x1000 )
    {
      v5 = *((WCHAR **)lpFileName - 1);
      v6 = (LPWSTR *)(2 * v17 + 37);
      if ( (unsigned int)((char *)lpFileName - (char *)v5 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v13 = (unsigned int)v6;
    sub_1000E529(v5);
  }
  return v4;
}


/* @_guard_check_icall_nop@4  @0x10008340  size=1 */
void _guard_check_icall_nop()
{
  ;
}


/* sub_10008400  @0x10008400  size=120 */
_DWORD *__thiscall sub_10008400(_DWORD *Src, const unsigned __int16 *Srca)
{
  const unsigned __int16 *v2; // ebx
  unsigned int v4; // eax
  int v5; // edx
  bool v6; // cf
  _DWORD *v7; // edi
  const unsigned __int16 *v9; // [esp-8h] [ebp-10h]
  void *Srcb; // [esp+10h] [ebp+8h]

  v2 = Srca;
  v4 = wcslen(Srca);
  v5 = *(Src + 4);
  if ( v4 > *(Src + 5) - v5 )
  {
    v9 = Srca;
    LOBYTE(Srca) = 0;
    return (_DWORD *)sub_10009270(Src, v4, (int)Srca, (int)v9, v4);
  }
  else
  {
    v6 = *(Src + 5) < 8u;
    Srcb = (void *)(v5 + v4);
    v7 = Src;
    *(Src + 4) = v5 + v4;
    if ( !v6 )
      v7 = (_DWORD *)*Src;
    memmove((char *)v7 + 2 * v5, v2, 2 * v4);
    *((_WORD *)v7 + (_DWORD)Srcb) = 0;
    return Src;
  }
}


/* sub_100084E0  @0x100084e0  size=128 */
_DWORD *__thiscall sub_100084E0(_DWORD *this, _QWORD *a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // eax

  if ( this != (_DWORD *)a2 )
  {
    v3 = *(this + 5);
    if ( v3 >= 8 )
    {
      v4 = (_DWORD *)*this;
      if ( 2 * v3 + 2 >= 0x1000 )
      {
        if ( (unsigned int)v4 - *(v4 - 1) - 4 > 0x1F )
          _invalid_parameter_noinfo_noreturn();
        v4 = (_DWORD *)*(v4 - 1);
      }
      sub_1000E529(v4);
    }
    *(this + 4) = 0;
    *(this + 5) = 7;
    *(_WORD *)this = 0;
    *(_OWORD *)this = *(_OWORD *)a2;
    *((_QWORD *)this + 2) = a2[2];
    *((_DWORD *)a2 + 4) = 0;
    *((_DWORD *)a2 + 5) = 7;
    *(_WORD *)a2 = 0;
  }
  return this;
}


/* sub_10008570  @0x10008570  size=216 */
_DWORD *__thiscall sub_10008570(_DWORD *this, _DWORD *Src)
{
  _OWORD *v3; // edi
  unsigned int v4; // eax
  int v6; // ebx
  unsigned int v7; // ecx
  size_t v8; // eax
  void *v9; // eax
  _DWORD *v10; // ecx
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v3 = Src;
  *(this + 4) = 0;
  *(this + 5) = 0;
  v4 = Src[4];
  v11 = v4;
  if ( Src[5] >= 8u )
    v3 = (_OWORD *)*Src;
  if ( v4 < 8 )
  {
    *(_OWORD *)this = *v3;
    *(this + 4) = v4;
    *(this + 5) = 7;
    return this;
  }
  v6 = v4 | 7;
  if ( (v4 | 7) > 0x7FFFFFFE )
    v6 = 2147483646;
  v7 = 2 * (v6 + 1);
  if ( (unsigned int)(v6 + 1) > 0x7FFFFFFF )
  {
    v7 = -1;
LABEL_10:
    v8 = v7 + 35;
    if ( v7 + 35 < v7 )
      v8 = -1;
    v9 = operator new(v8);
    if ( !v9 )
      _invalid_parameter_noinfo_noreturn();
    v10 = (_DWORD *)(((unsigned int)v9 + 35) & 0xFFFFFFE0);
    *(v10 - 1) = v9;
    goto LABEL_17;
  }
  if ( v7 >= 0x1000 )
    goto LABEL_10;
  if ( v7 )
    v10 = operator new(2 * (v6 + 1));
  else
    v10 = nullptr;
LABEL_17:
  *this = v10;
  memmove_0(v10, v3, 2 * v11 + 2);
  *(this + 4) = v11;
  *(this + 5) = v6;
  return this;
}


/* sub_10008650  @0x10008650  size=74 */
void __thiscall sub_10008650(_DWORD *this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // eax

  v2 = *(this + 5);
  if ( v2 >= 0x10 )
  {
    v3 = (_DWORD *)*this;
    if ( v2 + 1 >= 0x1000 )
    {
      if ( (unsigned int)v3 - *(v3 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v3 = (_DWORD *)*(v3 - 1);
    }
    sub_1000E529(v3);
  }
  *(this + 4) = 0;
  *(this + 5) = 15;
  *(_BYTE *)this = 0;
}


/* sub_100086A0  @0x100086a0  size=124 */
_DWORD *__thiscall sub_100086A0(_DWORD *this, _QWORD *a2)
{
  unsigned int v3; // ecx
  _DWORD *v4; // eax

  if ( this != (_DWORD *)a2 )
  {
    v3 = *(this + 5);
    if ( v3 >= 0x10 )
    {
      v4 = (_DWORD *)*this;
      if ( v3 + 1 >= 0x1000 )
      {
        if ( (unsigned int)v4 - *(v4 - 1) - 4 > 0x1F )
          _invalid_parameter_noinfo_noreturn();
        v4 = (_DWORD *)*(v4 - 1);
      }
      sub_1000E529(v4);
    }
    *(this + 4) = 0;
    *(this + 5) = 15;
    *(_BYTE *)this = 0;
    *(_OWORD *)this = *(_OWORD *)a2;
    *((_QWORD *)this + 2) = a2[2];
    *((_DWORD *)a2 + 4) = 0;
    *((_DWORD *)a2 + 5) = 15;
    *(_BYTE *)a2 = 0;
  }
  return this;
}


/* sub_10008720  @0x10008720  size=59 */
_DWORD *__thiscall sub_10008720(_DWORD *this, int a2)
{
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_QWORD *)this + 2) = *(_QWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 15;
  *(_BYTE *)a2 = 0;
  return this;
}


/* sub_10008760  @0x10008760  size=58 */
_DWORD *__thiscall sub_10008760(_DWORD *this, void *Src)
{
  *(this + 4) = 0;
  *(this + 5) = 15;
  *(_BYTE *)this = 0;
  sub_10008B40(this, Src, strlen((const char *)Src));
  return this;
}


/* sub_100087A0  @0x100087a0  size=195 */
_DWORD *__thiscall sub_100087A0(_DWORD *this, _DWORD *Src)
{
  _OWORD *v2; // ebx
  unsigned int v4; // ecx
  int v6; // edi
  size_t v7; // eax
  void *v8; // eax
  _DWORD *v9; // ecx
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v2 = Src;
  *(this + 4) = 0;
  *(this + 5) = 0;
  v4 = Src[4];
  v10 = v4;
  if ( Src[5] >= 0x10u )
    v2 = (_OWORD *)*Src;
  if ( v4 >= 0x10 )
  {
    v6 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFF )
      v6 = 0x7FFFFFFF;
    if ( (unsigned int)(v6 + 1) < 0x1000 )
    {
      if ( v6 == -1 )
        v9 = nullptr;
      else
        v9 = operator new(v6 + 1);
    }
    else
    {
      v7 = v6 + 36;
      if ( v6 + 36 < (unsigned int)(v6 + 1) )
        v7 = -1;
      v8 = operator new(v7);
      if ( !v8 )
        _invalid_parameter_noinfo_noreturn();
      v9 = (_DWORD *)(((unsigned int)v8 + 35) & 0xFFFFFFE0);
      *(v9 - 1) = v8;
    }
    *this = v9;
    memmove_0(v9, v2, v10 + 1);
    *(this + 4) = v10;
    *(this + 5) = v6;
    return this;
  }
  else
  {
    *(_OWORD *)this = *v2;
    *(this + 4) = v4;
    *(this + 5) = 15;
    return this;
  }
}


/* sub_10008870  @0x10008870  size=336 */
_DWORD *__thiscall sub_10008870(_DWORD *this, void *Src, unsigned int a3)
{
  unsigned int v4; // ecx
  void *v5; // ebx
  unsigned int v7; // esi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  size_t v11; // eax
  void *v12; // eax
  _DWORD *v13; // ebx
  void *v14; // eax
  unsigned int v15; // [esp+Ch] [ebp-Ch]

  v4 = *(this + 5);
  v15 = v4;
  if ( a3 > v4 )
  {
    if ( a3 > 0x7FFFFFFE )
      sub_100096E0();
    v7 = a3 | 7;
    if ( (a3 | 7) <= 0x7FFFFFFE )
    {
      v8 = v4 >> 1;
      if ( v4 <= 2147483646 - (v4 >> 1) )
      {
        if ( v7 < v8 + v4 )
          v7 = v8 + v4;
      }
      else
      {
        v7 = 2147483646;
      }
    }
    else
    {
      v7 = 2147483646;
    }
    v9 = __CFADD__(v7, 1) ? -1 : v7 + 1;
    v10 = 2 * v9;
    if ( v9 <= 0x7FFFFFFF )
    {
      if ( v10 < 0x1000 )
      {
        if ( v10 )
          v13 = operator new(2 * v9);
        else
          v13 = nullptr;
        goto LABEL_22;
      }
    }
    else
    {
      v10 = -1;
    }
    v11 = v10 + 35;
    if ( v10 + 35 < v10 )
      v11 = -1;
    v12 = operator new(v11);
    if ( !v12 )
      goto LABEL_28;
    v13 = (_DWORD *)(((unsigned int)v12 + 35) & 0xFFFFFFE0);
    *(v13 - 1) = v12;
LABEL_22:
    *(this + 5) = v7;
    *(this + 4) = a3;
    memmove_0(v13, Src, 2 * a3);
    *((_WORD *)v13 + a3) = 0;
    if ( v15 < 8 )
    {
LABEL_27:
      *this = v13;
      return this;
    }
    v14 = (void *)*this;
    if ( 2 * v15 + 2 < 0x1000 )
    {
LABEL_26:
      sub_1000E529(v14);
      goto LABEL_27;
    }
    if ( (unsigned int)v14 - *((_DWORD *)v14 - 1) - 4 <= 0x1F )
    {
      v14 = *((void **)v14 - 1);
      goto LABEL_26;
    }
LABEL_28:
    _invalid_parameter_noinfo_noreturn();
  }
  v5 = this;
  if ( v4 >= 8 )
    v5 = (void *)*this;
  *(this + 4) = a3;
  memmove(v5, Src, 2 * a3);
  *((_WORD *)v5 + a3) = 0;
  return this;
}


/* sub_100089D0  @0x100089d0  size=357 */
_DWORD *__thiscall sub_100089D0(_DWORD *Src, size_t a2, unsigned int a3, char *Srca, size_t Size)
{
  unsigned int v5; // edx
  unsigned int v7; // esi
  _DWORD *v8; // edx
  unsigned int v10; // eax
  _DWORD *v11; // edx
  bool v12; // cf
  char *v13; // esi
  char *v14; // edx
  size_t v15; // esi
  int v16; // [esp+10h] [ebp-10h]
  unsigned int v17; // [esp+14h] [ebp-Ch]
  char *v18; // [esp+14h] [ebp-Ch]
  unsigned int v19; // [esp+18h] [ebp-8h]
  char *v20; // [esp+1Ch] [ebp-4h]

  v5 = a3;
  v7 = *(Src + 4);
  if ( v7 < a2 )
    sub_10008D90();
  if ( v7 - a2 < a3 )
    v5 = v7 - a2;
  v17 = v5;
  if ( v5 == Size )
  {
    v8 = Src;
    if ( *(Src + 5) >= 0x10u )
      v8 = (_DWORD *)*Src;
    memmove((char *)v8 + a2, Srca, Size);
    return Src;
  }
  else
  {
    v16 = v7 - v5 - a2 + 1;
    v19 = Size - v5;
    if ( Size >= v5 )
    {
      if ( v19 > *(Src + 5) - v7 )
      {
        LOBYTE(v16) = 0;
        return (_DWORD *)sub_100093F0(Src, v19, v16, a2, v5, (int)Srca, Size);
      }
      else
      {
        v18 = (char *)Src;
        v12 = *(Src + 5) < 0x10u;
        *(Src + 4) = v7 + v19;
        if ( !v12 )
          v18 = (char *)*Src;
        v20 = &v18[a2];
        v14 = &v18[a2 + v5];
        if ( &Srca[Size] <= &v18[a2] || Srca > &v18[v7] )
        {
          v15 = Size;
        }
        else if ( v14 > Srca )
        {
          v15 = v14 - Srca;
        }
        else
        {
          v15 = 0;
        }
        memmove(&v14[v19], v14, v16);
        memmove(v20, Srca, v15);
        memmove_0(&v20[v15], &Srca[v15 + v19], Size - v15);
        return Src;
      }
    }
    else
    {
      v10 = v7 + Size - v5;
      v11 = Src;
      v12 = *(Src + 5) < 0x10u;
      *(Src + 4) = v10;
      if ( !v12 )
        v11 = (_DWORD *)*Src;
      v13 = (char *)v11 + a2;
      memmove((char *)v11 + a2, Srca, Size);
      memmove(&v13[Size], &v13[v17], v16);
      return Src;
    }
  }
}


/* sub_10008B40  @0x10008b40  size=307 */
_DWORD *__thiscall sub_10008B40(_DWORD *this, void *Src, size_t Size)
{
  unsigned int v4; // ecx
  void *v5; // ebx
  size_t v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  size_t v10; // eax
  void *v11; // eax
  void *v12; // ecx
  _DWORD *v13; // eax
  void *v14; // eax
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  _DWORD *v16; // [esp+14h] [ebp-4h]

  v4 = *(this + 5);
  v15 = v4;
  if ( Size > v4 )
  {
    if ( Size > 0x7FFFFFFF )
      sub_100096E0();
    v7 = Size | 0xF;
    if ( (Size | 0xF) <= 0x7FFFFFFF )
    {
      v8 = v4 >> 1;
      if ( v4 <= 0x7FFFFFFF - (v4 >> 1) )
      {
        if ( v7 < v8 + v4 )
          v7 = v8 + v4;
      }
      else
      {
        v7 = 0x7FFFFFFF;
      }
    }
    else
    {
      v7 = 0x7FFFFFFF;
    }
    v9 = __CFADD__(v7, 1) ? -1 : v7 + 1;
    if ( v9 < 0x1000 )
    {
      if ( v9 )
        v13 = operator new(__CFADD__(v7, 1) ? -1 : v7 + 1);
      else
        v13 = nullptr;
    }
    else
    {
      v10 = v9 + 35;
      if ( v9 + 35 < v9 )
        v10 = -1;
      v11 = operator new(v10);
      v12 = v11;
      if ( !v11 )
        goto LABEL_26;
      v13 = (_DWORD *)(((unsigned int)v11 + 35) & 0xFFFFFFE0);
      *(v13 - 1) = v12;
    }
    v16 = v13;
    *(this + 4) = Size;
    *(this + 5) = v7;
    memmove_0(v13, Src, Size);
    *((_BYTE *)v16 + Size) = 0;
    if ( v15 < 0x10 )
    {
LABEL_25:
      *this = v16;
      return this;
    }
    v14 = (void *)*this;
    if ( v15 + 1 < 0x1000 )
    {
LABEL_24:
      sub_1000E529(v14);
      goto LABEL_25;
    }
    if ( (unsigned int)v14 - *((_DWORD *)v14 - 1) - 4 <= 0x1F )
    {
      v14 = *((void **)v14 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _invalid_parameter_noinfo_noreturn();
  }
  v5 = this;
  if ( v4 >= 0x10 )
    v5 = (void *)*this;
  *(this + 4) = Size;
  memmove(v5, Src, Size);
  *((_BYTE *)v5 + Size) = 0;
  return this;
}


/* sub_10008C80  @0x10008c80  size=94 */
unsigned int *__thiscall sub_10008C80(unsigned int *Src, void *Srca, size_t Size)
{
  int v3; // ebx
  unsigned int v5; // edx
  int v6; // ecx
  unsigned int *v7; // eax
  char *v8; // esi
  size_t v10; // [esp-4h] [ebp-Ch]

  v3 = Size;
  v5 = *(Src + 5);
  v6 = *(Src + 4);
  if ( Size > v5 - v6 )
  {
    v10 = Size;
    LOBYTE(Size) = 0;
    return (unsigned int *)sub_10009580(Src, v3, Size, (int)Srca, v10);
  }
  else
  {
    *(Src + 4) = v6 + Size;
    v7 = Src;
    if ( v5 >= 0x10 )
      v7 = (unsigned int *)*Src;
    v8 = (char *)v7 + v6;
    memmove((char *)v7 + v6, Srca, Size);
    v8[Size] = 0;
    return Src;
  }
}


/* sub_10008CE0  @0x10008ce0  size=175 */
void __thiscall sub_10008CE0(_DWORD *this, _DWORD *Src)
{
  _OWORD *v2; // edi
  unsigned int v4; // ecx
  int v5; // ebx
  size_t v6; // eax
  void *v7; // eax
  _DWORD *v8; // ecx
  unsigned int v9; // [esp+8h] [ebp-4h]

  v2 = Src;
  v4 = Src[4];
  v9 = v4;
  if ( Src[5] >= 0x10u )
    v2 = (_OWORD *)*Src;
  if ( v4 >= 0x10 )
  {
    v5 = v4 | 0xF;
    if ( (v4 | 0xF) > 0x7FFFFFFF )
      v5 = 0x7FFFFFFF;
    if ( (unsigned int)(v5 + 1) < 0x1000 )
    {
      if ( v5 == -1 )
        v8 = nullptr;
      else
        v8 = operator new(v5 + 1);
    }
    else
    {
      v6 = v5 + 36;
      if ( v5 + 36 < (unsigned int)(v5 + 1) )
        v6 = -1;
      v7 = operator new(v6);
      if ( !v7 )
        _invalid_parameter_noinfo_noreturn();
      v8 = (_DWORD *)(((unsigned int)v7 + 35) & 0xFFFFFFE0);
      *(v8 - 1) = v7;
    }
    *this = v8;
    memmove_0(v8, v2, v9 + 1);
    *(this + 5) = v5;
    *(this + 4) = v9;
  }
  else
  {
    *(_OWORD *)this = *v2;
    *(this + 4) = v4;
    *(this + 5) = 15;
  }
}


/* sub_10008D90  @0x10008d90  size=10 */
void __noreturn sub_10008D90()
{
  sub_1000D3DA("invalid string position");
}


/* sub_10008DA0  @0x10008da0  size=158 */
int __fastcall sub_10008DA0(int a1, _DWORD *a2, unsigned int *Src)
{
  unsigned int *v5; // edx
  unsigned int v6; // ecx
  int v7; // esi
  bool v8; // cf
  _DWORD *v9; // eax
  void *v10; // esi
  _BYTE *Srca; // [esp+18h] [ebp+8h]

  v5 = Src;
  if ( Src[5] >= 0x10 )
    v5 = (unsigned int *)*Src;
  v6 = Src[4];
  v7 = a2[4];
  Srca = (_BYTE *)v6;
  if ( v6 > a2[5] - v7 )
  {
    LOBYTE(Srca) = 0;
    a2 = (_DWORD *)sub_10009580(a2, v6, (int)Srca, (int)v5, v6);
  }
  else
  {
    v8 = a2[5] < 0x10u;
    a2[4] = v7 + v6;
    v9 = a2;
    if ( !v8 )
      v9 = (_DWORD *)*a2;
    v10 = (char *)v9 + v7;
    memmove(v10, v5, v6);
    Srca[(_DWORD)v10] = 0;
  }
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
  a2[4] = 0;
  a2[5] = 15;
  *(_BYTE *)a2 = 0;
  return a1;
}


/* sub_10008E40  @0x10008e40  size=370 */
void **__cdecl sub_10008E40(int *Srca)
{
  void **Src; // ecx
  void **v2; // esi
  int *v3; // ebx
  int *v4; // edi
  int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // edi
  void *v9; // edx
  int v10; // ecx
  bool v11; // cf
  _WORD *v12; // edi
  char *v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+1Ch] [ebp-10h]

  v2 = Src;
  v3 = Srca;
  Src[4] = nullptr;
  Src[5] = (void *)7;
  *(_WORD *)Src = 0;
  v4 = Srca + 4;
  v5 = (int)Src[4];
  v6 = Srca[4] + 1;
  v7 = (unsigned int)Src[5];
  v14 = (char *)(Srca + 4);
  v15 = v5;
  if ( Srca[4] != 6 )
  {
    if ( v7 >= v6 )
    {
      if ( v6 < 8 && v7 >= 8 )
      {
        v8 = *v2;
        memmove_0(v2, *v2, 2 * v5 + 2);
        if ( (unsigned int)(2 * (_DWORD)v2[5] + 2) >= 0x1000 )
        {
          if ( (unsigned int)v8 - *(v8 - 1) - 4 > 0x1F )
            _invalid_parameter_noinfo_noreturn();
          v8 = (_DWORD *)*(v8 - 1);
        }
        sub_1000E529(v8);
        v4 = Srca + 4;
        v2[5] = (void *)7;
      }
    }
    else
    {
      LOBYTE(v14) = 0;
      sub_100099E0(v2, v6 - v5, (int)v14);
      v2[4] = (void *)v15;
    }
  }
  sub_10008400(v2, (const unsigned __int16 *)"\n");
  if ( (unsigned int)Srca[5] >= 8 )
    v3 = (int *)*Srca;
  v9 = v2[4];
  v10 = *v4;
  if ( *v4 > (unsigned int)((_BYTE *)v2[5] - (_BYTE *)v9) )
  {
    LOBYTE(v15) = 0;
    sub_10009270(v2, v10, v15, (int)v3, *v4);
    return v2;
  }
  else
  {
    v11 = (unsigned int)v2[5] < 8;
    v16 = (int)v9 + v10;
    v12 = v2;
    v2[4] = (char *)v9 + v10;
    if ( !v11 )
      v12 = *v2;
    memmove(&v12[(_DWORD)v9], v3, 2 * v10);
    v12[v16] = 0;
    return v2;
  }
}


/* sub_10008FC0  @0x10008fc0  size=334 */
int __fastcall sub_10008FC0(unsigned __int16 *a1, int a2, int a3, int a4, int a5)
{
  const char *v7; // ecx
  char *v8; // edx
  __int16 v9; // ax
  int v10; // ecx
  unsigned __int16 *i; // ecx
  int v12; // eax
  int v13; // ecx
  unsigned __int16 *v14; // edx
  int v15; // ecx
  const char *v16; // eax
  _BYTE v18[260]; // [esp+10h] [ebp-108h] BYREF

  if ( !a5 || !a2 )
    return -1;
  memset(v18, 0, 0x100u);
  v7 = "\n";
  v8 = &asc_1002B2D0[2 * a5];
  if ( v8 == "\n" )
  {
LABEL_6:
    v10 = -1;
    if ( a2 )
      v10 = a2 - 1;
    for ( i = &a1[v10]; ; --i )
    {
      v12 = *i;
      if ( (unsigned __int16)v12 < 0x100u )
      {
        if ( v18[v12] )
          break;
      }
      if ( i == a1 )
        return -1;
    }
    return i - a1;
  }
  else
  {
    while ( 1 )
    {
      v9 = *(_WORD *)v7;
      if ( *(_WORD *)v7 >= 0x100u )
        break;
      v7 += 2;
      v18[(unsigned __int8)v9] = 1;
      if ( v7 == v8 )
        goto LABEL_6;
    }
    v13 = -1;
    if ( a2 )
      v13 = a2 - 1;
    v14 = &a1[v13];
    while ( 2 )
    {
      v15 = a5;
      v16 = "\n";
      do
      {
        if ( *(_WORD *)v16 == *v14 )
          return v14 - a1;
        v16 += 2;
        --v15;
      }
      while ( v15 );
      if ( v14 != a1 )
      {
        --v14;
        continue;
      }
      break;
    }
    return -1;
  }
}


/* sub_10009110  @0x10009110  size=346 */
_DWORD *__thiscall sub_10009110(_DWORD *Src, int a2, int a3, __int16 a4)
{
  int v5; // edx
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  size_t v11; // eax
  void *v12; // eax
  _DWORD *v13; // esi
  int v14; // edi
  void *v15; // edi
  int v16; // ecx
  int v18; // [esp+Ch] [ebp-Ch]
  unsigned int v19; // [esp+10h] [ebp-8h]
  int v20; // [esp+14h] [ebp-4h]

  v5 = *(Src + 4);
  v20 = v5;
  if ( v5 == 2147483646 )
    sub_100096E0();
  v6 = v5 + 1;
  v7 = *(Src + 5);
  v18 = v6;
  v8 = v6 | 7;
  v19 = v7;
  if ( (v6 | 7u) <= 0x7FFFFFFE )
  {
    if ( v7 <= 2147483646 - (v7 >> 1) )
    {
      if ( v8 < v7 + (v7 >> 1) )
        v8 = v7 + (v7 >> 1);
    }
    else
    {
      v8 = 2147483646;
    }
  }
  else
  {
    v8 = 2147483646;
  }
  v9 = __CFADD__(v8, 1) ? -1 : v8 + 1;
  v10 = 2 * v9;
  if ( v9 <= 0x7FFFFFFF )
  {
    if ( v10 < 0x1000 )
    {
      if ( v10 )
        v13 = operator new(2 * v9);
      else
        v13 = nullptr;
      goto LABEL_18;
    }
  }
  else
  {
    v10 = -1;
  }
  v11 = v10 + 35;
  if ( v10 + 35 < v10 )
    v11 = -1;
  v12 = operator new(v11);
  if ( !v12 )
    goto LABEL_25;
  v13 = (_DWORD *)(((unsigned int)v12 + 35) & 0xFFFFFFE0);
  *(v13 - 1) = v12;
LABEL_18:
  *(Src + 5) = v8;
  *(Src + 4) = v18;
  v14 = 2 * v20;
  if ( v19 >= 8 )
  {
    v15 = (void *)*Src;
    memmove_0(v13, (const void *)*Src, 2 * v20);
    v16 = 2 * v20;
    *(_WORD *)((char *)v13 + v16) = a4;
    *(_WORD *)((char *)v13 + v16 + 2) = 0;
    if ( 2 * v19 + 2 < 0x1000 )
    {
LABEL_22:
      sub_1000E529(v15);
      *Src = v13;
      return Src;
    }
    if ( (unsigned int)v15 - *((_DWORD *)v15 - 1) - 4 <= 0x1F )
    {
      v15 = *((void **)v15 - 1);
      goto LABEL_22;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v13, Src, 2 * v20);
  *(_WORD *)((char *)v13 + v14) = a4;
  *(_WORD *)((char *)v13 + v14 + 2) = 0;
  *Src = v13;
  return Src;
}


/* sub_10009270  @0x10009270  size=382 */
_DWORD *__thiscall sub_10009270(_DWORD *Src, unsigned int a2, int a3, const void *a4, int a5)
{
  char *v6; // esi
  unsigned int v7; // edx
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  size_t v11; // eax
  void *v12; // eax
  _DWORD *v13; // esi
  void *v14; // edx
  void *v15; // edi
  size_t v17; // [esp-4h] [ebp-24h]
  unsigned int v18; // [esp+10h] [ebp-10h]
  char *v19; // [esp+18h] [ebp-8h]
  _WORD *v20; // [esp+18h] [ebp-8h]
  void *v21; // [esp+1Ch] [ebp-4h]
  char *v22; // [esp+1Ch] [ebp-4h]

  v6 = (char *)*(Src + 4);
  v21 = v6;
  if ( 2147483646 - (int)v6 < a2 )
    sub_100096E0();
  v7 = *(Src + 5);
  v19 = &v6[a2];
  v8 = (unsigned int)&v6[a2] | 7;
  v18 = v7;
  if ( v8 <= 0x7FFFFFFE )
  {
    if ( v7 <= 2147483646 - (v7 >> 1) )
    {
      if ( v8 < v7 + (v7 >> 1) )
        v8 = v7 + (v7 >> 1);
    }
    else
    {
      v8 = 2147483646;
    }
  }
  else
  {
    v8 = 2147483646;
  }
  v9 = __CFADD__(v8, 1) ? -1 : v8 + 1;
  v10 = 2 * v9;
  if ( v9 <= 0x7FFFFFFF )
  {
    if ( v10 < 0x1000 )
    {
      if ( v10 )
        v13 = operator new(2 * v9);
      else
        v13 = nullptr;
      goto LABEL_18;
    }
  }
  else
  {
    v10 = -1;
  }
  v11 = v10 + 35;
  if ( v10 + 35 < v10 )
    v11 = -1;
  v12 = operator new(v11);
  if ( !v12 )
    goto LABEL_25;
  v13 = (_DWORD *)(((unsigned int)v12 + 35) & 0xFFFFFFE0);
  *(v13 - 1) = v12;
LABEL_18:
  v14 = v21;
  *(Src + 4) = v19;
  *(Src + 5) = v8;
  v17 = 2 * (_DWORD)v21;
  v22 = (char *)v13 + 2 * (_DWORD)v21;
  v20 = (_WORD *)v13 + (_DWORD)v14 + a5;
  if ( v18 >= 8 )
  {
    v15 = (void *)*Src;
    memmove_0(v13, (const void *)*Src, v17);
    memmove_0(v22, a4, 2 * a5);
    *v20 = 0;
    if ( 2 * v18 + 2 < 0x1000 )
    {
LABEL_22:
      sub_1000E529(v15);
      *Src = v13;
      return Src;
    }
    if ( (unsigned int)v15 - *((_DWORD *)v15 - 1) - 4 <= 0x1F )
    {
      v15 = *((void **)v15 - 1);
      goto LABEL_22;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v13, Src, v17);
  memmove_0(v22, a4, 2 * a5);
  *v20 = 0;
  *Src = v13;
  return Src;
}


/* sub_100093F0  @0x100093f0  size=386 */
_DWORD *__thiscall sub_100093F0(_DWORD *Src, unsigned int a2, int a3, size_t Size, int a5, const void *a6, size_t a7)
{
  size_t v8; // edx
  unsigned int v9; // edi
  unsigned int v10; // esi
  unsigned int v11; // ecx
  size_t v12; // eax
  void *v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // eax
  char *v16; // esi
  unsigned int v18; // [esp+14h] [ebp-Ch]
  void *v19; // [esp+18h] [ebp-8h]
  char *v20; // [esp+18h] [ebp-8h]
  size_t v21; // [esp+1Ch] [ebp-4h]
  size_t v22; // [esp+1Ch] [ebp-4h]

  v8 = *(Src + 4);
  v21 = v8;
  if ( 0x7FFFFFFF - v8 < a2 )
    sub_100096E0();
  v9 = *(Src + 5);
  v19 = (void *)(v8 + a2);
  v10 = (v8 + a2) | 0xF;
  v18 = v9;
  if ( v10 <= 0x7FFFFFFF )
  {
    if ( v9 <= 0x7FFFFFFF - (v9 >> 1) )
    {
      if ( v10 < v9 + (v9 >> 1) )
        v10 = v9 + (v9 >> 1);
    }
    else
    {
      v10 = 0x7FFFFFFF;
    }
  }
  else
  {
    v10 = 0x7FFFFFFF;
  }
  v11 = __CFADD__(v10, 1) ? -1 : v10 + 1;
  if ( v11 < 0x1000 )
  {
    if ( v11 )
    {
      v15 = operator new(__CFADD__(v10, 1) ? -1 : v10 + 1);
      v8 = v21;
      v14 = v15;
    }
    else
    {
      v14 = nullptr;
    }
  }
  else
  {
    v12 = v11 + 35;
    if ( v11 + 35 < v11 )
      v12 = -1;
    v13 = operator new(v12);
    if ( !v13 )
      goto LABEL_23;
    v8 = v21;
    v14 = (_DWORD *)(((unsigned int)v13 + 35) & 0xFFFFFFE0);
    *(v14 - 1) = v13;
  }
  *(Src + 4) = v19;
  *(Src + 5) = v10;
  v22 = v8 - Size - a5 + 1;
  v20 = (char *)v14 + Size + a7;
  if ( v18 >= 0x10 )
  {
    v16 = (char *)*Src;
    memmove_0(v14, (const void *)*Src, Size);
    memmove_0((char *)v14 + Size, a6, a7);
    memmove_0(v20, &v16[Size + a5], v22);
    if ( v18 + 1 < 0x1000 )
    {
LABEL_20:
      sub_1000E529(v16);
      *Src = v14;
      return Src;
    }
    if ( (unsigned int)&v16[-*((_DWORD *)v16 - 1) - 4] <= 0x1F )
    {
      v16 = *((char **)v16 - 1);
      goto LABEL_20;
    }
LABEL_23:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v14, Src, Size);
  memmove_0((char *)v14 + Size, a6, a7);
  memmove_0(v20, (char *)Src + Size + a5, v22);
  *Src = v14;
  return Src;
}


/* sub_10009580  @0x10009580  size=344 */
_DWORD *__thiscall sub_10009580(_DWORD *Src, unsigned int a2, int a3, const void *a4, size_t a5)
{
  size_t v6; // edx
  unsigned int v7; // edi
  unsigned int v8; // esi
  unsigned int v9; // ecx
  size_t v10; // eax
  void *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // eax
  char *v14; // esi
  void *v15; // esi
  unsigned int v17; // [esp+10h] [ebp-Ch]
  void *v18; // [esp+14h] [ebp-8h]
  char *v19; // [esp+14h] [ebp-8h]
  size_t Size; // [esp+18h] [ebp-4h]
  _BYTE *Sizea; // [esp+18h] [ebp-4h]

  v6 = *(Src + 4);
  Size = v6;
  if ( 0x7FFFFFFF - v6 < a2 )
    sub_100096E0();
  v7 = *(Src + 5);
  v18 = (void *)(v6 + a2);
  v8 = (v6 + a2) | 0xF;
  v17 = v7;
  if ( v8 <= 0x7FFFFFFF )
  {
    if ( v7 <= 0x7FFFFFFF - (v7 >> 1) )
    {
      if ( v8 < v7 + (v7 >> 1) )
        v8 = v7 + (v7 >> 1);
    }
    else
    {
      v8 = 0x7FFFFFFF;
    }
  }
  else
  {
    v8 = 0x7FFFFFFF;
  }
  v9 = __CFADD__(v8, 1) ? -1 : v8 + 1;
  if ( v9 < 0x1000 )
  {
    if ( v9 )
    {
      v13 = operator new(__CFADD__(v8, 1) ? -1 : v8 + 1);
      v6 = Size;
      v12 = v13;
    }
    else
    {
      v12 = nullptr;
    }
  }
  else
  {
    v10 = v9 + 35;
    if ( v9 + 35 < v9 )
      v10 = -1;
    v11 = operator new(v10);
    if ( !v11 )
      goto LABEL_23;
    v6 = Size;
    v12 = (_DWORD *)(((unsigned int)v11 + 35) & 0xFFFFFFE0);
    *(v12 - 1) = v11;
  }
  *(Src + 4) = v18;
  *(Src + 5) = v8;
  v14 = (char *)v12 + v6;
  v19 = (char *)v12 + v6;
  Sizea = (char *)v12 + v6 + a5;
  if ( v17 >= 0x10 )
  {
    v15 = (void *)*Src;
    memmove_0(v12, (const void *)*Src, v6);
    memmove_0(v19, a4, a5);
    *Sizea = 0;
    if ( v17 + 1 < 0x1000 )
    {
LABEL_20:
      sub_1000E529(v15);
      *Src = v12;
      return Src;
    }
    if ( (unsigned int)v15 - *((_DWORD *)v15 - 1) - 4 <= 0x1F )
    {
      v15 = *((void **)v15 - 1);
      goto LABEL_20;
    }
LABEL_23:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v12, Src, v6);
  memmove_0(v14, a4, a5);
  *Sizea = 0;
  *Src = v12;
  return Src;
}


/* sub_100096E0  @0x100096e0  size=10 */
void __noreturn sub_100096E0()
{
  sub_1000D3BA("string too long");
}


/* sub_100096F0  @0x100096f0  size=413 */
unsigned int __thiscall sub_100096F0(_DWORD *this, unsigned int a2)
{
  unsigned int result; // eax
  unsigned int v4; // edx
  unsigned int v5; // edi
  unsigned int v6; // ecx
  unsigned int v7; // ecx
  size_t v8; // eax
  void *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // edi
  size_t v14; // [esp-8h] [ebp-18h]
  unsigned int v15; // [esp+8h] [ebp-8h]
  unsigned int v16; // [esp+Ch] [ebp-4h]

  result = *(this + 4);
  v15 = result;
  if ( result <= a2 )
  {
    v4 = *(this + 5);
    v16 = v4;
    if ( v4 != a2 )
    {
      if ( v4 >= a2 )
      {
        if ( a2 < 0x10 && v4 >= 0x10 )
        {
          v13 = (_DWORD *)*this;
          memmove_0(this, (const void *)*this, result + 1);
          if ( (unsigned int)(*(this + 5) + 1) >= 0x1000 )
          {
            if ( (unsigned int)v13 - *(v13 - 1) - 4 > 0x1F )
              goto LABEL_32;
            v13 = (_DWORD *)*(v13 - 1);
          }
          result = sub_1000E529(v13);
          *(this + 5) = 15;
        }
      }
      else
      {
        if ( 0x7FFFFFFF - result < a2 - result )
          sub_100096E0();
        v5 = a2 | 0xF;
        if ( (a2 | 0xF) <= 0x7FFFFFFF )
        {
          v6 = v4 >> 1;
          if ( v4 <= 0x7FFFFFFF - (v4 >> 1) )
          {
            if ( v5 < v6 + v4 )
              v5 = v6 + v4;
          }
          else
          {
            v5 = 0x7FFFFFFF;
          }
        }
        else
        {
          v5 = 0x7FFFFFFF;
        }
        v7 = __CFADD__(v5, 1) ? -1 : v5 + 1;
        if ( v7 < 0x1000 )
        {
          if ( v7 )
          {
            v11 = operator new(__CFADD__(v5, 1) ? -1 : v5 + 1);
            v4 = v16;
            v10 = v11;
          }
          else
          {
            v10 = nullptr;
          }
        }
        else
        {
          v8 = v7 + 35;
          if ( v7 + 35 < v7 )
            v8 = -1;
          v9 = operator new(v8);
          if ( !v9 )
            goto LABEL_32;
          v4 = v16;
          v10 = (_DWORD *)(((unsigned int)v9 + 35) & 0xFFFFFFE0);
          *(v10 - 1) = v9;
        }
        *(this + 4) = a2;
        *(this + 5) = v5;
        v14 = v15 + 1;
        if ( v4 >= 0x10 )
        {
          v12 = (_DWORD *)*this;
          memmove_0(v10, (const void *)*this, v14);
          if ( v16 + 1 < 0x1000 )
          {
LABEL_23:
            sub_1000E529(v12);
            *this = v10;
            *(this + 4) = v15;
            return v15;
          }
          if ( (unsigned int)v12 - *(v12 - 1) - 4 <= 0x1F )
          {
            v12 = (_DWORD *)*(v12 - 1);
            goto LABEL_23;
          }
LABEL_32:
          _invalid_parameter_noinfo_noreturn();
        }
        memmove_0(v10, this, v14);
        *this = v10;
        *(this + 4) = v15;
        return v15;
      }
    }
  }
  return result;
}


/* sub_10009890  @0x10009890  size=10 */
void __noreturn sub_10009890()
{
  sub_1000D3BA("vector<T> too long");
}


/* sub_100098A0  @0x100098a0  size=312 */
_DWORD *__thiscall sub_100098A0(_DWORD *this, size_t Size, char a3)
{
  unsigned int v4; // ecx
  void *v5; // edi
  size_t v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // ecx
  size_t v10; // eax
  void *v11; // eax
  _DWORD *v12; // ecx
  void *v13; // eax
  unsigned int v14; // [esp+Ch] [ebp-Ch]
  _DWORD *v15; // [esp+10h] [ebp-8h]

  v4 = *(this + 5);
  v14 = v4;
  if ( Size > v4 )
  {
    if ( Size > 0x7FFFFFFF )
      sub_100096E0();
    v7 = Size | 0xF;
    if ( (Size | 0xF) <= 0x7FFFFFFF )
    {
      v8 = v4 >> 1;
      if ( v4 <= 0x7FFFFFFF - (v4 >> 1) )
      {
        if ( v7 < v8 + v4 )
          v7 = v8 + v4;
      }
      else
      {
        v7 = 0x7FFFFFFF;
      }
    }
    else
    {
      v7 = 0x7FFFFFFF;
    }
    v9 = __CFADD__(v7, 1) ? -1 : v7 + 1;
    if ( v9 < 0x1000 )
    {
      if ( v9 )
        v12 = operator new(__CFADD__(v7, 1) ? -1 : v7 + 1);
      else
        v12 = nullptr;
    }
    else
    {
      v10 = v9 + 35;
      if ( v9 + 35 < v9 )
        v10 = -1;
      v11 = operator new(v10);
      if ( !v11 )
        goto LABEL_26;
      v12 = (_DWORD *)(((unsigned int)v11 + 35) & 0xFFFFFFE0);
      *(v12 - 1) = v11;
    }
    v15 = v12;
    *(this + 4) = Size;
    *(this + 5) = v7;
    memset(v12, a3, Size);
    *((_BYTE *)v15 + Size) = 0;
    if ( v14 < 0x10 )
    {
LABEL_25:
      *this = v15;
      return this;
    }
    v13 = (void *)*this;
    if ( v14 + 1 < 0x1000 )
    {
LABEL_24:
      sub_1000E529(v13);
      goto LABEL_25;
    }
    if ( (unsigned int)v13 - *((_DWORD *)v13 - 1) - 4 <= 0x1F )
    {
      v13 = *((void **)v13 - 1);
      goto LABEL_24;
    }
LABEL_26:
    _invalid_parameter_noinfo_noreturn();
  }
  v5 = this;
  if ( v4 >= 0x10 )
    v5 = (void *)*this;
  *(this + 4) = Size;
  memset(v5, a3, Size);
  *((_BYTE *)v5 + Size) = 0;
  return this;
}


/* sub_100099E0  @0x100099e0  size=312 */
_DWORD *__thiscall sub_100099E0(_DWORD *Src, unsigned int a2, int a3)
{
  int v4; // esi
  unsigned int v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // ecx
  unsigned int v8; // edx
  size_t v9; // eax
  void *v10; // eax
  _DWORD *v11; // edi
  void *v12; // esi
  size_t v14; // [esp-4h] [ebp-1Ch]
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  unsigned int v17; // [esp+14h] [ebp-4h]

  v4 = *(Src + 4);
  v15 = v4;
  if ( 2147483646 - v4 < a2 )
    sub_100096E0();
  v5 = *(Src + 5);
  v16 = v4 + a2;
  v6 = v16 | 7;
  v17 = v5;
  if ( (v16 | 7u) <= 0x7FFFFFFE )
  {
    if ( v5 <= 2147483646 - (v5 >> 1) )
    {
      if ( v6 < v5 + (v5 >> 1) )
        v6 = v5 + (v5 >> 1);
    }
    else
    {
      v6 = 2147483646;
    }
  }
  else
  {
    v6 = 2147483646;
  }
  v7 = __CFADD__(v6, 1) ? -1 : v6 + 1;
  v8 = 2 * v7;
  if ( v7 <= 0x7FFFFFFF )
  {
    if ( v8 < 0x1000 )
    {
      if ( v8 )
        v11 = operator new(2 * v7);
      else
        v11 = nullptr;
      goto LABEL_18;
    }
  }
  else
  {
    v8 = -1;
  }
  v9 = v8 + 35;
  if ( v8 + 35 < v8 )
    v9 = -1;
  v10 = operator new(v9);
  if ( !v10 )
    goto LABEL_25;
  v11 = (_DWORD *)(((unsigned int)v10 + 35) & 0xFFFFFFE0);
  *(v11 - 1) = v10;
LABEL_18:
  *(Src + 4) = v16;
  *(Src + 5) = v6;
  v14 = 2 * v15 + 2;
  if ( v17 >= 8 )
  {
    v12 = (void *)*Src;
    memmove_0(v11, (const void *)*Src, v14);
    if ( 2 * v17 + 2 < 0x1000 )
    {
LABEL_22:
      sub_1000E529(v12);
      *Src = v11;
      return Src;
    }
    if ( (unsigned int)v12 - *((_DWORD *)v12 - 1) - 4 <= 0x1F )
    {
      v12 = *((void **)v12 - 1);
      goto LABEL_22;
    }
LABEL_25:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v11, Src, v14);
  *Src = v11;
  return Src;
}


/* sub_10009B20  @0x10009b20  size=306 */
_DWORD *__thiscall sub_10009B20(_DWORD *Src, int a2, int a3, char a4)
{
  size_t v5; // edx
  unsigned int v6; // esi
  unsigned int v7; // edi
  unsigned int v8; // ecx
  size_t v9; // eax
  void *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  _BYTE *v13; // edi
  void *v14; // edi
  unsigned int v16; // [esp+Ch] [ebp-8h]
  size_t Size; // [esp+10h] [ebp-4h]
  _BYTE *Sizea; // [esp+10h] [ebp-4h]

  v5 = *(Src + 4);
  Size = v5;
  if ( v5 == 0x7FFFFFFF )
    sub_100096E0();
  v6 = *(Src + 5);
  v7 = (v5 + 1) | 0xF;
  v16 = v6;
  if ( v7 <= 0x7FFFFFFF )
  {
    if ( v6 <= 0x7FFFFFFF - (v6 >> 1) )
    {
      if ( v7 < v6 + (v6 >> 1) )
        v7 = v6 + (v6 >> 1);
    }
    else
    {
      v7 = 0x7FFFFFFF;
    }
  }
  else
  {
    v7 = 0x7FFFFFFF;
  }
  v8 = __CFADD__(v7, 1) ? -1 : v7 + 1;
  if ( v8 < 0x1000 )
  {
    if ( v8 )
    {
      v12 = operator new(__CFADD__(v7, 1) ? -1 : v7 + 1);
      v5 = Size;
      v11 = v12;
    }
    else
    {
      v11 = nullptr;
    }
  }
  else
  {
    v9 = v8 + 35;
    if ( v8 + 35 < v8 )
      v9 = -1;
    v10 = operator new(v9);
    if ( !v10 )
      goto LABEL_23;
    v5 = Size;
    v11 = (_DWORD *)(((unsigned int)v10 + 35) & 0xFFFFFFE0);
    *(v11 - 1) = v10;
  }
  *(Src + 5) = v7;
  v13 = (char *)v11 + v5;
  *(Src + 4) = v5 + 1;
  Sizea = (char *)v11 + v5;
  if ( v16 >= 0x10 )
  {
    v14 = (void *)*Src;
    memmove_0(v11, (const void *)*Src, v5);
    *Sizea = a4;
    Sizea[1] = 0;
    if ( v16 + 1 < 0x1000 )
    {
LABEL_20:
      sub_1000E529(v14);
      *Src = v11;
      return Src;
    }
    if ( (unsigned int)v14 - *((_DWORD *)v14 - 1) - 4 <= 0x1F )
    {
      v14 = *((void **)v14 - 1);
      goto LABEL_20;
    }
LABEL_23:
    _invalid_parameter_noinfo_noreturn();
  }
  memmove_0(v11, Src, v5);
  *v13 = a4;
  v13[1] = 0;
  *Src = v11;
  return Src;
}


/* sub_10009C53  @0x10009c53  size=10 */
int __stdcall sub_10009C53(int a1)
{
  return sub_100026C0((void *)(a1 - 4));
}


/* sub_10009C5D  @0x10009c5d  size=10 */
signed __int32 __stdcall sub_10009C5D(int a1)
{
  return sub_100026A0(a1 - 4);
}


/* sub_10009C67  @0x10009c67  size=10 */
int __stdcall sub_10009C67(int a1, _DWORD *a2, _DWORD *a3)
{
  return sub_100026F0(a1 - 4, a2, a3);
}


/* sub_10009C80  @0x10009c80  size=175 */
int __cdecl sub_10009C80(void *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // esi
  int v5; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_100019E0(a1, 0, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  v5 = dword_100330B4(0);
  dword_100330AC(v5, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v5, "status", COERCE_UNSIGNED_INT64((double)v4), HIDWORD(COERCE_UNSIGNED_INT64((double)v4)));
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_10009D30  @0x10009d30  size=175 */
int __cdecl sub_10009D30(void *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // esi
  int v5; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_100019E0(a1, 1, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  v5 = dword_100330B4(0);
  dword_100330AC(v5, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v5, "status", COERCE_UNSIGNED_INT64((double)v4), HIDWORD(COERCE_UNSIGNED_INT64((double)v4)));
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_10009DE0  @0x10009de0  size=175 */
int __cdecl sub_10009DE0(void *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // esi
  int v5; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10001D80(a1, 0, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  v5 = dword_100330B4(0);
  dword_100330AC(v5, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v5, "status", COERCE_UNSIGNED_INT64((double)v4), HIDWORD(COERCE_UNSIGNED_INT64((double)v4)));
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_10009E90  @0x10009e90  size=175 */
int __cdecl sub_10009E90(void *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // esi
  int v5; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10001D80(a1, 1u, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  v5 = dword_100330B4(0);
  dword_100330AC(v5, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v5, "status", COERCE_UNSIGNED_INT64((double)v4), HIDWORD(COERCE_UNSIGNED_INT64((double)v4)));
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_10009F40  @0x10009f40  size=180 */
int __cdecl sub_10009F40(void *a1, unsigned int a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  LPCWSTR v4; // esi
  int v5; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10002100(a1, 0, (int)&savedregs, 1);
  UnhookWindowsHookEx(hhk);
  v5 = dword_100330B4(0);
  dword_100330AC(v5, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v5, "status", COERCE_UNSIGNED_INT64((double)(int)v4), HIDWORD(COERCE_UNSIGNED_INT64((double)(int)v4)));
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A000  @0x1000a000  size=207 */
int __cdecl sub_1000A000(void *a1, double a2, unsigned int a3)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  LPCWSTR v5; // esi
  int v6; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, sub_10003090, ModuleHandleA, CurrentThreadId);
  v5 = sub_10002100(a1, a2 != 0.0, (int)&savedregs, 0);
  UnhookWindowsHookEx(hhk);
  v6 = dword_100330B4(0);
  dword_100330AC(v6, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v6, "status", COERCE_UNSIGNED_INT64((double)(int)v5), HIDWORD(COERCE_UNSIGNED_INT64((double)(int)v5)));
  result = dword_100330B8(v6, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A0D0  @0x1000a0d0  size=149 */
int __cdecl sub_1000A0D0(void *a1, void *a2, unsigned int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  v3 = sub_10004A80(a2, a1, (int)&savedregs, 0);
  v4 = dword_100330B4(0);
  dword_100330AC(v4, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A170  @0x1000a170  size=149 */
int __cdecl sub_1000A170(void *a1, void *a2, unsigned int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax
  int savedregs; // [esp+48h] [ebp+0h] BYREF

  v3 = sub_10004A80(a2, a1, (int)&savedregs, 1);
  v4 = dword_100330B4(0);
  dword_100330AC(v4, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A210  @0x1000a210  size=160 */
int __cdecl sub_1000A210(void *a1, double a2, unsigned int a3)
{
  int v3; // esi
  int result; // eax
  double v5; // [esp+40h] [ebp-8h]

  v5 = sub_10004C40(0, a1, a2);
  v3 = dword_100330B4(0);
  dword_100330AC(v3, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v3, "status", 0, 1072693248);
  dword_100330AC(v3, "value", LODWORD(v5), HIDWORD(v5));
  result = dword_100330B8(v3, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A2B0  @0x1000a2b0  size=160 */
int __cdecl sub_1000A2B0(void *a1, double a2, unsigned int a3)
{
  int v3; // esi
  int result; // eax
  double v5; // [esp+40h] [ebp-8h]

  v5 = sub_10004C40(1, a1, a2);
  v3 = dword_100330B4(0);
  dword_100330AC(v3, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v3, "status", 0, 1072693248);
  dword_100330AC(v3, "value", LODWORD(v5), HIDWORD(v5));
  result = dword_100330B8(v3, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A350  @0x1000a350  size=144 */
int __cdecl sub_1000A350(void *Src, void *a2, unsigned int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax

  v3 = sub_10006AF0(Src, a2);
  v4 = dword_100330B4(0);
  dword_100330AC(v4, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A3E0  @0x1000a3e0  size=152 */
int __cdecl sub_1000A3E0(void *Src, void *a2, __int64 a3, int a4)
{
  void **v4; // esi
  int v5; // edi
  int result; // eax

  v4 = sub_10006D90(Src, a2, (void *)a3, (void *)HIDWORD(a3));
  v5 = dword_100330B4(0);
  dword_100330AC(
    v5,
    &unk_1002B3AC,
    COERCE_UNSIGNED_INT64((double)(unsigned int)a4),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(unsigned int)a4)));
  dword_100330AC(v5, "status", 0, 1072693248);
  dword_100330B0(v5, "result", v4);
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A480  @0x1000a480  size=144 */
int __cdecl sub_1000A480(void *Src, void *a2, int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax

  v3 = sub_100070F0(Src, a2);
  v4 = dword_100330B4(0);
  dword_100330AC(
    v4,
    &unk_1002B3AC,
    COERCE_UNSIGNED_INT64((double)(unsigned int)a3),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(unsigned int)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A510  @0x1000a510  size=152 */
int __cdecl sub_1000A510(void *Src, void *a2, __int64 a3, int a4)
{
  void **v4; // esi
  int v5; // edi
  int result; // eax

  v4 = sub_10007390(Src, a2, (void *)a3, (void *)HIDWORD(a3));
  v5 = dword_100330B4(0);
  dword_100330AC(
    v5,
    &unk_1002B3AC,
    COERCE_UNSIGNED_INT64((double)(unsigned int)a4),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(unsigned int)a4)));
  dword_100330AC(v5, "status", 0, 1072693248);
  dword_100330B0(v5, "result", v4);
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A5B0  @0x1000a5b0  size=144 */
int __cdecl sub_1000A5B0(void *Src, void *a2, int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax

  v3 = sub_100076F0(Src, a2);
  v4 = dword_100330B4(0);
  dword_100330AC(
    v4,
    &unk_1002B3AC,
    COERCE_UNSIGNED_INT64((double)(unsigned int)a3),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(unsigned int)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A640  @0x1000a640  size=152 */
int __cdecl sub_1000A640(void *Src, void *a2, __int64 a3, int a4)
{
  void **v4; // esi
  int v5; // edi
  int result; // eax

  v4 = sub_10007990(Src, a2, (void *)a3, (void *)HIDWORD(a3));
  v5 = dword_100330B4(0);
  dword_100330AC(
    v5,
    &unk_1002B3AC,
    COERCE_UNSIGNED_INT64((double)(unsigned int)a4),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(unsigned int)a4)));
  dword_100330AC(v5, "status", 0, 1072693248);
  dword_100330B0(v5, "result", v4);
  result = dword_100330B8(v5, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A6E0  @0x1000a6e0  size=141 */
int __cdecl sub_1000A6E0(void *Src, unsigned int a2)
{
  void **v2; // esi
  int v3; // edi
  int result; // eax

  v2 = sub_10007CF0(Src);
  v3 = dword_100330B4(0);
  dword_100330AC(v3, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v3, "status", 0, 1072693248);
  dword_100330B0(v3, "result", v2);
  result = dword_100330B8(v3, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A770  @0x1000a770  size=144 */
int __cdecl sub_1000A770(void *Src, void *a2, unsigned int a3)
{
  void **v3; // esi
  int v4; // edi
  int result; // eax

  v3 = sub_10007F10(Src, a2);
  v4 = dword_100330B4(0);
  dword_100330AC(v4, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a3), HIDWORD(COERCE_UNSIGNED_INT64((double)a3)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330B0(v4, "result", v3);
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A800  @0x1000a800  size=163 */
int __cdecl sub_1000A800(__int64 a1, unsigned int a2)
{
  int v2; // esi
  int result; // eax
  double color; // [esp+40h] [ebp-8h]

  color = get_color(a1);
  v2 = dword_100330B4(0);
  dword_100330AC(v2, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a2), HIDWORD(COERCE_UNSIGNED_INT64((double)a2)));
  dword_100330AC(v2, "status", 0, 1072693248);
  dword_100330AC(v2, "value", LODWORD(color), HIDWORD(color));
  result = dword_100330B8(v2, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* sub_1000A8B0  @0x1000a8b0  size=167 */
int __usercall sub_1000A8B0@<eax>(unsigned __int64 a1@<st0>, __int64 a2, void *Src, unsigned int a4)
{
  int v4; // esi
  int result; // eax

  get_color_ext(a2, Src);
  v4 = dword_100330B4(0);
  dword_100330AC(v4, &unk_1002B3AC, COERCE_UNSIGNED_INT64((double)a4), HIDWORD(COERCE_UNSIGNED_INT64((double)a4)));
  dword_100330AC(v4, "status", 0, 1072693248);
  dword_100330AC(v4, "value", a1, HIDWORD(a1));
  result = dword_100330B8(v4, 63);
  byte_1002F8F4 = 1;
  return result;
}


/* EXPORT show_message  @0x1000a960  size=82 */
double __cdecl show_message(void *a1)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_100019E0(a1, 0, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  return (double)v4;
}


/* EXPORT show_message_async  @0x1000a9c0  size=267 */
double __cdecl show_message_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_10009C80, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT show_message_cancelable  @0x1000aad0  size=82 */
double __cdecl show_message_cancelable(void *a1)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_100019E0(a1, 1, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  return (double)v4;
}


/* EXPORT show_message_cancelable_async  @0x1000ab30  size=267 */
double __cdecl show_message_cancelable_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_10009D30, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT show_question  @0x1000ac40  size=82 */
double __cdecl show_question(void *a1)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10001D80(a1, 0, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  return (double)v4;
}


/* EXPORT show_question_async  @0x1000aca0  size=267 */
double __cdecl show_question_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_10009DE0, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT show_question_cancelable  @0x1000adb0  size=82 */
double __cdecl show_question_cancelable(void *a1)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int v4; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10001D80(a1, 1u, (int)&savedregs);
  UnhookWindowsHookEx(hhk);
  return (double)v4;
}


/* EXPORT show_question_cancelable_async  @0x1000ae10  size=267 */
double __cdecl show_question_cancelable_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_10009E90, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT show_attempt  @0x1000af20  size=87 */
double __cdecl show_attempt(void *a1)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  LPCWSTR v4; // [esp+Ch] [ebp-8h]
  int savedregs; // [esp+14h] [ebp+0h] BYREF

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, __std_tzdb_get_time_zones, ModuleHandleA, CurrentThreadId);
  v4 = sub_10002100(a1, 0, (int)&savedregs, 1);
  UnhookWindowsHookEx(hhk);
  return (double)(int)v4;
}


/* EXPORT show_attempt_async  @0x1000af80  size=267 */
double __cdecl show_attempt_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_10009F40, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT show_error  @0x1000b090  size=111 */
double __cdecl show_error(void *a1, double a2)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  int savedregs; // [esp+0h] [ebp+0h] BYREF
  LPCWSTR v6; // [esp+10h] [ebp+10h]

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, sub_10003090, ModuleHandleA, CurrentThreadId);
  v6 = sub_10002100(a1, a2 != 0.0, (int)&savedregs, 0);
  UnhookWindowsHookEx(hhk);
  return (double)(int)v6;
}


/* EXPORT show_error_async  @0x1000b100  size=271 */
double show_error_async(void *Src, ...)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]
  va_list va; // [esp+2Ch] [ebp+Ch] BYREF

  va_start(va, Src);
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CB20(sub_1000A000, &v5, va, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT get_string  @0x1000b210  size=21 */
void **__cdecl get_string(void *a1, void *a2)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  return sub_10004A80(a2, a1, (int)&savedregs, 0);
}


/* EXPORT get_string_async  @0x1000b230  size=329 */
double __cdecl get_string_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A0D0, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_password  @0x1000b380  size=21 */
void **__cdecl get_password(void *a1, void *a2)
{
  int savedregs; // [esp+0h] [ebp+0h] BYREF

  return sub_10004A80(a2, a1, (int)&savedregs, 1);
}


/* EXPORT get_password_async  @0x1000b3a0  size=329 */
double __cdecl get_password_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A170, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_integer  @0x1000b4f0  size=36 */
double __cdecl get_integer(void *a1, double a2)
{
  return sub_10004C40(0, a1, a2);
}


/* EXPORT get_integer_async  @0x1000b520  size=271 */
double get_integer_async(void *Src, ...)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]
  va_list va; // [esp+2Ch] [ebp+Ch] BYREF

  va_start(va, Src);
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CB20(sub_1000A210, &v5, va, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT get_passcode  @0x1000b630  size=36 */
double __cdecl get_passcode(void *a1, double a2)
{
  return sub_10004C40(1, a1, a2);
}


/* EXPORT get_passcode_async  @0x1000b660  size=271 */
double get_passcode_async(void *Src, ...)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]
  va_list va; // [esp+2Ch] [ebp+Ch] BYREF

  va_start(va, Src);
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CB20(sub_1000A2B0, &v5, va, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT get_open_filename  @0x1000b770  size=15 */
void **__cdecl get_open_filename(void *Src, void *a2)
{
  return sub_10006AF0(Src, a2);
}


/* EXPORT get_open_filename_async  @0x1000b780  size=329 */
double __cdecl get_open_filename_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A350, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_open_filename_ext  @0x1000b8d0  size=25 */
void **__cdecl get_open_filename_ext(void *Src, void *a2, void *a3, void *a4)
{
  return sub_10006D90(Src, a2, a3, a4);
}


/* EXPORT get_open_filename_ext_async  @0x1000b8f0  size=467 */
double __cdecl get_open_filename_ext_async(void *Src, void *a2, void *a3, void *a4)
{
  void **v4; // eax
  void **v5; // eax
  void **v6; // eax
  void **v7; // eax
  int v8; // eax
  void *v10; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-20h] BYREF
  void **v12; // [esp+14h] [ebp-1Ch] BYREF
  void **v13; // [esp+18h] [ebp-18h] BYREF
  void **v14; // [esp+1Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+20h] [ebp-10h]

  v10 = a4;
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v11 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  sub_10008B40(&dword_1002FA30, a3, strlen((const char *)a3));
  sub_10008B40(&dword_1002FA78, v10, strlen((const char *)v10));
  v4 = &dword_1002FA78;
  if ( (unsigned int)dword_1002FA8C >= 0x10 )
    v4 = (void **)dword_1002FA78;
  v10 = v4;
  v5 = &dword_1002FA30;
  if ( (unsigned int)dword_1002FA44 >= 0x10 )
    v5 = (void **)dword_1002FA30;
  v12 = v5;
  v6 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v6 = (void **)dword_1002FA48;
  v13 = v6;
  v7 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v7 = (void **)dword_1002FA60;
  v14 = v7;
  sub_1000CC80(sub_1000A3E0, &v14, &v13, &v12, &v10, &v11);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v8 = unknown_libname_5(hObject[0]);
  if ( v8 )
    std::_Throw_C_error(v8);
  *(double *)hObject = (double)v11;
  return (double)v11;
}


/* EXPORT get_open_filenames  @0x1000bad0  size=15 */
void **__cdecl get_open_filenames(void *Src, void *a2)
{
  return sub_100070F0(Src, a2);
}


/* EXPORT get_open_filenames_async  @0x1000bae0  size=329 */
double __cdecl get_open_filenames_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A480, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_open_filenames_ext  @0x1000bc30  size=25 */
void **__cdecl get_open_filenames_ext(void *Src, void *a2, void *a3, void *a4)
{
  return sub_10007390(Src, a2, a3, a4);
}


/* EXPORT get_open_filenames_ext_async  @0x1000bc50  size=467 */
double __cdecl get_open_filenames_ext_async(void *Src, void *a2, void *a3, void *a4)
{
  void **v4; // eax
  void **v5; // eax
  void **v6; // eax
  void **v7; // eax
  int v8; // eax
  void *v10; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-20h] BYREF
  void **v12; // [esp+14h] [ebp-1Ch] BYREF
  void **v13; // [esp+18h] [ebp-18h] BYREF
  void **v14; // [esp+1Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+20h] [ebp-10h]

  v10 = a4;
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v11 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  sub_10008B40(&dword_1002FA30, a3, strlen((const char *)a3));
  sub_10008B40(&dword_1002FA78, v10, strlen((const char *)v10));
  v4 = &dword_1002FA78;
  if ( (unsigned int)dword_1002FA8C >= 0x10 )
    v4 = (void **)dword_1002FA78;
  v10 = v4;
  v5 = &dword_1002FA30;
  if ( (unsigned int)dword_1002FA44 >= 0x10 )
    v5 = (void **)dword_1002FA30;
  v12 = v5;
  v6 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v6 = (void **)dword_1002FA48;
  v13 = v6;
  v7 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v7 = (void **)dword_1002FA60;
  v14 = v7;
  sub_1000CC80(sub_1000A510, &v14, &v13, &v12, &v10, &v11);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v8 = unknown_libname_5(hObject[0]);
  if ( v8 )
    std::_Throw_C_error(v8);
  *(double *)hObject = (double)v11;
  return (double)v11;
}


/* EXPORT get_save_filename  @0x1000be30  size=15 */
void **__cdecl get_save_filename(void *Src, void *a2)
{
  return sub_100076F0(Src, a2);
}


/* EXPORT get_save_filename_async  @0x1000be40  size=329 */
double __cdecl get_save_filename_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A5B0, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_save_filename_ext  @0x1000bf90  size=25 */
void **__cdecl get_save_filename_ext(void *Src, void *a2, void *a3, void *a4)
{
  return sub_10007990(Src, a2, a3, a4);
}


/* EXPORT get_save_filename_ext_async  @0x1000bfb0  size=467 */
double __cdecl get_save_filename_ext_async(void *Src, void *a2, void *a3, void *a4)
{
  void **v4; // eax
  void **v5; // eax
  void **v6; // eax
  void **v7; // eax
  int v8; // eax
  void *v10; // [esp+Ch] [ebp-24h] BYREF
  unsigned int v11; // [esp+10h] [ebp-20h] BYREF
  void **v12; // [esp+14h] [ebp-1Ch] BYREF
  void **v13; // [esp+18h] [ebp-18h] BYREF
  void **v14; // [esp+1Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+20h] [ebp-10h]

  v10 = a4;
  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v11 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  sub_10008B40(&dword_1002FA30, a3, strlen((const char *)a3));
  sub_10008B40(&dword_1002FA78, v10, strlen((const char *)v10));
  v4 = &dword_1002FA78;
  if ( (unsigned int)dword_1002FA8C >= 0x10 )
    v4 = (void **)dword_1002FA78;
  v10 = v4;
  v5 = &dword_1002FA30;
  if ( (unsigned int)dword_1002FA44 >= 0x10 )
    v5 = (void **)dword_1002FA30;
  v12 = v5;
  v6 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v6 = (void **)dword_1002FA48;
  v13 = v6;
  v7 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v7 = (void **)dword_1002FA60;
  v14 = v7;
  sub_1000CC80(sub_1000A640, &v14, &v13, &v12, &v10, &v11);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v8 = unknown_libname_5(hObject[0]);
  if ( v8 )
    std::_Throw_C_error(v8);
  *(double *)hObject = (double)v11;
  return (double)v11;
}


/* EXPORT get_directory  @0x1000c190  size=15 */
void **__cdecl get_directory(void *Src)
{
  return sub_10007CF0(Src);
}


/* EXPORT get_directory_async  @0x1000c1a0  size=267 */
double __cdecl get_directory_async(void *Src)
{
  void **v1; // eax
  int v2; // eax
  unsigned int v4; // [esp+8h] [ebp-18h] BYREF
  void **v5; // [esp+Ch] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+10h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v4 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  v1 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v1 = (void **)dword_1002FA60;
  v5 = v1;
  sub_1000CA80(sub_1000A6E0, &v5, &v4);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v2 = unknown_libname_5(hObject[0]);
  if ( v2 )
    std::_Throw_C_error(v2);
  *(double *)hObject = (double)v4;
  return (double)v4;
}


/* EXPORT get_directory_alt  @0x1000c2b0  size=15 */
void **__cdecl get_directory_alt(void *Src, void *a2)
{
  return sub_10007F10(Src, a2);
}


/* EXPORT get_directory_alt_async  @0x1000c2c0  size=329 */
double __cdecl get_directory_alt_async(void *Src, void *a2)
{
  void **v2; // eax
  void **v3; // eax
  int v4; // eax
  unsigned int v6; // [esp+Ch] [ebp-1Ch] BYREF
  void **v7; // [esp+10h] [ebp-18h] BYREF
  void **v8; // [esp+14h] [ebp-14h] BYREF
  HANDLE hObject[3]; // [esp+18h] [ebp-10h]

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v6 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  sub_10008B40(&dword_1002FA60, Src, strlen((const char *)Src));
  sub_10008B40(&dword_1002FA48, a2, strlen((const char *)a2));
  v2 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v2 = (void **)dword_1002FA48;
  v7 = v2;
  v3 = &dword_1002FA60;
  if ( (unsigned int)dword_1002FA74 >= 0x10 )
    v3 = (void **)dword_1002FA60;
  v8 = v3;
  sub_1000CBD0(sub_1000A770, &v8, &v7, &v6);
  if ( !hObject[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(hObject[0]);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)hObject = (double)v6;
  return (double)v6;
}


/* EXPORT get_color  @0x1000c410  size=117 */
double get_color()
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  _DWORD *v3[4]; // [esp-18h] [ebp-20h] BYREF
  size_t v4; // [esp-8h] [ebp-10h]
  unsigned int v5; // [esp-4h] [ebp-Ch]
  signed int v7; // [esp+14h] [ebp+Ch]

  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  v4 = 0;
  v5 = 15;
  LOBYTE(v3[0]) = 0;
  sub_10008B40(v3, &unk_1002B210, 0);
  v7 = sub_10006980(v3[0], (int)v3[1], (int)v3[2], (int)v3[3], v4, v5);
  UnhookWindowsHookEx(hhk);
  return (double)v7;
}


/* EXPORT get_color_async  @0x1000c490  size=260 */
double __cdecl get_color_async(double a1)
{
  unsigned int v1; // edi
  unsigned int *v2; // eax
  void *v3; // ecx
  int v4; // eax
  unsigned int ThrdAddr[2]; // [esp+8h] [ebp-10h] BYREF

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  v1 = dword_1002F8F0;
  byte_1002F8F4 = 0;
  ++dword_1002F8F0;
  v2 = (unsigned int *)operator new(0xCu);
  *v2 = v1;
  v2[1] = (int)a1;
  v2[2] = (unsigned int)sub_1000A800;
  v3 = (void *)_beginthreadex(nullptr, 0, StartAddress, v2, 0, &ThrdAddr[1]);
  if ( !v3 )
  {
    ThrdAddr[1] = 0;
    std::_Throw_Cpp_error(6);
  }
  if ( !ThrdAddr[1] )
    std::_Throw_Cpp_error(1);
  v4 = unknown_libname_5(v3);
  if ( v4 )
    std::_Throw_C_error(v4);
  *(double *)ThrdAddr = (double)v1;
  return (double)v1;
}


/* EXPORT get_color_ext  @0x1000c5a0  size=222 */
double __cdecl get_color_ext(__int64 a1, void *Src)
{
  DWORD CurrentThreadId; // esi
  HMODULE ModuleHandleA; // eax
  void *v4; // ecx
  unsigned int v5; // edx
  _DWORD *v7[5]; // [esp-18h] [ebp-4Ch] BYREF
  unsigned int v8; // [esp-4h] [ebp-38h]
  signed int v9; // [esp+Ch] [ebp-28h]
  void *Block[5]; // [esp+14h] [ebp-20h] BYREF
  unsigned int v11; // [esp+28h] [ebp-Ch]

  Block[4] = nullptr;
  v11 = 15;
  LOBYTE(Block[0]) = 0;
  sub_10008B40(Block, Src, strlen((const char *)Src));
  CurrentThreadId = GetCurrentThreadId();
  ModuleHandleA = GetModuleHandleA(nullptr);
  hhk = SetWindowsHookExA(5, (HOOKPROC)sub_10003490, ModuleHandleA, CurrentThreadId);
  sub_100087A0(v7, Block);
  v9 = sub_10006980(v7[0], (int)v7[1], (int)v7[2], (int)v7[3], (size_t)v7[4], v8);
  UnhookWindowsHookEx(hhk);
  if ( v11 >= 0x10 )
  {
    v4 = Block[0];
    v5 = v11 + 1;
    if ( v11 + 1 >= 0x1000 )
    {
      v4 = *((void **)Block[0] - 1);
      v5 = v11 + 36;
      if ( (unsigned int)((char *)Block[0] - (char *)v4 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v8 = v5;
    sub_1000E529(v4);
  }
  return (double)v9;
}


/* EXPORT get_color_ext_async  @0x1000c680  size=320 */
double __cdecl get_color_ext_async(__int64 a1, void *Src)
{
  unsigned int v2; // ebx
  void **v3; // edi
  unsigned int *v4; // eax
  void *v5; // ecx
  int v6; // eax
  unsigned int ThrdAddr[2]; // [esp+10h] [ebp-10h] BYREF

  if ( !byte_1002F8F4 )
    return (double)(unsigned int)(dword_1002F8F0 - 1);
  byte_1002F8F4 = 0;
  v2 = dword_1002F8F0++;
  sub_10008B40(&dword_1002FA48, Src, strlen((const char *)Src));
  v3 = &dword_1002FA48;
  if ( (unsigned int)dword_1002FA5C >= 0x10 )
    v3 = (void **)dword_1002FA48;
  v4 = (unsigned int *)operator new(0x10u);
  *v4 = v2;
  v4[1] = (unsigned int)v3;
  v4[2] = (int)*(double *)&a1;
  v4[3] = (unsigned int)sub_1000A8B0;
  v5 = (void *)_beginthreadex(nullptr, 0, sub_1000CFC0, v4, 0, &ThrdAddr[1]);
  if ( !v5 )
  {
    ThrdAddr[1] = 0;
    std::_Throw_Cpp_error(6);
  }
  if ( !ThrdAddr[1] )
    std::_Throw_Cpp_error(1);
  v6 = unknown_libname_5(v5);
  if ( v6 )
    std::_Throw_C_error(v6);
  *(double *)ThrdAddr = (double)v2;
  return (double)v2;
}


/* EXPORT widget_get_caption  @0x1000c7d0  size=20 */
void **widget_get_caption()
{
  void **result; // eax

  result = &Src;
  if ( (unsigned int)dword_1002F93C >= 0x10 )
    return (void **)Src;
  return result;
}


/* EXPORT widget_set_caption  @0x1000c7f0  size=42 */
double __cdecl widget_set_caption(void *Src)
{
  sub_10008B40(&::Src, Src, strlen((const char *)Src));
  return 0.0;
}


/* EXPORT widget_get_icon  @0x1000c820  size=5 */
// attributes: thunk
void **widget_get_icon()
{
  return widget_get_icon_0();
}


/* EXPORT widget_set_icon  @0x1000c830  size=250 */
double __cdecl widget_set_icon(void *Src)
{
  const WCHAR *p_lpFileName; // eax
  WCHAR *v2; // ecx
  unsigned int v3; // edx
  const CHAR *v5[4]; // [esp-18h] [ebp-248h] BYREF
  int v6; // [esp-8h] [ebp-238h]
  unsigned int v7; // [esp-4h] [ebp-234h]
  LPCWSTR lpFileName; // [esp+Ch] [ebp-224h] BYREF
  unsigned int v9; // [esp+20h] [ebp-210h]
  WCHAR Buffer[260]; // [esp+24h] [ebp-20Ch] BYREF

  v6 = 0;
  v7 = 15;
  LOBYTE(v5[0]) = 0;
  sub_10008B40(v5, Src, strlen((const char *)Src));
  sub_10001680(v5[0], (int)v5[1], (int)v5[2], (int)v5[3], v6, v7);
  p_lpFileName = (const WCHAR *)&lpFileName;
  if ( v9 >= 8 )
    p_lpFileName = lpFileName;
  GetFullPathNameW(p_lpFileName, 0x104u, Buffer, nullptr);
  if ( PathFileExistsW(Buffer) )
    sub_10008B40(&dword_1002F8F8, Src, strlen((const char *)Src));
  if ( v9 >= 8 )
  {
    v2 = (WCHAR *)lpFileName;
    v3 = 2 * v9 + 2;
    if ( v3 >= 0x1000 )
    {
      v2 = *((WCHAR **)lpFileName - 1);
      v3 = 2 * v9 + 37;
      if ( (unsigned int)((char *)lpFileName - (char *)v2 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    v7 = v3;
    sub_1000E529(v2);
  }
  return 0.0;
}


/* EXPORT widget_get_owner  @0x1000c930  size=6 */
HWND widget_get_owner()
{
  return hWnd;
}


/* EXPORT widget_set_owner  @0x1000c940  size=15 */
double __cdecl widget_set_owner(HWND a1)
{
  hWnd = a1;
  return 0.0;
}


/* EXPORT widget_get_system  @0x1000c950  size=6 */
const char *widget_get_system()
{
  return "Win32";
}


/* EXPORT widget_set_system  @0x1000c960  size=3 */
double widget_set_system()
{
  return 0.0;
}


/* EXPORT widget_get_button_name  @0x1000c970  size=32 */
char *__cdecl widget_get_button_name(double a1)
{
  char *result; // eax

  result = (char *)&unk_1002F940 + 24 * (int)a1;
  if ( (unsigned int)dword_1002F954[6 * (int)a1] >= 0x10 )
    return *(char **)result;
  return result;
}


/* EXPORT widget_set_button_name  @0x1000c990  size=186 */
double __cdecl widget_set_button_name(__int64 a1, void *Src)
{
  void **v2; // ecx
  void **v3; // eax
  void *v4; // ecx
  void *Block[4]; // [esp+4h] [ebp-1Ch] BYREF
  size_t Size; // [esp+14h] [ebp-Ch]
  unsigned int v8; // [esp+18h] [ebp-8h]

  Size = 0;
  v8 = 15;
  LOBYTE(Block[0]) = 0;
  sub_10008B40(Block, Src, strlen((const char *)Src));
  v2 = (void **)((char *)&unk_1002F940 + 24 * (int)*(double *)&a1);
  v3 = Block;
  if ( v2 != Block )
  {
    if ( v8 >= 0x10 )
      v3 = (void **)Block[0];
    sub_10008B40(v2, v3, Size);
  }
  if ( v8 >= 0x10 )
  {
    v4 = Block[0];
    if ( v8 + 1 >= 0x1000 )
    {
      v4 = *((void **)Block[0] - 1);
      if ( (unsigned int)((char *)Block[0] - (char *)v4 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v4);
  }
  return 0.0;
}


/* EXPORT RegisterCallbacks  @0x1000ca50  size=37 */
int (__cdecl *__cdecl RegisterCallbacks(
        int (__cdecl *a1)(_DWORD, _DWORD),
        int (__cdecl *a2)(_DWORD),
        int (__cdecl *a3)(_DWORD, _DWORD, _DWORD, _DWORD),
        int (__cdecl *a4)(_DWORD, _DWORD, _DWORD)))(_DWORD, _DWORD, _DWORD)
{
  dword_100330B8 = a1;
  dword_100330B4 = a2;
  dword_100330AC = a3;
  dword_100330B0 = a4;
  return a4;
}


/* sub_1000CA80  @0x1000ca80  size=158 */
uintptr_t *__thiscall sub_1000CA80(uintptr_t *this, int a2, _DWORD *a3, _DWORD *a4)
{
  uintptr_t v5; // eax
  _DWORD *v7; // [esp+Ch] [ebp-14h]

  v7 = operator new(0xCu);
  *v7 = *a4;
  v7[1] = *a3;
  v7[2] = a2;
  v5 = _beginthreadex(nullptr, 0, sub_1000CDC0, v7, 0, this + 1);
  *this = v5;
  if ( !v5 )
  {
    *(this + 1) = 0;
    std::_Throw_Cpp_error(6);
  }
  return this;
}


/* sub_1000CB20  @0x1000cb20  size=170 */
uintptr_t *__thiscall sub_1000CB20(uintptr_t *this, int a2, _DWORD *a3, _QWORD *a4, _DWORD *a5)
{
  uintptr_t v6; // eax
  _QWORD *v8; // [esp+Ch] [ebp-14h]

  v8 = operator new(0x20u);
  *(_DWORD *)v8 = *a5;
  v8[1] = *a4;
  *((_DWORD *)v8 + 4) = *a3;
  *((_DWORD *)v8 + 6) = a2;
  v6 = _beginthreadex(nullptr, 0, sub_1000CE20, v8, 0, this + 1);
  *this = v6;
  if ( !v6 )
  {
    *(this + 1) = 0;
    std::_Throw_Cpp_error(6);
  }
  return this;
}


/* sub_1000CBD0  @0x1000cbd0  size=166 */
uintptr_t *__thiscall sub_1000CBD0(uintptr_t *this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  uintptr_t v6; // eax
  _DWORD *v8; // [esp+Ch] [ebp-14h]

  v8 = operator new(0x10u);
  *v8 = *a5;
  v8[1] = *a4;
  v8[2] = *a3;
  v8[3] = a2;
  v6 = _beginthreadex(nullptr, 0, sub_1000CE90, v8, 0, this + 1);
  *this = v6;
  if ( !v6 )
  {
    *(this + 1) = 0;
    std::_Throw_Cpp_error(6);
  }
  return this;
}


/* sub_1000CC80  @0x1000cc80  size=182 */
uintptr_t *__thiscall sub_1000CC80(uintptr_t *this, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  uintptr_t v8; // eax
  _DWORD *v10; // [esp+Ch] [ebp-14h]

  v10 = operator new(0x18u);
  *v10 = *a7;
  v10[1] = *a6;
  v10[2] = *a5;
  v10[3] = *a4;
  v10[4] = *a3;
  v10[5] = a2;
  v8 = _beginthreadex(nullptr, 0, sub_1000CEF0, v10, 0, this + 1);
  *this = v8;
  if ( !v8 )
  {
    *(this + 1) = 0;
    std::_Throw_Cpp_error(6);
  }
  return this;
}


/* sub_1000CDC0  @0x1000cdc0  size=84 */
unsigned int __stdcall sub_1000CDC0(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD))Block[2])(Block[1], *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* sub_1000CE20  @0x1000ce20  size=97 */
unsigned int __stdcall sub_1000CE20(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))Block[6])(Block[4], Block[2], Block[3], *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* sub_1000CE90  @0x1000ce90  size=87 */
unsigned int __stdcall sub_1000CE90(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD, _DWORD))Block[3])(Block[2], Block[1], *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* sub_1000CEF0  @0x1000cef0  size=93 */
unsigned int __stdcall sub_1000CEF0(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))Block[5])(Block[4], Block[3], Block[2], Block[1], *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* StartAddress  @0x1000cf50  size=98 */
unsigned int __stdcall StartAddress(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD, _DWORD))Block[2])(
    COERCE_UNSIGNED_INT64((double)(int)Block[1]),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(int)Block[1])),
    *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* sub_1000CFC0  @0x1000cfc0  size=101 */
unsigned int __stdcall sub_1000CFC0(_DWORD *Block)
{
  ((void (__cdecl *)(_DWORD, _DWORD, _DWORD, _DWORD))Block[3])(
    COERCE_UNSIGNED_INT64((double)(int)Block[2]),
    HIDWORD(COERCE_UNSIGNED_INT64((double)(int)Block[2])),
    Block[1],
    *Block);
  _Cnd_do_broadcast_at_thread_exit();
  sub_1000E529(Block);
  return 0;
}


/* sub_1000D030  @0x1000d030  size=25 */
void __stdcall __noreturn sub_1000D030(int a1)
{
  off_1002F000(a1, 0);
}


/* sub_1000D050  @0x1000d050  size=63 */
_DWORD *__thiscall sub_1000D050(_DWORD *this, int a2)
{
  int v3; // ecx

  *this = &off_100242D0;
  *(this + 1) = *(_DWORD *)(a2 + 4);
  v3 = *(_DWORD *)(a2 + 8);
  *(this + 2) = v3;
  *(this + 3) = 0;
  if ( v3 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 4))(*(_DWORD *)(*(_DWORD *)v3 + 4), v3);
  return this;
}


/* sub_1000D090  @0x1000d090  size=66 */
_DWORD *__thiscall sub_1000D090(_DWORD *this, int a2, int a3, char a4)
{
  *this = &off_100242D0;
  *(this + 1) = a2;
  *(this + 2) = a3;
  *(this + 3) = 0;
  if ( a3 && a4 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)a3 + 4))(*(_DWORD *)(*(_DWORD *)a3 + 4), a3);
  return this;
}


/* sub_1000D0E0  @0x1000d0e0  size=50 */
HLOCAL __thiscall sub_1000D0E0(void *this)
{
  int v2; // ecx
  HLOCAL result; // eax

  v2 = *((_DWORD *)this + 2);
  *(_DWORD *)this = &off_100242D0;
  if ( v2 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v2 + 8))(*(_DWORD *)(*(_DWORD *)v2 + 8), v2);
  result = *((HLOCAL *)this + 3);
  if ( result )
    return LocalFree(*((HLOCAL *)this + 3));
  return result;
}


/* sub_1000D120  @0x1000d120  size=75 */
void *__thiscall sub_1000D120(void *Block, char a2)
{
  int v3; // ecx

  v3 = *((_DWORD *)Block + 2);
  *(_DWORD *)Block = &off_100242D0;
  if ( v3 )
    (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v3 + 8))(*(_DWORD *)(*(_DWORD *)v3 + 8), v3);
  if ( *((_DWORD *)Block + 3) )
    LocalFree(*((HLOCAL *)Block + 3));
  if ( (a2 & 1) != 0 )
    sub_1000E529(Block);
  return Block;
}


/* sub_1000D170  @0x1000d170  size=36 */
void __cdecl __noreturn sub_1000D170(int a1, int a2)
{
  _DWORD pExceptionObject[4]; // [esp+0h] [ebp-10h] BYREF

  sub_1000D090(pExceptionObject, a1, a2, 0);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI1_AV_com_error__);
}


/* sub_1000D195  @0x1000d195  size=83 */
char *__thiscall sub_1000D195(char *this)
{
  sub_1000D1E8();
  *(_DWORD *)this = 56;
  *((_DWORD *)this + 2) = 0x10000000;
  *((_DWORD *)this + 1) = 0x10000000;
  *((_DWORD *)this + 3) = 3584;
  *((_DWORD *)this + 4) = &unk_100242D4;
  if ( sub_100015A0((LPCRITICAL_SECTION)(this + 20)) < 0 )
  {
    if ( IsDebuggerPresent() )
      OutputDebugStringW(L"ERROR : Unable to initialize critical section in CAtlBaseModule\n");
    byte_10030C90 = 1;
  }
  return this;
}


/* sub_1000D1E8  @0x1000d1e8  size=35 */
_DWORD *__thiscall sub_1000D1E8(_DWORD *this)
{
  memset(this + 5, 0, 0x18u);
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  return this;
}


/* sub_1000D23E  @0x1000d23e  size=27 */
std::exception *__thiscall sub_1000D23E(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_alloc::`vftable';
  return this;
}


/* sub_1000D259  @0x1000d259  size=24 */
_DWORD *__thiscall sub_1000D259(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad allocation";
  *this = &std::bad_alloc::`vftable';
  return this;
}


/* sub_1000D2D2  @0x1000d2d2  size=27 */
std::exception *__thiscall sub_1000D2D2(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}


/* sub_1000D2ED  @0x1000d2ed  size=31 */
std::exception *__thiscall sub_1000D2ED(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::length_error::`vftable';
  return this;
}


/* sub_1000D30C  @0x1000d30c  size=27 */
std::exception *__thiscall sub_1000D30C(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::logic_error::`vftable';
  return this;
}


/* sub_1000D327  @0x1000d327  size=27 */
std::exception *__thiscall sub_1000D327(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}


/* sub_1000D342  @0x1000d342  size=31 */
std::exception *__thiscall sub_1000D342(std::exception *this, char *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::out_of_range::`vftable';
  return this;
}


/* sub_1000D361  @0x1000d361  size=27 */
std::exception *__thiscall sub_1000D361(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}


/* sub_1000D3BA  @0x1000d3ba  size=31 */
void __cdecl __noreturn sub_1000D3BA(char *a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000D2ED((std::exception *)pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVlength_error_std__);
}


/* sub_1000D3DA  @0x1000d3da  size=31 */
void __cdecl __noreturn sub_1000D3DA(char *a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000D342((std::exception *)pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}


/* sub_1000D407  @0x1000d407  size=38 */
void *sub_1000D407()
{
  if ( !std::_Execute_once(
          (struct std::once_flag *)&unk_1002FD8C,
          std::_Immortalize_impl<std::_Generic_error_category>,
          &unk_1002FD90) )
    terminate();
  return &unk_1002FD90;
}


/* sub_1000D4BC  @0x1000d4bc  size=42 */
std::exception *__thiscall sub_1000D4BC(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::_System_error::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  return this;
}


/* sub_1000D4E6  @0x1000d4e6  size=40 */
std::exception *__thiscall sub_1000D4E6(std::exception *this, char *a2)
{
  const char *v2; // eax

  v2 = a2;
  if ( *((_DWORD *)a2 + 5) >= 0x10u )
    v2 = *(const char **)a2;
  std::exception::exception(this, v2);
  *(_DWORD *)this = &std::runtime_error::`vftable';
  return this;
}


/* sub_1000D50E  @0x1000d50e  size=27 */
std::exception *__thiscall sub_1000D50E(std::exception *this, struct std::exception *a2)
{
  sub_1000D4BC(this, a2);
  *(_DWORD *)this = &std::system_error::`vftable';
  return this;
}


/* sub_1000D744  @0x1000d744  size=5 */
// attributes: thunk
void *sub_1000D744()
{
  return sub_1000D407();
}


/* sub_1000D78C  @0x1000d78c  size=6 */
const char *sub_1000D78C()
{
  return "generic";
}


/* GetCurrentThreadId  @0x1000d833  size=6 */
// attributes: thunk
DWORD __stdcall GetCurrentThreadId()
{
  return __imp_GetCurrentThreadId();
}


/* sub_1000D914  @0x1000d914  size=12 */
int sub_1000D914()
{
  return unknown_libname_7(&stru_1002FFA0);
}


/* sub_1000D920  @0x1000d920  size=12 */
int sub_1000D920()
{
  return sub_1000DCD8(&stru_1002FFA0);
}


/* sub_1000DCD8  @0x1000dcd8  size=14 */
void __cdecl sub_1000DCD8(LPCRITICAL_SECTION lpCriticalSection)
{
  LeaveCriticalSection(lpCriticalSection);
}


/* j__free  @0x1000dce6  size=5 */
// attributes: thunk
void __cdecl j__free(void *Block)
{
  free(Block);
}


/* j_j__free  @0x1000dcfc  size=5 */
// attributes: thunk
void __cdecl j_j__free(void *Block)
{
  j__free(Block);
}


/* sub_1000E2DD  @0x1000e2dd  size=13 */
char sub_1000E2DD()
{
  __acrt_thread_detach();
  __vcrt_thread_detach();
  return 1;
}


/* sub_1000E341  @0x1000e341  size=13 */
__vcrt_bool sub_1000E341()
{
  __acrt_uninitialize_critical(0);
  return __vcrt_uninitialize_critical();
}


/* sub_1000E529  @0x1000e529  size=14 */
void __cdecl sub_1000E529(void *Block)
{
  j__free(Block);
}


/* sub_1000E537  @0x1000e537  size=35 */
_DWORD *__thiscall sub_1000E537(_DWORD *Block, char a2)
{
  *Block = &type_info::`vftable';
  if ( (a2 & 1) != 0 )
    sub_1000E529(Block);
  return Block;
}


/* EXPORT DllEntryPoint  @0x1000e875  size=35  [lib] */
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  if ( fdwReason == 1 )
    __security_init_cookie();
  return dllmain_dispatch(hinstDLL, fdwReason, lpReserved);
}


/* sub_1000EB0F  @0x1000eb0f  size=8 */
void sub_1000EB0F()
{
  dword_1003040C = 0;
}


/* sub_1000EB17  @0x1000eb17  size=27 */
std::exception *__thiscall sub_1000EB17(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_array_new_length::`vftable';
  return this;
}


/* sub_1000EB32  @0x1000eb32  size=24 */
_DWORD *__thiscall sub_1000EB32(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad array new length";
  *this = &std::bad_array_new_length::`vftable';
  return this;
}


/* sub_1000EB4A  @0x1000eb4a  size=28 */
void __noreturn sub_1000EB4A()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000D259(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_alloc_std__);
}


/* sub_1000EB67  @0x1000eb67  size=28 */
void __noreturn sub_1000EB67()
{
  _DWORD pExceptionObject[3]; // [esp+0h] [ebp-Ch] BYREF

  sub_1000EB32(pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVbad_array_new_length_std__);
}


/* sub_1000ED82  @0x1000ed82  size=4 */
int sub_1000ED82()
{
  return 1;
}


/* _DllMain@12  @0x1000ee2a  size=6 */
BOOL __stdcall DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
  return 1;
}


/* sub_1000EE30  @0x1000ee30  size=12 */
void sub_1000EE30()
{
  InitializeSListHead(&ListHead);
}


/* sub_1000EE3C  @0x1000ee3c  size=12 */
int sub_1000EE3C()
{
  return __std_type_info_destroy_list(&ListHead);
}


/* sub_1000EE48  @0x1000ee48  size=6 */
void *sub_1000EE48()
{
  return &unk_10030428;
}


/* sub_1000EE6B  @0x1000ee6b  size=6 */
void *sub_1000EE6B()
{
  return &unk_10033214;
}


/* sub_1000EE71  @0x1000ee71  size=44 */
void sub_1000EE71()
{
  ;
}


/* sub_1000EE9D  @0x1000ee9d  size=44 */
void sub_1000EE9D()
{
  ;
}


/* sub_1000EF2A  @0x1000ef2a  size=34 */
void __thiscall sub_1000EF2A(char *this)
{
  int v2; // ecx

  v2 = *(_DWORD *)this;
  if ( v2 )
  {
    **(_DWORD **)(v2 + 256) = 0;
    sub_1000EF5A(1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
}


/* sub_1000EF4C  @0x1000ef4c  size=14 */
BOOL __cdecl sub_1000EF4C(DWORD dwTlsIndex)
{
  return TlsFree(dwTlsIndex);
}


/* sub_1000EF5A  @0x1000ef5a  size=52 */
int __thiscall sub_1000EF5A(int this, char a2)
{
  int result; // eax

  if ( a2 )
    result = _InterlockedIncrement((volatile signed __int32 *)(this + 1288));
  else
    result = *(_DWORD *)(this + 1280) - *(_DWORD *)(this + 1284);
  if ( result == 1 )
    return SetEvent(*(HANDLE *)this);
  return result;
}


/* sub_1000EF8E  @0x1000ef8e  size=14 */
int *sub_1000EF8E()
{
  int *result; // eax

  if ( dword_10030454 )
  {
    result = (int *)_InterlockedDecrement(dword_1002F044);
    if ( result == (int *)0x80000000 )
    {
      sub_1000F00E();
      _InterlockedAnd(dword_1002F044, 0x7FFFFFFFu);
      return dword_1002F044;
    }
  }
  return result;
}


/* sub_1000EF9C  @0x1000ef9c  size=76 */
uintptr_t sub_1000EF9C()
{
  uintptr_t v0; // esi
  HANDLE CurrentThread; // eax
  struct _FILETIME CreationTime; // [esp+4h] [ebp-10h] BYREF
  struct _FILETIME ExitTime; // [esp+Ch] [ebp-8h] BYREF

  dword_100304B8 = 1;
  v0 = __security_cookie ^ (unsigned int)EncodePointer(&dword_100304BC);
  CurrentThread = GetCurrentThread();
  if ( GetThreadTimes(CurrentThread, &CreationTime, &ExitTime, &ExitTime, &ExitTime) )
    v0 ^= CreationTime.dwLowDateTime ^ CreationTime.dwHighDateTime;
  return v0;
}


/* sub_1000F00E  @0x1000f00e  size=25 */
BOOL sub_1000F00E()
{
  BOOL result; // eax

  sub_1000F027();
  result = sub_1000EF4C(dword_100304A0);
  dword_100304A0 = 0;
  return result;
}


/* sub_1000F027  @0x1000f027  size=20 */
BOOL sub_1000F027()
{
  BOOL result; // eax

  result = TlsFree(dwTlsIndex);
  dwTlsIndex = 0;
  return result;
}


/* sub_10010EB3  @0x10010eb3  size=27 */
std::exception *__thiscall sub_10010EB3(std::exception *this, struct std::exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &std::bad_exception::`vftable';
  return this;
}


/* sub_10010ECE  @0x10010ece  size=24 */
_DWORD *__thiscall sub_10010ECE(_DWORD *this)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 1) = "bad exception";
  *this = &std::bad_exception::`vftable';
  return this;
}


/* sub_10011BD4  @0x10011bd4  size=15 */
int __cdecl sub_10011BD4(int a1)
{
  dword_10030604 = a1;
  return a1;
}


/* sub_10011C08  @0x10011c08  size=7 */
int sub_10011C08()
{
  return dword_10030600;
}


/* sub_10011CB8  @0x10011cb8  size=137 */
double __cdecl sub_10011CB8(int a1, _DWORD *a2, struct __crt_locale_pointers *a3)
{
  double result; // st7
  int v4; // ecx
  int v5; // eax
  int v6; // [esp-Ch] [ebp-30h] BYREF
  int v7; // [esp-8h] [ebp-2Ch]
  int *v8; // [esp-4h] [ebp-28h]
  int v9; // [esp+8h] [ebp-1Ch] BYREF
  __crt_locale_pointers Locale; // [esp+Ch] [ebp-18h] BYREF
  char v11; // [esp+14h] [ebp-10h]
  int v12[2]; // [esp+18h] [ebp-Ch] BYREF

  if ( a2 )
    *a2 = a1;
  if ( a1 )
  {
    _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v9, a3);
    v8 = v12;
    v7 = v4;
    v6 = v4;
    *(double *)v12 = 0.0;
    unknown_libname_10(&v6, a1, a2);
    v5 = __crt_strtox::parse_floating_point<__crt_strtox::c_string_character_source<char>,_LDBL12>(
           &Locale,
           v6,
           v7,
           (int)v8);
    if ( v5 == 3 || v5 == 2 )
      *_errno() = 34;
    result = *(double *)v12;
    if ( v11 )
      *(_DWORD *)(v9 + 848) &= ~2u;
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0.0;
  }
  return result;
}


/* sub_100121FB  @0x100121fb  size=161 */
int __cdecl sub_100121FB(char *a1, char **a2, char *a3)
{
  int v3; // edx
  char v4; // cl
  char v5; // al
  char *v6; // ebx
  int v7; // edx
  char v8; // cl
  char v9; // al

  v3 = 0;
  v4 = *a1;
  v5 = *a1;
  do
  {
    if ( v4 != byte_10026AD4[v3] && v4 != byte_10026AD8[v3] )
    {
      __crt_strtox::c_string_character_source<char>::unget(v5);
      *a1 = 0;
      *a2 = a3;
      return 7;
    }
    v4 = **a2;
    ++v3;
    ++*a2;
    *a1 = v4;
    v5 = v4;
  }
  while ( v3 != 3 );
  __crt_strtox::c_string_character_source<char>::unget(v4);
  v6 = *a2;
  v7 = 0;
  v8 = *(*a2)++;
  v9 = v8;
  *a1 = v8;
  while ( v8 == byte_10026ADC[v7] || v8 == byte_10026AE4[v7] )
  {
    v8 = **a2;
    ++v7;
    ++*a2;
    *a1 = v8;
    v9 = v8;
    if ( v7 == 5 )
    {
      __crt_strtox::c_string_character_source<char>::unget(v8);
      return 3;
    }
  }
  __crt_strtox::c_string_character_source<char>::unget(v9);
  *a1 = 0;
  *a2 = v6;
  return 3;
}


/* sub_1001267A  @0x1001267a  size=841 */
int __cdecl sub_1001267A(
        unsigned __int64 a1,
        int a2,
        __crt_strtox *a3,
        char a4,
        __crt_strtox::floating_point_value *a5)
{
  unsigned __int8 v5; // bl
  unsigned __int64 v6; // rdi
  bool v7; // zf
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // kr08_8
  char v17; // al
  int v18; // eax
  int v19; // ebx
  char v20; // cl
  unsigned int v21; // edx
  char v22; // al
  int v23; // eax
  unsigned __int64 v25; // rdi
  double *v26; // eax
  float *v27; // eax
  const struct __crt_strtox::floating_point_value *v29; // [esp+0h] [ebp-30h]
  __int64 v30; // [esp+Ch] [ebp-24h]
  __int64 v31; // [esp+14h] [ebp-1Ch]
  int v32; // [esp+1Ch] [ebp-14h]
  int v33; // [esp+1Ch] [ebp-14h]
  char v34; // [esp+20h] [ebp-10h]
  int v35; // [esp+24h] [ebp-Ch]
  char v36; // [esp+24h] [ebp-Ch]
  int v37; // [esp+28h] [ebp-8h]
  bool v38; // [esp+2Dh] [ebp-3h]
  char v39; // [esp+2Dh] [ebp-3h]
  char v40; // [esp+2Eh] [ebp-2h]
  char v41; // [esp+2Fh] [ebp-1h]

  v5 = 0;
  v6 = a1;
  if ( HIDWORD(a1) )
  {
    v7 = !_BitScanReverse((unsigned int *)&v10, HIDWORD(a1));
    if ( v7 )
      v11 = 0;
    else
      v11 = v10 + 1;
    v9 = v11 + 32;
  }
  else
  {
    v7 = !_BitScanReverse((unsigned int *)&v8, a1);
    if ( v7 )
      v9 = 0;
    else
      v9 = v8 + 1;
  }
  v41 = *((_BYTE *)a5 + 4);
  v12 = (v41 == 0 ? 24 : 53) - v9;
  v35 = v12;
  v37 = a2 - v12;
  v32 = v41 == 0 ? 127 : 1023;
  if ( a2 - v12 > v32 )
    goto LABEL_52;
  if ( a2 - v12 < (v41 == 0 ? -126 : -1022) )
  {
    v13 = v32 + a2 - 1;
    v14 = -v32;
    v33 = v13;
    v37 = v14;
    if ( v13 < 0 )
    {
      v15 = -v13;
      v34 = v15;
      if ( v15 < 0x40 )
      {
        v16 = (1LL << ((unsigned __int8)v15 - 1)) - 1;
        v38 = (a1 & (1LL << v15)) != 0;
        LODWORD(v31) = (unsigned __int64)(1LL << ((unsigned __int8)v15 - 1)) >> 32;
        HIDWORD(v31) = 1LL << ((unsigned __int8)v15 - 1);
        if ( !a4 || (v17 = 0, (a1 & v16) != 0) )
          v17 = 1;
        v40 = v17;
        if ( (v31 & __PAIR64__(a1, HIDWORD(a1))) != 0 || v17 )
        {
          v18 = fegetround();
          if ( v18 )
          {
            if ( v18 == 256 )
            {
              v5 = (unsigned __int8)a3;
            }
            else if ( v18 == 512 )
            {
              v5 = (unsigned __int8)a3 ^ 1;
            }
          }
          else if ( (v31 & __PAIR64__(a1, HIDWORD(a1))) != 0 && (v40 || v38) )
          {
            v5 = 1;
          }
        }
        v6 = (a1 >> v34) + v5;
        if ( v6 )
        {
          if ( v6 > __crt_strtox::floating_point_value::denormal_mantissa_mask(a5) )
          {
            v19 = a2 - v33 - v35 - 1;
            goto LABEL_58;
          }
          goto LABEL_57;
        }
      }
      __crt_strtox::assemble_floating_point_zero(a3, a5, v29);
      return 2;
    }
    v20 = v13;
    goto LABEL_56;
  }
  if ( v12 < 0 )
  {
    v21 = v9 - (*((_BYTE *)a5 + 4) == 0 ? 24 : 53);
    v36 = v9 - (*((_BYTE *)a5 + 4) == 0 ? 24 : 53);
    if ( v21 < 0x40 )
    {
      v30 = 1LL << ((unsigned __int8)v21 - 1);
      if ( !a4 || (v22 = 0, (a1 & (v30 - 1)) != 0) )
        v22 = 1;
      v39 = v22;
      if ( (v30 & a1) != 0 || v22 )
      {
        v23 = fegetround();
        if ( v23 )
        {
          if ( v23 == 256 )
          {
            v5 = (unsigned __int8)a3;
          }
          else if ( v23 == 512 )
          {
            v5 = (unsigned __int8)a3 ^ 1;
          }
        }
        else if ( (v30 & a1) != 0 && (v39 || (a1 & (1LL << v36)) != 0) )
        {
          v5 = 1;
        }
      }
      v6 = v5 + (a1 >> v36);
    }
    else
    {
      v6 = 0;
    }
    if ( v6 <= __crt_strtox::floating_point_value::normal_mantissa_mask(a5) )
      goto LABEL_57;
    v6 >>= 1;
    v19 = v37 + 1;
    if ( v37 + 1 <= (*((_BYTE *)a5 + 4) == 0 ? 127 : 1023) )
      goto LABEL_58;
LABEL_52:
    __crt_strtox::assemble_floating_point_infinity(a3, a5, v29);
    return 3;
  }
  if ( v12 > 0 )
  {
    v20 = v12;
LABEL_56:
    v6 = a1 << v20;
  }
LABEL_57:
  v19 = v37;
LABEL_58:
  v25 = __crt_strtox::floating_point_value::denormal_mantissa_mask(a5) & v6;
  if ( *((_BYTE *)a5 + 4) )
  {
    v26 = __crt_strtox::floating_point_value::as_double(a5);
    return __crt_strtox::assemble_floating_point_value_t<double>((char)a3, v19, v25, HIDWORD(v25), v26);
  }
  else
  {
    v27 = __crt_strtox::floating_point_value::as_float(a5);
    return __crt_strtox::assemble_floating_point_value_t<float>((char)a3, v19, v25, HIDWORD(v25), v27);
  }
}


/* sub_10014F7A  @0x10014f7a  size=23 */
void __cdecl sub_10014F7A(int a1, _DWORD *a2)
{
  sub_10011CB8(a1, a2, nullptr);
}


/* sub_10014F91  @0x10014f91  size=382 */
int __cdecl sub_10014F91(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _BYTE *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+4h] [ebp-484h] BYREF
  _BYTE v12[12]; // [esp+8h] [ebp-480h] BYREF
  int v13; // [esp+14h] [ebp-474h]
  _DWORD v14[2]; // [esp+18h] [ebp-470h] BYREF
  int v15; // [esp+20h] [ebp-468h]
  int v16; // [esp+24h] [ebp-464h]
  _DWORD *v17; // [esp+28h] [ebp-460h] BYREF
  _BYTE v18[64]; // [esp+2Ch] [ebp-45Ch] BYREF
  _BYTE v19[1040]; // [esp+6Ch] [ebp-41Ch] BYREF
  int v20; // [esp+47Ch] [ebp-Ch]

  v17 = a3;
  if ( !a5 || a4 && !a3 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, a6);
  v16 = 0;
  v8 = v17;
  v13 = a1 & 2;
  v14[0] = v17;
  v14[1] = a4;
  v15 = 0;
  if ( (a1 & 2) != 0 || (LOBYTE(v16) = 0, !v17) )
    LOBYTE(v16) = 1;
  v17 = v14;
  unknown_libname_15(&v17, a1, a2, a5, v12, a7);
  v20 = 0;
  v9 = sub_10015782(v18);
  if ( !v8 )
    goto LABEL_22;
  if ( (a1 & 1) == 0 )
  {
    if ( v13 )
    {
      if ( !a4 )
        goto LABEL_22;
      if ( v9 < 0 )
      {
        *v8 = 0;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
      {
LABEL_21:
        v8[v10] = 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !a4 )
      {
LABEL_26:
        v9 = -1;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
        goto LABEL_21;
      v9 = -2;
    }
    v8[a4 - 1] = 0;
    goto LABEL_22;
  }
  if ( !a4 && v9 )
    goto LABEL_26;
  v10 = v15;
  if ( v15 != a4 )
    goto LABEL_21;
  if ( v9 >= 0 && v9 > a4 )
    goto LABEL_26;
LABEL_22:
  __crt_stdio_output::formatting_buffer::~formatting_buffer((__crt_stdio_output::formatting_buffer *)v19);
  if ( v12[8] )
    *(_DWORD *)(v11 + 848) &= ~2u;
  return v9;
}


/* sub_1001510F  @0x1001510f  size=382 */
int __cdecl sub_1001510F(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  _BYTE *v8; // edi
  int v9; // esi
  int v10; // eax
  int v11; // [esp+4h] [ebp-484h] BYREF
  _BYTE v12[12]; // [esp+8h] [ebp-480h] BYREF
  int v13; // [esp+14h] [ebp-474h]
  _DWORD v14[2]; // [esp+18h] [ebp-470h] BYREF
  int v15; // [esp+20h] [ebp-468h]
  int v16; // [esp+24h] [ebp-464h]
  _DWORD *v17; // [esp+28h] [ebp-460h] BYREF
  _BYTE v18[64]; // [esp+2Ch] [ebp-45Ch] BYREF
  _BYTE v19[1040]; // [esp+6Ch] [ebp-41Ch] BYREF
  int v20; // [esp+47Ch] [ebp-Ch]

  v17 = a3;
  if ( !a5 || a4 && !a3 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)&v11, a6);
  v16 = 0;
  v8 = v17;
  v13 = a1 & 2;
  v14[0] = v17;
  v14[1] = a4;
  v15 = 0;
  if ( (a1 & 2) != 0 || (LOBYTE(v16) = 0, !v17) )
    LOBYTE(v16) = 1;
  v17 = v14;
  unknown_libname_15(&v17, a1, a2, a5, v12, a7);
  v20 = 0;
  v9 = sub_100158A6(v18);
  if ( !v8 )
    goto LABEL_22;
  if ( (a1 & 1) == 0 )
  {
    if ( v13 )
    {
      if ( !a4 )
        goto LABEL_22;
      if ( v9 < 0 )
      {
        *v8 = 0;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
      {
LABEL_21:
        v8[v10] = 0;
        goto LABEL_22;
      }
    }
    else
    {
      if ( !a4 )
      {
LABEL_26:
        v9 = -1;
        goto LABEL_22;
      }
      v10 = v15;
      if ( v15 != a4 )
        goto LABEL_21;
      v9 = -2;
    }
    v8[a4 - 1] = 0;
    goto LABEL_22;
  }
  if ( !a4 && v9 )
    goto LABEL_26;
  v10 = v15;
  if ( v15 != a4 )
    goto LABEL_21;
  if ( v9 >= 0 && v9 > a4 )
    goto LABEL_26;
LABEL_22:
  __crt_stdio_output::formatting_buffer::~formatting_buffer((__crt_stdio_output::formatting_buffer *)v19);
  if ( v12[8] )
    *(_DWORD *)(v11 + 848) &= ~2u;
  return v9;
}


/* sub_100158A6  @0x100158a6  size=244 */
int __thiscall sub_100158A6(int this)
{
  int v3; // eax
  char v4; // al
  char v5; // al

  if ( !(unsigned __int8)unknown_libname_12(this + 1096) )
    return -1;
  if ( !*(_DWORD *)(this + 16) )
  {
LABEL_3:
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return -1;
  }
LABEL_20:
  while ( ++*(_DWORD *)(this + 1104) != 2 )
  {
    *(_DWORD *)(this + 56) = 0;
    *(_DWORD *)(this + 28) = 0;
    while ( 1 )
    {
      v5 = **(_BYTE **)(this + 16);
      *(_BYTE *)(this + 49) = v5;
      if ( !v5 )
        break;
      ++*(_DWORD *)(this + 16);
      if ( *(int *)(this + 24) < 0 )
        goto LABEL_20;
      v3 = sub_10015675(*(_BYTE *)(this + 49), *(_DWORD *)(this + 28));
      *(_DWORD *)(this + 28) = v3;
      if ( v3 == 8 )
        goto LABEL_3;
      switch ( v3 )
      {
        case 0:
          v4 = sub_100159F7(this);
          break;
        case 1:
          *(_DWORD *)(this + 40) = -1;
          *(_DWORD *)(this + 36) = 0;
          *(_BYTE *)(this + 48) = 0;
          *(_DWORD *)(this + 32) = 0;
          *(_DWORD *)(this + 44) = 0;
          *(_BYTE *)(this + 60) = 0;
          continue;
        case 2:
          v4 = unknown_libname_19(this);
          break;
        case 3:
          v4 = sub_10015E4A(this);
          break;
        case 4:
          *(_DWORD *)(this + 40) = 0;
          continue;
        case 5:
          v4 = sub_10015AA4(this);
          break;
        case 6:
          v4 = sub_10015ACA(this);
          break;
        case 7:
          v4 = sub_10015C18(this);
          break;
        default:
          return -1;
      }
      if ( !v4 )
        return -1;
    }
    ++*(_DWORD *)(this + 16);
  }
  return *(_DWORD *)(this + 24);
}


/* sub_100159F7  @0x100159f7  size=31 */
char sub_100159F7()
{
  if ( (unsigned __int8)sub_10015A16() )
    return 1;
  *_errno() = 22;
  _invalid_parameter_noinfo();
  return 0;
}


/* sub_10015A16  @0x10015a16  size=42 */
char __thiscall sub_10015A16(char *this)
{
  char result; // al

  result = unknown_libname_20(0);
  if ( result )
  {
    __crt_stdio_output::string_output_adapter<char>::write_character(*(this + 49), this + 24);
    return 1;
  }
  return result;
}


/* sub_10015ACA  @0x10015aca  size=334 */
char __thiscall sub_10015ACA(_BYTE *this)
{
  char v1; // al
  _BYTE *v3; // eax
  int v4; // eax
  char *v5; // edx
  char v6; // al
  _BYTE *v7; // eax
  int v8; // [esp-4h] [ebp-4h]

  v1 = *(this + 49);
  if ( v1 == 70 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_DWORD *)this + 7) = 7;
      return sub_10015C18(this);
    }
    return 1;
  }
  if ( v1 == 78 )
  {
    if ( (*(_DWORD *)this & 8) == 0 )
    {
      *((_DWORD *)this + 7) = 8;
LABEL_7:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return 0;
    }
    return 1;
  }
  if ( *((_DWORD *)this + 11) )
    goto LABEL_7;
  if ( v1 > 106 )
  {
    if ( v1 != 108 )
    {
      switch ( v1 )
      {
        case 't':
          *((_DWORD *)this + 11) = 7;
          break;
        case 'w':
          *((_DWORD *)this + 11) = 12;
          break;
        case 'z':
          *((_DWORD *)this + 11) = 6;
          break;
      }
      return 1;
    }
    v7 = *((_BYTE **)this + 4);
    if ( *v7 == 108 )
    {
      *((_DWORD *)this + 4) = v7 + 1;
      v8 = 4;
    }
    else
    {
      v8 = 3;
    }
    goto LABEL_44;
  }
  switch ( v1 )
  {
    case 'j':
      *((_DWORD *)this + 11) = 5;
      return 1;
    case 'I':
      v5 = *((char **)this + 4);
      v6 = *v5;
      if ( *v5 == 51 && v5[1] == 50 )
      {
        *((_DWORD *)this + 11) = 10;
        *((_DWORD *)this + 4) = v5 + 2;
      }
      else if ( v6 == 54 && v5[1] == 52 )
      {
        *((_DWORD *)this + 11) = 11;
        *((_DWORD *)this + 4) = v5 + 2;
      }
      else if ( v6 == 100 || v6 == 105 || v6 == 111 || v6 == 117 || v6 == 120 || v6 == 88 )
      {
        *((_DWORD *)this + 11) = 9;
      }
      return 1;
    case 'L':
      *((_DWORD *)this + 11) = 8;
      return 1;
    case 'T':
      *((_DWORD *)this + 11) = 13;
      return 1;
    case 'h':
      v3 = *((_BYTE **)this + 4);
      if ( *v3 == 104 )
      {
        *((_DWORD *)this + 4) = v3 + 1;
        v4 = 1;
LABEL_45:
        *((_DWORD *)this + 11) = v4;
        return 1;
      }
      v8 = 2;
LABEL_44:
      v4 = v8;
      goto LABEL_45;
  }
  return 1;
}


/* sub_10015C18  @0x10015c18  size=562 */
char __thiscall sub_10015C18(int this)
{
  int v2; // eax
  char v3; // al
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  char v11; // dl
  bool v12; // bl
  bool v13; // al
  char v14; // al
  int v15; // edi
  int v16; // [esp-4h] [ebp-14h]
  int v17; // [esp+8h] [ebp-8h]
  __int16 Src; // [esp+Ch] [ebp-4h] BYREF
  char v19; // [esp+Eh] [ebp-2h]

  v2 = *(char *)(this + 49);
  if ( v2 <= 100 )
  {
    if ( v2 != 100 )
    {
      if ( v2 > 88 )
      {
        v5 = v2 - 90;
        if ( !v5 )
        {
          v3 = unknown_libname_21(this);
          goto LABEL_11;
        }
        v6 = v5 - 7;
        if ( !v6 )
          goto LABEL_31;
        if ( v6 != 2 )
          return 0;
        goto LABEL_18;
      }
      if ( v2 != 88 )
      {
        if ( v2 != 65 )
        {
          if ( v2 != 67 )
          {
            if ( v2 <= 68 )
              return 0;
            if ( v2 > 71 )
            {
              if ( v2 == 83 )
              {
LABEL_10:
                v3 = unknown_libname_24(this);
                goto LABEL_11;
              }
              return 0;
            }
            goto LABEL_31;
          }
LABEL_18:
          v3 = sub_10016072(0);
          goto LABEL_11;
        }
LABEL_31:
        v3 = unknown_libname_22(this);
        goto LABEL_11;
      }
      v16 = 1;
LABEL_14:
      v3 = sub_10016102(16, v16);
      goto LABEL_11;
    }
    goto LABEL_28;
  }
  if ( v2 > 112 )
  {
    v7 = v2 - 115;
    if ( !v7 )
      goto LABEL_10;
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 != 3 )
        return 0;
      v16 = 0;
      goto LABEL_14;
    }
    goto LABEL_29;
  }
  if ( v2 == 112 )
  {
    v3 = sub_100162E6(this);
    goto LABEL_11;
  }
  if ( v2 <= 103 )
    goto LABEL_31;
  switch ( v2 )
  {
    case 'i':
LABEL_28:
      *(_DWORD *)(this + 32) |= 0x10u;
LABEL_29:
      v3 = sub_10016102(10, 0);
      break;
    case 'n':
      v3 = unknown_libname_23(this);
      break;
    case 'o':
      v3 = sub_100162C7(this);
      break;
    default:
      return 0;
  }
LABEL_11:
  if ( !v3 )
    return 0;
  if ( !*(_BYTE *)(this + 48) )
  {
    v9 = 0;
    Src = 0;
    v19 = 0;
    v10 = *(_DWORD *)(this + 32);
    v17 = 0;
    if ( (v10 & 0x10) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
      {
        LOBYTE(Src) = 45;
      }
      else
      {
        if ( (v10 & 1) == 0 )
        {
          if ( (v10 & 2) != 0 )
          {
            LOBYTE(Src) = 32;
            v9 = 1;
            v17 = 1;
          }
          goto LABEL_46;
        }
        LOBYTE(Src) = 43;
      }
      v9 = 1;
      v17 = 1;
    }
LABEL_46:
    v11 = *(_BYTE *)(this + 49);
    v12 = (v11 == 120 || v11 == 88) && (v10 & 0x20) != 0;
    v13 = v11 == 97 || v11 == 65;
    if ( v12 || v13 )
    {
      *((_BYTE *)&Src + v9) = 48;
      if ( v11 == 88 || v11 == 65 )
        v14 = 88;
      else
        v14 = 120;
      *((_BYTE *)&Src + v9 + 1) = v14;
      v9 += 2;
      v17 = v9;
    }
    v15 = *(_DWORD *)(this + 36) - *(_DWORD *)(this + 56) - v9;
    if ( (*(_BYTE *)(this + 32) & 0xC) == 0 )
    {
      sub_100154EA(this + 1096, 32, v15, this + 24);
      v9 = v17;
    }
    sub_1001647A(&Src, v9, this + 24, this + 12);
    if ( (*(_DWORD *)(this + 32) & 8) != 0 && (*(_DWORD *)(this + 32) & 4) == 0 )
      sub_100154EA(this + 1096, 48, v15, this + 24);
    unknown_libname_26(0);
    if ( *(int *)(this + 24) >= 0 && (*(_DWORD *)(this + 32) & 4) != 0 )
      sub_100154EA(this + 1096, 32, v15, this + 24);
  }
  return 1;
}


/* sub_10015E4A  @0x10015e4a  size=43 */
char __thiscall sub_10015E4A(int this)
{
  int *v1; // edx
  int v3; // eax

  v1 = (int *)(this + 36);
  if ( *(_BYTE *)(this + 49) != 42 )
    return unknown_libname_18(this + 36);
  *(_DWORD *)(this + 20) += 4;
  v3 = *(_DWORD *)(*(_DWORD *)(this + 20) - 4);
  *v1 = v3;
  if ( v3 < 0 )
  {
    *(_DWORD *)(this + 32) |= 4u;
    *v1 = -v3;
  }
  return 1;
}


/* sub_10016102  @0x10016102  size=337 */
char __thiscall sub_10016102(int this, int a2, char a3)
{
  int v4; // eax
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int v9; // eax
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // [esp-4h] [ebp-14h]
  int v19; // [esp+Ch] [ebp-4h]

  v4 = __crt_stdio_output::to_integer_size(*(_DWORD *)(this + 44));
  v19 = v4;
  switch ( v4 )
  {
    case 1:
      v15 = *(_DWORD *)(this + 32);
      *(_DWORD *)(this + 20) += 4;
      v10 = (v15 & 0x10) == 0;
      v16 = *(_DWORD *)(this + 20);
      if ( v10 )
        v12 = *(unsigned __int8 *)(v16 - 4);
      else
        v12 = *(char *)(v16 - 4);
      goto LABEL_16;
    case 2:
      v13 = *(_DWORD *)(this + 32);
      *(_DWORD *)(this + 20) += 4;
      v10 = (v13 & 0x10) == 0;
      v14 = *(_DWORD *)(this + 20);
      if ( v10 )
        v12 = *(unsigned __int16 *)(v14 - 4);
      else
        v12 = *(__int16 *)(v14 - 4);
LABEL_16:
      v8 = v12 >> 31;
      v7 = v12;
      goto LABEL_17;
    case 4:
      v9 = *(_DWORD *)(this + 32);
      *(_DWORD *)(this + 20) += 4;
      v10 = (v9 & 0x10) == 0;
      v11 = *(_DWORD *)(this + 20);
      if ( v10 )
      {
        v7 = *(_DWORD *)(v11 - 4);
        v8 = 0;
        goto LABEL_17;
      }
      v12 = *(_DWORD *)(v11 - 4);
      goto LABEL_16;
  }
  if ( v4 != 8 )
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
    return 0;
  }
  *(_DWORD *)(this + 20) += 8;
  v6 = *(_DWORD *)(this + 20);
  v7 = *(_DWORD *)(v6 - 8);
  v8 = *(_DWORD *)(v6 - 4);
LABEL_17:
  v17 = *(_DWORD *)(this + 32);
  if ( (v17 & 0x10) != 0 && v8 < 0 )
  {
    v7 = -v7;
    v8 = (unsigned __int64)-__SPAIR64__(v8, v7) >> 32;
    v17 |= 0x40u;
    *(_DWORD *)(this + 32) = v17;
  }
  if ( *(int *)(this + 40) >= 0 )
  {
    v18 = *(_DWORD *)(this + 40);
    *(_DWORD *)(this + 32) = v17 & 0xFFFFFFF7;
    __crt_stdio_output::formatting_buffer::ensure_buffer_is_big_enough<char>(v18);
  }
  else
  {
    *(_DWORD *)(this + 40) = 1;
  }
  if ( !(v8 | v7) )
    *(_DWORD *)(this + 32) &= ~0x20u;
  *(_BYTE *)(this + 60) = 0;
  if ( v19 == 8 )
    unknown_libname_14(v7, v8, a2, a3);
  else
    unknown_libname_13(v7, a2, a3);
  if ( (*(_DWORD *)(this + 32) & 0x80) != 0 && (!*(_DWORD *)(this + 56) || **(_BYTE **)(this + 52) != 48) )
  {
    *(_BYTE *)--*(_DWORD *)(this + 52) = 48;
    ++*(_DWORD *)(this + 56);
  }
  return 1;
}


/* sub_100162C7  @0x100162c7  size=31 */
char __thiscall sub_100162C7(_DWORD *this)
{
  if ( (*(this + 8) & 0x20) != 0 )
    *(this + 8) |= 0x80u;
  return sub_10016102((int)this, 8, 0);
}


/* sub_100162E6  @0x100162e6  size=24 */
char __thiscall sub_100162E6(_DWORD *this)
{
  *(this + 10) = 8;
  *(this + 11) = 10;
  return sub_10016102((int)this, 16, 1);
}


/* sub_100164E1  @0x100164e1  size=36 */
int __cdecl sub_100164E1(int a1, int a2, _DWORD *a3, unsigned int a4, int a5, struct __crt_locale_pointers *a6, int a7)
{
  return sub_1001510F(a1, a2, a3, a4, a5, a6, a7);
}


/* sub_1001667D  @0x1001667d  size=15 */
int __cdecl sub_1001667D(int a1)
{
  dword_1003060C = a1;
  return a1;
}


/* sub_10016D84  @0x10016d84  size=15 */
int __cdecl sub_10016D84(int a1)
{
  dword_1003076C = a1;
  return a1;
}


/* sub_10017421  @0x10017421  size=27 */
void *__cdecl sub_10017421(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10030884 )
    return (void *)unknown_libname_28(*a1);
  return result;
}


/* sub_1001743C  @0x1001743c  size=27 */
void *__cdecl sub_1001743C(void **a1)
{
  void *result; // eax

  result = *a1;
  if ( *a1 != dword_10030880 )
    return (void *)unknown_libname_28(*a1);
  return result;
}


/* j_??$common_initialize_environment_nolock@D@@YAHXZ  @0x1001748e  size=5 */
// attributes: thunk
int common_initialize_environment_nolock<char>()
{
  return ??$common_initialize_environment_nolock@D@@YAHXZ();
}


/* sub_10017493  @0x10017493  size=91 */
int __stdcall sub_10017493(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = unknown_libname_31(a2);
  __acrt_unlock(*a3);
  return v4;
}


/* sub_100174EE  @0x100174ee  size=91 */
int __stdcall sub_100174EE(_DWORD *a1, int a2, _DWORD *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_22ebabd17bc4fa466a2aca6d8deb888d_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}


/* sub_1001776B  @0x1001776b  size=22 */
int __cdecl sub_1001776B(_onexit_t Function)
{
  return _register_onexit_function(&stru_10030888, Function);
}


/* sub_1001780A  @0x1001780a  size=3 */
char sub_1001780A()
{
  return 1;
}


/* sub_1001780D  @0x1001780d  size=13 */
char sub_1001780D()
{
  dword_100308A8 = (struct __crt_locale_data *)&off_1002F188;
  return 1;
}


/* sub_10017834  @0x10017834  size=8 */
char sub_10017834()
{
  __dcrt_uninitialize_environments_nolock();
  return 1;
}


/* sub_1001786A  @0x1001786a  size=9 */
__vcrt_bool sub_1001786A()
{
  return __vcrt_uninitialize(0);
}


/* sub_10017C6C  @0x10017c6c  size=9 */
int sub_10017C6C()
{
  return common_flush_all(1);
}


/* sub_10018812  @0x10018812  size=45 */
struct __crt_locale_data *__cdecl sub_10018812(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_100308A8 )
  {
    result = (struct __crt_locale_data *)dword_1002F770;
    if ( (dword_1002F770 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)sub_1001D4E8();
      *a2 = result;
    }
  }
  return result;
}


/* sub_1001883F  @0x1001883f  size=45 */
struct __crt_multibyte_data *__cdecl sub_1001883F(int a1, struct __crt_multibyte_data **a2)
{
  struct __crt_multibyte_data *result; // eax

  result = *a2;
  if ( *a2 != dword_10030BB8 )
  {
    result = (struct __crt_multibyte_data *)dword_1002F770;
    if ( (dword_1002F770 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_multibyte_data *)sub_1001B439();
      *a2 = result;
    }
  }
  return result;
}


/* sub_100188E7  @0x100188e7  size=11 */
__int32 sub_100188E7()
{
  return _InterlockedExchange(&dword_100308A4, 1);
}


/* sub_10018FD3  @0x10018fd3  size=793 */
int __cdecl sub_10018FD3(
        double *a1,
        char *Str,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        signed int Size,
        unsigned __int8 a7,
        unsigned int a8,
        struct __crt_locale_pointers *a9)
{
  int v9; // edi
  char *v10; // esi
  int v11; // edi
  __int64 v12; // rcx
  char *v13; // eax
  _BYTE *v14; // edx
  char *v15; // esi
  char v16; // al
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  unsigned __int64 v20; // rax
  unsigned int v21; // eax
  unsigned int v22; // ecx
  unsigned __int64 v23; // rax
  char *i; // eax
  char v25; // cl
  char v26; // cl
  int v27; // esi
  char *v28; // edx
  char *v29; // edi
  signed __int64 v31; // [esp-1Ch] [ebp-58h]
  signed __int64 v32; // [esp-1Ch] [ebp-58h]
  signed __int64 v33; // [esp-1Ch] [ebp-58h]
  _DWORD v34[3]; // [esp+4h] [ebp-38h] BYREF
  char v35; // [esp+10h] [ebp-2Ch]
  char *v36; // [esp+18h] [ebp-24h]
  int v37; // [esp+20h] [ebp-1Ch]
  int v38; // [esp+28h] [ebp-14h]
  int v39; // [esp+2Ch] [ebp-10h]
  _BYTE *v40; // [esp+30h] [ebp-Ch]
  int v41; // [esp+34h] [ebp-8h]
  char v42; // [esp+3Bh] [ebp-1h]

  v9 = Size;
  if ( Size < 0 )
    v9 = 0;
  v10 = Str;
  *Str = 0;
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)v34, a9);
  if ( a3 > v9 + 11 )
  {
    HIDWORD(v12) = a1;
    LODWORD(v12) = *((_DWORD *)a1 + 1);
    if ( (((unsigned int)v12 >> 20) & 0x7FF) == 0x7FF )
    {
      v11 = fp_format_e(a1, Str, a3, a4, a5, v9, 0, a8, nullptr);
      if ( v11 )
      {
        *Str = 0;
      }
      else
      {
        v13 = strrchr(Str, 101);
        if ( v13 )
        {
          *v13 = 32 * (a7 ^ 1) + 80;
          v13[3] = 0;
        }
        v11 = 0;
      }
    }
    else
    {
      if ( (int)v12 < 0 )
      {
        *Str = 45;
        v10 = Str + 1;
        LODWORD(v12) = *((_DWORD *)a1 + 1);
      }
      v14 = v10 + 1;
      v39 = 1023;
      v42 = a7 ^ 1;
      v36 = v10 + 1;
      v37 = 32 * (a7 ^ 1) + 7;
      if ( (v12 & 0x7FF00000) != 0 )
      {
        *v10 = 49;
      }
      else
      {
        *v10 = 48;
        if ( *((_DWORD *)a1 + 1) & 0xFFFFF | *(_DWORD *)a1 )
          v39 = 1022;
        else
          v39 = 0;
      }
      v15 = v10 + 2;
      v40 = v14 + 1;
      if ( v9 )
        v16 = ***(_BYTE ***)(v34[1] + 136);
      else
        v16 = 0;
      *v14 = v16;
      v38 = *((_DWORD *)a1 + 1) & 0xFFFFF;
      if ( v38 || *(_DWORD *)a1 )
      {
        v17 = 0;
        v18 = 983040;
        LOWORD(v19) = 48;
        v41 = 48;
        v40 = nullptr;
        v38 = 983040;
        do
        {
          if ( v9 <= 0 )
            break;
          LODWORD(v20) = v17 & *(_DWORD *)a1;
          HIDWORD(v20) = v18 & *((_DWORD *)a1 + 1) & 0xFFFFF;
          v21 = (unsigned __int16)((v20 >> v41) + 48);
          if ( v21 > 0x39 )
            LOBYTE(v21) = v37 + v21;
          v22 = v38;
          v17 = __PAIR64__(v38, (unsigned int)v40) >> 4;
          *v15++ = v21;
          v18 = v22 >> 4;
          v19 = v41 - 4;
          --v9;
          v40 = (_BYTE *)v17;
          v38 = v18;
          v41 = v19;
        }
        while ( (v19 & 0x8000u) == 0 );
        v40 = v15;
        if ( (v19 & 0x8000u) == 0 )
        {
          LODWORD(v23) = v17 & *(_DWORD *)a1;
          HIDWORD(v23) = v18 & *((_DWORD *)a1 + 1) & 0xFFFFF;
          if ( (unsigned __int16)(v23 >> v41) > 8u )
          {
            for ( i = v15 - 1; ; --i )
            {
              v25 = *i;
              if ( *i != 102 && v25 != 70 )
                break;
              *i = 48;
            }
            HIDWORD(v12) = a1;
            if ( i == v36 )
            {
              ++*(i - 1);
            }
            else
            {
              if ( v25 == 57 )
                v26 = v37 + 58;
              else
                v26 = v25 + 1;
              *i = v26;
            }
          }
        }
      }
      if ( v9 > 0 )
      {
        memset(v15, 48, v9);
        v15 += v9;
        v40 = v15;
      }
      if ( !*v36 )
      {
        v15 = v36;
        v40 = v36;
      }
      *v15 = 32 * v42 + 80;
      v27 = (((*(_QWORD *)HIDWORD(v12) >> 52) & 0x7FFLL) - (unsigned __int64)(unsigned int)v39) >> 32;
      LODWORD(v12) = ((*(_QWORD *)HIDWORD(v12) >> 52) & 0x7FF) - v39;
      v28 = v40 + 2;
      v36 = v40 + 2;
      if ( v27 < 0 )
      {
        LODWORD(v12) = -(int)v12;
        v27 = (unsigned __int64)-__SPAIR64__(v27, v12) >> 32;
        BYTE4(v12) = 45;
      }
      else
      {
        BYTE4(v12) = 43;
      }
      v40[1] = BYTE4(v12);
      v29 = v28;
      *v28 = 48;
      if ( v27 >= 0 && (v27 > 0 || (unsigned int)v12 >= 0x3E8) )
      {
        v31 = __PAIR64__(v27, v12);
        v12 = __SPAIR64__(v27, v12) % 1000;
        v27 = HIDWORD(v12);
        v37 = (unsigned __int64)(v31 / 1000) >> 32;
        v28 = v36;
        *v36 = v31 / 1000 + 48;
        v29 = v28 + 1;
      }
      if ( v29 != v28 || v27 >= 0 && (v27 > 0 || (unsigned int)v12 >= 0x64) )
      {
        v32 = __PAIR64__(v27, v12);
        v12 = __SPAIR64__(v27, v12) % 100;
        v27 = HIDWORD(v12);
        v37 = (unsigned __int64)(v32 / 100) >> 32;
        v28 = v36;
        *v29++ = v32 / 100 + 48;
      }
      if ( v29 != v28 || v27 >= 0 && (v27 > 0 || (unsigned int)v12 >= 0xA) )
      {
        v33 = __PAIR64__(v27, v12);
        v12 = __SPAIR64__(v27, v12) % 10;
        v36 = (char *)((unsigned __int64)(v33 / 10) >> 32);
        *v29++ = v33 / 10 + 48;
      }
      *v29 = v12 + 48;
      v29[1] = 0;
      v11 = 0;
    }
  }
  else
  {
    v11 = 34;
    *_errno() = 34;
    _invalid_parameter_noinfo();
  }
  if ( v35 )
    *(_DWORD *)(v34[0] + 848) &= ~2u;
  return v11;
}


/* sub_10019BA0  @0x10019ba0  size=26 */
int sub_10019BA0()
{
  return try_get_function(20, "LCMapStringEx", &unk_10027E74, &unk_10027E7C);
}


/* sub_10019BBA  @0x10019bba  size=26 */
int sub_10019BBA()
{
  return try_get_function(22, "LocaleNameToLCID", &unk_10027E7C, "LocaleNameToLCID");
}


/* sub_10019D1E  @0x10019d1e  size=64 */
int __stdcall sub_10019D1E(int a1)
{
  int (__thiscall *function)(_DWORD, int, int); // eax

  function = (int (__thiscall *)(_DWORD, int, int))try_get_function(
                                                     28,
                                                     "AppPolicyGetProcessTerminationMethod",
                                                     &unk_10027EA0,
                                                     "AppPolicyGetProcessTerminationMethod");
  if ( function )
    return function(function, -6, a1);
  else
    return -1073741275;
}


/* sub_10019F07  @0x10019f07  size=93 */
int __stdcall sub_10019F07(
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

  v9 = (int (__thiscall *)(_DWORD, wchar_t *, DWORD, LPCWSTR, int, LPWSTR, int, int, int, int))sub_10019BA0();
  if ( v9 )
    return v9(v9, a1, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest, a7, a8, a9);
  v11 = __acrt_LocaleNameToLCID(a1, 0);
  return LCMapStringW(v11, dwMapFlags, lpSrcStr, cchSrc, lpDestStr, cchDest);
}


/* sub_1001A218  @0x1001a218  size=507 */
int __cdecl sub_1001A218(int a1)
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


/* sub_1001A5C8  @0x1001a5c8  size=207 */
int __cdecl sub_1001A5C8(LPCWCH lpWideCharStr, struct __crt_win32_buffer_empty_debug_info *a2, int a3, UINT CodePage)
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
    unknown_libname_34(a2);
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
      if ( v6 <= *((_DWORD *)a2 + 3) || (result = sub_1001AC04(a2, v6)) == 0 )
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
    if ( *((_DWORD *)a2 + 3) || (result = sub_1001AC04(a2, 1u)) == 0 )
    {
      **((_BYTE **)a2 + 2) = 0;
      goto LABEL_3;
    }
  }
  return result;
}


/* sub_1001A697  @0x1001a697  size=29 */
int __cdecl sub_1001A697(LPCCH lpMultiByteStr, struct __crt_win32_buffer_empty_debug_info *a2, UINT CodePage)
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


/* sub_1001AC04  @0x1001ac04  size=60 */
int __thiscall sub_1001AC04(void **this, size_t Size)
{
  int result; // eax

  unknown_libname_34(this);
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


/* sub_1001AC40  @0x1001ac40  size=63 */
int __thiscall sub_1001AC40(void **this, int a2)
{
  int result; // eax

  unknown_libname_34(this);
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


/* sub_1001B439  @0x1001b439  size=19 */
struct __crt_multibyte_data *sub_1001B439()
{
  struct __acrt_ptd *v0; // eax

  v0 = (struct __acrt_ptd *)__acrt_getptd();
  return update_thread_multibyte_data_internal(v0, &dword_10030BB8);
}


/* sub_1001B8BC  @0x1001b8bc  size=10 */
char sub_1001B8BC()
{
  hHeap = nullptr;
  return 1;
}


/* sub_1001B977  @0x1001b977  size=15 */
int __cdecl sub_1001B977(int a1)
{
  dword_10030BE0 = a1;
  return a1;
}


/* sub_1001BAD7  @0x1001bad7  size=938 */
DWORD *__cdecl sub_1001BAD7(DWORD *a1, int a2, char *a3, int a4)
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
  v4 = dword_100308C0[a2 >> 6];
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
    v9 = dword_100308C0[v51];
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
        v22 = byte_1002F7D0[*(unsigned __int8 *)Src] + 1;
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
          *(_BYTE *)(v32 + dword_100308C0[v51] + 46) = v33;
          v10 = v52;
        }
        while ( v5 < v13 );
      }
      else
      {
        v56 = (const char *)(byte_1002F7D0[*(unsigned __int8 *)(v52 + Size + 46)] + 1);
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
              *(_BYTE *)(v20 + dword_100308C0[v51] + 46) = 0;
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
          *(_BYTE *)(v27 + dword_100308C0[v51] + 46) = v28;
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
      *(_BYTE *)(v52 + dword_100308C0[v51] + 46) = v61;
      *(_BYTE *)(v35 + dword_100308C0[v34] + 45) |= 4u;
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


/* sub_1001C250  @0x1001c250  size=242 */
int __cdecl sub_1001C250(int FileHandle, int a2, int a3)
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
    || FileHandle >= (unsigned int)dword_10030AC0
    || (v5 = 56 * (FileHandle & 0x3F), (*(_BYTE *)(dword_100308C0[FileHandle >> 6] + v5 + 40) & 1) == 0) )
  {
    *__doserrno() = 0;
    *_errno() = 9;
    _invalid_parameter_noinfo();
    return -1;
  }
  __acrt_lowio_lock_fh(FileHandle);
  v3 = -1;
  if ( (*(_BYTE *)(dword_100308C0[FileHandle >> 6] + v5 + 40) & 1) != 0 )
  {
    v3 = sub_1001C342(FileHandle, a2, a3);
  }
  else
  {
    *_errno() = 9;
    *__doserrno() = 0;
  }
  __acrt_lowio_unlock_fh(FileHandle);
  return v3;
}


/* sub_1001C342  @0x1001c342  size=482 */
int __cdecl sub_1001C342(int FileHandle, const void *a2, DWORD a3)
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
         v5 = dword_100308C0[FileHandle >> 6],
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
      v9 = sub_1001BAD7(&LastError, FileHandle, (char *)lpBuffer, nNumberOfBytesToWrite);
    }
    goto LABEL_14;
  }
  v11 = v26;
  v12 = v25;
  v13 = dword_100308C0[v26];
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
  if ( (*(_BYTE *)(dword_100308C0[v11] + v12 + 40) & 0x40) == 0 || *v8 != 26 )
  {
    *_errno() = 28;
    *__doserrno() = 0;
    return -1;
  }
  return 0;
}


/* sub_1001D4E8  @0x1001d4e8  size=129 */
int sub_1001D4E8()
{
  int v0; // eax
  int *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = (int *)(v0 + 76);
  if ( (dword_1002F770 & *(_DWORD *)(v0 + 848)) == 0 || (v2 = *v1) == 0 )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1, dword_100308A8);
    __acrt_unlock(4);
    if ( !v2 )
      abort();
  }
  return v2;
}


/* sub_1001D7FB  @0x1001d7fb  size=203 */
unsigned int __cdecl sub_1001D7FB(unsigned int a1)
{
  unsigned int v1; // esi
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // eax

  v1 = (a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14;
  v2 = 0;
  if ( (a1 & 0x3000) != 0 )
  {
    if ( (a1 & 0x3000) == 0x1000 )
      v3 = 512;
    else
      v3 = 0;
  }
  else
  {
    v3 = 768;
  }
  v4 = ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 0x300;
  if ( (v1 & 0x300) != 0 )
  {
    switch ( v4 )
    {
      case 0x100u:
        v2 = 1024;
        break;
      case 0x200u:
        v2 = 2048;
        break;
      case 0x300u:
        v2 = 3072;
        break;
    }
  }
  return v2
       | v3
       | (a1 >> 2) & 0x1000
       | (32 * (v1 & 1))
       | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 18) & 1
       | (2 * ((v1 >> 5) & 1))
       | (8 * ((v1 >> 2) & 1))
       | (16 * ((v1 >> 1) & 1))
       | (4 * (((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 17) & 1));
}


/* sub_1001DE02  @0x1001de02  size=7 */
int sub_1001DE02()
{
  return dword_10030BF0;
}


/* sub_10020B9D  @0x10020b9d  size=6 */
int sub_10020B9D()
{
  return dword_10030C00;
}


/* sub_10020C2F  @0x10020c2f  size=141 */
int __cdecl sub_10020C2F(int a1)
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
      && a1 < (unsigned int)dword_10030AC0
      && (*(_BYTE *)(dword_100308C0[a1 >> 6] + 56 * (a1 & 0x3F) + 40) & 1) != 0 )
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


/* sub_10020DCE  @0x10020dce  size=31 */
BOOL sub_10020DCE()
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


/* sub_10021B54  @0x10021b54  size=9 */
int __cdecl sub_10021B54(double a1)
{
  return _ceil_default(a1);
}


/* IsProcessorFeaturePresent  @0x10021c81  size=6 */
// attributes: thunk
BOOL __stdcall IsProcessorFeaturePresent(DWORD ProcessorFeature)
{
  return __imp_IsProcessorFeaturePresent(ProcessorFeature);
}


/* sub_10022DF0  @0x10022df0  size=86 */
void __cdecl sub_10022DF0()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002F924 >= 0x10 )
  {
    v0 = dword_1002F910;
    if ( (unsigned int)(dword_1002F924 + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002F910 - *((_DWORD *)dword_1002F910 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002F910 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002F920 = 0;
  dword_1002F924 = 15;
  LOBYTE(dword_1002F910) = 0;
}


/* sub_10022E50  @0x10022e50  size=93 */
void __cdecl sub_10022E50()
{
  WCHAR *v0; // eax

  if ( (unsigned int)dword_1002FA14 >= 8 )
  {
    v0 = (WCHAR *)lpString;
    if ( (unsigned int)(2 * dword_1002FA14 + 2) >= 0x1000 )
    {
      if ( (unsigned int)lpString - *((_DWORD *)lpString - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((WCHAR **)lpString - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA10 = 0;
  dword_1002FA14 = 7;
  LOWORD(lpString) = 0;
}


/* sub_10022EB0  @0x10022eb0  size=93 */
void __cdecl sub_10022EB0()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002F9FC >= 8 )
  {
    v0 = (void *)lParam;
    if ( (unsigned int)(2 * dword_1002F9FC + 2) >= 0x1000 )
    {
      if ( (unsigned int)(lParam - *(_DWORD *)(lParam - 4) - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *(void **)(lParam - 4);
    }
    sub_1000E529(v0);
  }
  dword_1002F9F8 = 0;
  dword_1002F9FC = 7;
  LOWORD(lParam) = 0;
}


/* sub_10022F10  @0x10022f10  size=93 */
void __cdecl sub_10022F10()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002FA2C >= 8 )
  {
    v0 = dword_1002FA18;
    if ( (unsigned int)(2 * dword_1002FA2C + 2) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002FA18 - *((_DWORD *)dword_1002FA18 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002FA18 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA28 = 0;
  dword_1002FA2C = 7;
  LOWORD(dword_1002FA18) = 0;
}


/* sub_10022F70  @0x10022f70  size=86 */
void __cdecl sub_10022F70()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002F93C >= 0x10 )
  {
    v0 = Src;
    if ( (unsigned int)(dword_1002F93C + 1) >= 0x1000 )
    {
      if ( (unsigned int)Src - *((_DWORD *)Src - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)Src - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002F938 = 0;
  dword_1002F93C = 15;
  LOBYTE(Src) = 0;
}


/* sub_10022FD0  @0x10022fd0  size=86 */
void __cdecl sub_10022FD0()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002F90C >= 0x10 )
  {
    v0 = dword_1002F8F8;
    if ( (unsigned int)(dword_1002F90C + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002F8F8 - *((_DWORD *)dword_1002F8F8 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002F8F8 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002F908 = 0;
  dword_1002F90C = 15;
  LOBYTE(dword_1002F8F8) = 0;
}


/* sub_10023030  @0x10023030  size=20 */
void __cdecl sub_10023030()
{
  `eh vector destructor iterator'(&unk_1002F940, 0x18u, 7u, (void (__thiscall *)(void *))sub_10008650);
}


/* sub_10023050  @0x10023050  size=86 */
void __cdecl sub_10023050()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_10033210 >= 0x10 )
  {
    v0 = dword_100331FC;
    if ( (unsigned int)(dword_10033210 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100331FC - 1);
      if ( (unsigned int)((_BYTE *)dword_100331FC - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_1003320C = 0;
  dword_10033210 = 15;
  LOBYTE(dword_100331FC) = 0;
}


/* sub_100230B0  @0x100230b0  size=86 */
void __cdecl sub_100230B0()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_10033150 >= 0x10 )
  {
    v0 = dword_1003313C;
    if ( (unsigned int)(dword_10033150 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_1003313C - 1);
      if ( (unsigned int)((_BYTE *)dword_1003313C - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_1003314C = 0;
  dword_10033150 = 15;
  LOBYTE(dword_1003313C) = 0;
}


/* sub_10023110  @0x10023110  size=86 */
void __cdecl sub_10023110()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_100330F4 >= 0x10 )
  {
    v0 = dword_100330E0;
    if ( (unsigned int)(dword_100330F4 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100330E0 - 1);
      if ( (unsigned int)((_BYTE *)dword_100330E0 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_100330F0 = 0;
  dword_100330F4 = 15;
  LOBYTE(dword_100330E0) = 0;
}


/* sub_10023170  @0x10023170  size=86 */
void __cdecl sub_10023170()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_100331D0 >= 0x10 )
  {
    v0 = dword_100331BC;
    if ( (unsigned int)(dword_100331D0 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100331BC - 1);
      if ( (unsigned int)((_BYTE *)dword_100331BC - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_100331CC = 0;
  dword_100331D0 = 15;
  LOBYTE(dword_100331BC) = 0;
}


/* sub_100231D0  @0x100231d0  size=86 */
void __cdecl sub_100231D0()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_100331B4 >= 0x10 )
  {
    v0 = dword_100331A0;
    if ( (unsigned int)(dword_100331B4 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100331A0 - 1);
      if ( (unsigned int)((_BYTE *)dword_100331A0 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_100331B0 = 0;
  dword_100331B4 = 15;
  LOBYTE(dword_100331A0) = 0;
}


/* sub_10023230  @0x10023230  size=86 */
void __cdecl sub_10023230()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_10033168 >= 0x10 )
  {
    v0 = dword_10033154;
    if ( (unsigned int)(dword_10033168 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_10033154 - 1);
      if ( (unsigned int)((_BYTE *)dword_10033154 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_10033164 = 0;
  dword_10033168 = 15;
  LOBYTE(dword_10033154) = 0;
}


/* sub_10023290  @0x10023290  size=86 */
void __cdecl sub_10023290()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_10033180 >= 0x10 )
  {
    v0 = dword_1003316C;
    if ( (unsigned int)(dword_10033180 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_1003316C - 1);
      if ( (unsigned int)((_BYTE *)dword_1003316C - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_1003317C = 0;
  dword_10033180 = 15;
  LOBYTE(dword_1003316C) = 0;
}


/* sub_100232F0  @0x100232f0  size=86 */
void __cdecl sub_100232F0()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_100330D4 >= 0x10 )
  {
    v0 = dword_100330C0;
    if ( (unsigned int)(dword_100330D4 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100330C0 - 1);
      if ( (unsigned int)((_BYTE *)dword_100330C0 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_100330D0 = 0;
  dword_100330D4 = 15;
  LOBYTE(dword_100330C0) = 0;
}


/* sub_10023350  @0x10023350  size=86 */
void __cdecl sub_10023350()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_100331F8 >= 0x10 )
  {
    v0 = dword_100331E4;
    if ( (unsigned int)(dword_100331F8 + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_100331E4 - 1);
      if ( (unsigned int)((_BYTE *)dword_100331E4 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_100331F4 = 0;
  dword_100331F8 = 15;
  LOBYTE(dword_100331E4) = 0;
}


/* sub_100233B0  @0x100233b0  size=86 */
void __cdecl sub_100233B0()
{
  _BYTE *v0; // ecx

  if ( (unsigned int)dword_1003319C >= 0x10 )
  {
    v0 = dword_10033188;
    if ( (unsigned int)(dword_1003319C + 1) >= 0x1000 )
    {
      v0 = *((_BYTE **)dword_10033188 - 1);
      if ( (unsigned int)((_BYTE *)dword_10033188 - v0 - 4) > 0x1F )
        _invalid_parameter_noinfo_noreturn();
    }
    sub_1000E529(v0);
  }
  dword_10033198 = 0;
  dword_1003319C = 15;
  LOBYTE(dword_10033188) = 0;
}


/* sub_10023410  @0x10023410  size=86 */
void __cdecl sub_10023410()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002FA74 >= 0x10 )
  {
    v0 = dword_1002FA60;
    if ( (unsigned int)(dword_1002FA74 + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002FA60 - *((_DWORD *)dword_1002FA60 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002FA60 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA70 = 0;
  dword_1002FA74 = 15;
  LOBYTE(dword_1002FA60) = 0;
}


/* sub_10023470  @0x10023470  size=86 */
void __cdecl sub_10023470()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002FA5C >= 0x10 )
  {
    v0 = dword_1002FA48;
    if ( (unsigned int)(dword_1002FA5C + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002FA48 - *((_DWORD *)dword_1002FA48 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002FA48 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA58 = 0;
  dword_1002FA5C = 15;
  LOBYTE(dword_1002FA48) = 0;
}


/* sub_100234D0  @0x100234d0  size=86 */
void __cdecl sub_100234D0()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002FA44 >= 0x10 )
  {
    v0 = dword_1002FA30;
    if ( (unsigned int)(dword_1002FA44 + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002FA30 - *((_DWORD *)dword_1002FA30 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002FA30 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA40 = 0;
  dword_1002FA44 = 15;
  LOBYTE(dword_1002FA30) = 0;
}


/* sub_10023530  @0x10023530  size=86 */
void __cdecl sub_10023530()
{
  void *v0; // eax

  if ( (unsigned int)dword_1002FA8C >= 0x10 )
  {
    v0 = dword_1002FA78;
    if ( (unsigned int)(dword_1002FA8C + 1) >= 0x1000 )
    {
      if ( (unsigned int)dword_1002FA78 - *((_DWORD *)dword_1002FA78 - 1) - 4 > 0x1F )
        _invalid_parameter_noinfo_noreturn();
      v0 = *((void **)dword_1002FA78 - 1);
    }
    sub_1000E529(v0);
  }
  dword_1002FA88 = 0;
  dword_1002FA8C = 15;
  LOBYTE(dword_1002FA78) = 0;
}


/* sub_10023586  @0x10023586  size=10 */
void __cdecl sub_10023586()
{
  DeleteCriticalSection(&stru_1002FD64);
  if ( unk_1002FD7C )
  {
    free(unk_1002FD7C);
    unk_1002FD7C = 0;
  }
  unk_1002FD80 = 0;
  unk_1002FD84 = 0;
}


/* sub_10023590  @0x10023590  size=10 */
void __cdecl sub_10023590()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  if ( _InterlockedExchangeAdd(&dword_1002F004, 0xFFFFFFFF) < 0 )
  {
    v0 = &stru_1002FF40;
    do
      _Mtxdst(v0++);
    while ( (int)v0 < (int)&dword_10030000 );
  }
}


/* sub_1002359A  @0x1002359a  size=10 */
void __cdecl sub_1002359A()
{
  void *v0; // esi

  v0 = dword_10030448;
  if ( dword_10030448 )
  {
    sub_1000EF2A((char *)dword_10030448);
    sub_1000E529(v0);
    dword_10030448 = nullptr;
  }
}


/* decompiled 315 functions, 0 failed, 8.3s */
