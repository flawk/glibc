/* Generic implementation already assume builtin support for
   float and double.  */
#define USE_FABSL_BUILTIN 1
#ifdef __clang__
# define USE_FABSF128_BUILTIN 0
#else
# define USE_FABSF128_BUILTIN 1
#endif
