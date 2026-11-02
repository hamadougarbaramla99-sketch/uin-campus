#include "uincampus/version.hpp"

namespace uin {

std::string_view version() {
  return UIN_VERSION; // macros fournie par CMake
}

} // namespace uin
