#pragma once

// =============================================================================
// define macros from Windows.h to disable parts of the Windows API
//#define WIN32_LEAN_AND_MEAN

#define NOGDICAPMASKS     // CC_*, LC_*, PC_*, CP_*, TC_*, RC_
#define NOVIRTUALKEYCODES // VK_*
//#define NOWINMESSAGES   // WM_*, EM_*, LB_*, CB_*
#define NOWINSTYLES       // WS_*, CS_*, ES_*, LBS_*, SBS_*, CBS_*
#define NOSYSMETRICS      // SM_*
#define NOMENUS           // MF_*
#define NOICONS           // IDI_*
#define NOKEYSTATES       // MK_*
#define NOSYSCOMMANDS     // SC_*
#define NORASTEROPS       // Binary and Tertiary raster ops
#define NOSHOWWINDOW      // SW_*
#define OEMRESOURCE       // OEM Resource values
#define NOATOM            // Atom Manager routines
#define NOCLIPBOARD       // Clipboard routines
#define NOCOLOR           // Screen colors
//#define NOCTLMGR        // Control and Dialog routines
#define NODRAWTEXT        // DrawText() and DT_*
//#define NOGDI           // All GDI defines and routines (graphics device interface)
#define NOKERNEL          // All KERNEL defines and routines
//#define NOUSER          // All USER defines and routines
#define NONLS             // All NLS defines and routines (national language support)
//#define NOMB              // MB_* and MessageBox()
#define NOMEMMGR          // GMEM_*, LMEM_*, GHND, LHND, associated routines
#define NOMETAFILE        // typedef METAFILEPICT
#define NOMINMAX          // Macros min(a,b) and max(a,b)
//#define NOMSG           // typedef MSG and associated routines
#define NOOPENFILE        // OpenFile(), OemToAnsi, AnsiToOem, and OF_*
#define NOSCROLL          // SB_* and scrolling routines
#define NOSERVICE         // All Service Controller routines, SERVICE_ equates, etc.
#define NOSOUND           // Sound driver routines
#define NOTEXTMETRIC      // typedef TEXTMETRIC and associated routines
#define NOWH              // SetWindowsHook and WH_*
#define NOWINOFFSETS      // GWL_*, GCL_*, associated routines
#define NOCOMM            // COMM driver routines
#define NOKANJI           // Kanji support stuff.
#define NOHELP            // Help engine interface.
#define NOPROFILER        // Profiler interface.
#define NODEFERWINDOWPOS  // DeferWindowPos routines
#define NOMCX             // Modem Configuration Extensions
// =============================================================================
// C++ Standard Library
// Concepts library
#include <concepts>

// Coroutines library
#include <coroutine>

// Utilities library
#include <any>
#include <bitset>
#include <chrono>
#include <compare>
#include <expected>
#include <functional>
#include <initializer_list>
#include <optional>
#include <source_location>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <variant>
#include <version>

// Dynamic memory management
#include <memory>
#include <memory_resource>
#include <new>
#include <scoped_allocator>

// Numeric limits
#include <limits>
#include <stdfloat>

// Error handling
#include <exception>
#include <stacktrace>
#include <stdexcept>
#include <system_error>

// Strings library
#include <charconv>
#include <format>
#include <string>
#include <string_view>

// Containers library
#include <array>
#include <deque>
#include <forward_list>
#include <list>
#include <map>
#include <mdspan>
#include <queue>
#include <set>
#include <span>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <vector>

// Iterators library
#include <iterator>

// Ranges library
#include <ranges>

// Algorithms library
#include <algorithm>
#include <execution>

// Numerics library
#include <bit>
//#include <complex>
#include <numbers>
#include <numeric>
#include <random>
#include <ratio>
//#include <valarray>

// Localization library
#include <locale>

// Input/output library
#include <fstream>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <ostream>
#include <print>
#include <spanstream>
#include <sstream>
#include <streambuf>
#include <syncstream>

// Filesystem library
#include <filesystem>

// Regular Expressions library
#include <regex>

// Atomic Operations library
#include <atomic>

// Thread support library
#include <barrier>
#include <condition_variable>
#include <future>
#include <latch>
#include <mutex>
#include <semaphore>
#include <shared_mutex>
#include <stop_token>
#include <thread>

// =============================================================================
// C Standard Library
// Utilities library
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdlib>
#include <ctime>

// Numeric limits
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <cstdint>

// Error handling
#include <cassert>
#include <cerrno>

// Strings library
#include <cctype>
#include <cstring>
#include <cuchar>
#include <cwchar>
#include <cwctype>

// Numerics library
#include <cfenv>
#include <cmath>

// Localization library
#include <clocale>

// Input/output library
#include <cstdio>

#pragma warning(push, 0)
//#include <args.hxx>
//#include <fmt/format.h>
//#include <fmt/ostream.h>
//#include <frozen/map.h>
//#include <nowide/convert.hpp>
//#include <nowide/iostream.hpp>
//#include <spdlog/spdlog.h>

#include <winsock2.h>
#include <Windows.h>

//#include <spdlog/sinks/stdout_color_sinks.h>
//#include <xbyak/xbyak.h>
#pragma warning(pop)

using namespace std::literals;
