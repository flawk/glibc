/* Generic implementation already assume builtin support for
   float and double.  */
#define USE_FABSL_BUILTIN 1
/* This is not available for P8 or BE targets.  */
#ifdef __FLOAT128__
# define USE_FABSF128_BUILTIN 1
#else
# define USE_FABSF128_BUILTIN 0
#endif
