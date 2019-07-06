#ifndef _BR_COM_ALEXHERTZ_ADVENTOFCODE_DAY03_PART01_SOLUTION_HH_
#define _BR_COM_ALEXHERTZ_ADVENTOFCODE_DAY03_PART01_SOLUTION_HH_

#include <br/com/alexhertz/adventofcode/common/common.hh>

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace day03 {
namespace part01 {

struct point {
  int x = 0;
  int y = 0;
};

struct area {
  int w = 0;
  int h = 0;
};

class rectangle {
 public:
  rectangle();
  void parse(const string &line);

  const point &get_bottom_left() const;
  const area &get_area() const;

 private:
  point p_;
  area a_;
};

class solution {
 public:
  static int get(string input_path);

 private:
  static solution &get_instance();
  int run(string input_path);
};

}  // namespace part01
}  // namespace day03
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br

#endif
