/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define if socklen_t exists. */
#define HAS_SOCKLEN_T 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Skip building launcher */
#define LOVE_BUILD_EXE /**/

/* */
#define LOVE_ENABLE_AUDIO /**/

/* */
#define LOVE_ENABLE_AUDIO_NULL /**/

/* */
#define LOVE_ENABLE_AUDIO_OPENAL /**/

/* */
#define LOVE_ENABLE_BOX2D /**/

/* */
#define LOVE_ENABLE_DDSPARSE /**/

/* */
#define LOVE_ENABLE_ENET /**/

/* */
#define LOVE_ENABLE_EVENT /**/

/* */
#define LOVE_ENABLE_EVENT_SDL /**/

/* */
#define LOVE_ENABLE_FILESYSTEM /**/

/* */
#define LOVE_ENABLE_FILESYSTEM_PHYSFS /**/

/* */
#define LOVE_ENABLE_FONT /**/

/* */
#define LOVE_ENABLE_FONT_FREETYPE /**/

/* */
#define LOVE_ENABLE_GLAD /**/

/* */
#define LOVE_ENABLE_GRAPHICS /**/

/* */
#define LOVE_ENABLE_GRAPHICS_OPENGL /**/

/* */
#define LOVE_ENABLE_IMAGE /**/

/* */
#define LOVE_ENABLE_IMAGE_MAGPIE /**/

/* */
#define LOVE_ENABLE_JOYSTICK /**/

/* */
#define LOVE_ENABLE_JOYSTICK_SDL /**/

/* */
#define LOVE_ENABLE_KEYBOARD /**/

/* */
#define LOVE_ENABLE_KEYBOARD_SDL /**/

/* */
#define LOVE_ENABLE_LOVE /**/

/* */
#define LOVE_ENABLE_LUASOCKET /**/

/* */
#define LOVE_ENABLE_LUAUTF8 /**/

/* */
#define LOVE_ENABLE_MATH /**/

/* */
#define LOVE_ENABLE_MOUSE /**/

/* */
#define LOVE_ENABLE_MOUSE_SDL /**/

/* */
#define LOVE_ENABLE_NOISE1234 /**/

/* */
#define LOVE_ENABLE_PHYSICS /**/

/* */
#define LOVE_ENABLE_PHYSICS_BOX2D /**/

/* */
#define LOVE_ENABLE_SOUND /**/

/* */
#define LOVE_ENABLE_SOUND_LULLABY /**/

/* */
#define LOVE_ENABLE_SYSTEM /**/

/* */
#define LOVE_ENABLE_SYSTEM_SDL /**/

/* */
#define LOVE_ENABLE_THREAD /**/

/* */
#define LOVE_ENABLE_THREAD_SDL /**/

/* */
#define LOVE_ENABLE_TIMER /**/

/* */
#define LOVE_ENABLE_TIMER_SDL /**/

/* */
#define LOVE_ENABLE_UTF8 /**/

/* */
#define LOVE_ENABLE_WINDOW /**/

/* */
#define LOVE_ENABLE_WINDOW_SDL /**/

/* */
#define LOVE_ENABLE_WUFF /**/

/* Build without mpg123 */
/* #undef LOVE_NOMPG123 */

/* Enable gme */
/* #undef LOVE_SUPPORT_GME */

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "love"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "love"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "love HEAD"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "love"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "HEAD"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Version number of package */
#define VERSION "HEAD"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif
