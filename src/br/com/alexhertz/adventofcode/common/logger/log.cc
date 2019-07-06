#include "log.hh"

#include <iostream>

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace common {
namespace logger {

void log::debug(string s, string m) {
  cout << __TIME__ << " [DGB] " << s << " : " << m << "\n ";
}

void log::info(string s, string m) {
  cout << __TIME__ << " [INF] " << s << ": " << m << "\n";
}

void log::warn(string s, string m) {
  cout << __TIME__ << " [WRN] " << s << ": " << m << "\n";
}

void log::error(string s, string m) {
  cout << __TIME__ << " [ERR] " << s << ": " << m << "\n";
}

}  // namespace logger
}  // namespace common
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br
