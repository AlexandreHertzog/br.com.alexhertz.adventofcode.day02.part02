#ifndef _BR_COM_ALEXHERTZ_ADVENTOFCODE_COMMON_IO_FILELOADER_HH_
#define _BR_COM_ALEXHERTZ_ADVENTOFCODE_COMMON_IO_FILELOADER_HH_

#include <bits/stdc++.h>

using namespace std;

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace common {
namespace io {

class file_loader {
 public:
  file_loader(string path);

  vector<string> get_lines();

 private:
  string path_;
};

}  // namespace io
}  // namespace common
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br

#endif
