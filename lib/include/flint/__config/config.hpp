#ifndef FLINT_CONFIG_HPP
#define FLINT_CONFIG_HPP

#include <ash/__config/config.hpp>


namespace flint::cfg
{
   // +--------------------------------+
   // | LIB LEVEL                      |
   // +--------------------------------+
   #ifdef FLINT_BUILD_LIB
      inline constexpr bool engine_level = true;
   #else
      inline constexpr bool engine_level = false;
   #endif

   inline constexpr bool debug_mode = ash::cfg::debug_mode;
}


#endif //!FLINT_CONFIG_HPP
