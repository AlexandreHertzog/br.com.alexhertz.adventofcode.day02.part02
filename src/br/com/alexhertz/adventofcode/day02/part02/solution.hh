#ifndef _BR_COM_ALEXHERTZ_ADVENTOFCODE_DAY02_PART02_SOLUTION_HH_
#define _BR_COM_ALEXHERTZ_ADVENTOFCODE_DAY02_PART02_SOLUTION_HH_

#include <bits/stdc++.h>
using namespace std;

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace day02 {
namespace part02 {

class solution {
 public:
  static string get(string input_path);

 private:
  static solution &get_instance();
  static string common_chars(const string &left, const string &right);

  string run(string input_path);
};

}  // namespace part02
}  // namespace day02
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br

#endif
