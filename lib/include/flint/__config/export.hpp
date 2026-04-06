#ifndef FLINT_EXPORT_HPP
#define FLINT_EXPORT_HPP


#ifdef FLINT_SHARED

    #ifdef _MSC_VER
        #ifdef FLINT_BUILD_LIB
         #define FLINT_EXPORT __declspec(dllexport)
        #else
         #define FLINT_EXPORT __declspec(dllimport)
        #endif
    #else
        #define FLINT_EXPORT __attribute__((__visibility__("default")))
    #endif

#elifndef FLINT_STATIC

    #define FLINT_EXPORT

#else

static_assert( false, "API type must be defined!" );

#endif


#endif //!FLINT_EXPORT_HPP
