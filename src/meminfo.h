#ifndef __R_MEMINFO__
#define __R_MEMINFO__


#include <stdint.h>

// "portability"
#define OS_LINUX (defined(__gnu_linux__) || defined(__linux__) || defined(__linux) || defined(linux))

#define OS_WINDOWS (defined(_WIN32) || defined(__WIN32__) || defined(_WIN64) || defined(__TOS_WIN__) || defined(__WINDOWS__))

#define OS_MAC ((defined(__APPLE__) && defined(__MACH__)) || macintosh || Macintosh)

#define OS_FREEBSD defined(__FreeBSD__)
#define OS_BSD (defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__bsdi__) || defined(__DragonFly__))
#define OS_SOLARIS (defined(__sun) || defined(sun))
#define OS_HURD (defined(__GNU__) || defined(__gnu_hurd__)) // why the hell not

#define OS_NIX (defined(OS_BSD) || defined(OS_HURD) || defined(OS_LINUX) || defined(OS_MAC) || defined(OS_SOLARIS))


// Magic numbers
#define chkret(ret) if(ret)return(ret)

#define MEMUSE_OK 0
#define FAILURE -1
#define PLATFORM_ERROR -10


// prototypes
int meminfo_totalram(uint64_t *totalram);
int meminfo_freeram(uint64_t *freeram);
int meminfo_bufferram(uint64_t *bufferram);
int meminfo_cachedram(uint64_t *cachedram);
int meminfo_totalswap(uint64_t *totalswap);
int meminfo_freeswap(uint64_t *freeswap);
int meminfo_cachedswap(uint64_t *cachedswap);


#endif
