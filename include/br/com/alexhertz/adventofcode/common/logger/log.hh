#ifndef _BR_COM_ALEXHERTZ_ADVENTOFCODE_COMMON_LOGGER_LOG_HH_
#define _BR_COM_ALEXHERTZ_ADVENTOFCODE_COMMON_LOGGER_LOG_HH_

#include <bits/stdc++.h>

using namespace std;

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace common {
namespace logger {

class log {
 public:
  static void debug(string sender, string message);
  static void info(string sender, string message);
  static void warn(string sender, string message);
  static void error(string sender, string message);
};

}  // namespace logger
}  // namespace common
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br

#define log_debug(__message)                                                 \
  br::com::alexhertz::adventofcode::common::logger::log::debug(__FUNCTION__, \
                                                               __message)
#define log_info(__message)                                                 \
  br::com::alexhertz::adventofcode::common::logger::log::info(__FUNCTION__, \
                                                              __message)
#define log_warn(__message)                                                 \
  br::com::alexhertz::adventofcode::common::logger::log::warn(__FUNCTION__, \
                                                              __message)
#define log_error(__message)                                                 \
  br::com::alexhertz::adventofcode::common::logger::log::error(__FUNCTION__, \
                                                               __message)

#endif
