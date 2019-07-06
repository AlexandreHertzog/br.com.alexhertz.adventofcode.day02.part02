#include "solution.hh"

#include <br/com/alexhertz/adventofcode/common/common.hh>
namespace io = br::com::alexhertz::adventofcode::common::io;

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace day03 {
namespace part01 {

int solution::get(string p) { return get_instance().run(move(p)); }

solution &solution::get_instance() {
  static solution s;
  return s;
}

int solution::run(string path) {
  const auto lines = io::file_loader(path).get_lines();

  vector<vector<int>> map;
  map.resize(1000, vector<int>(1000, 0));

  for (const auto l : lines) {
    rectangle r;
    r.parse(l);

    for (auto w = 0; w < r.get_area().w; ++w) {
      for (auto h = 0; h < r.get_area().h; ++h) {
        ++map[r.get_bottom_left().x + w][r.get_bottom_left().y + h];
      }
    }
  }

  int overlaps = 0;
  for (const auto v : map) {
    for (const auto overlap : v) {
      if (overlap > 1) {
        overlaps++;
      }
    }
  }

  return overlaps;
}

rectangle::rectangle() {}

void rectangle::parse(const string &l) {
  if (l.empty()) {
    return;
  }

  char tok = '\0';
  int claim = 0;

  point p;
  area a;

  stringstream ss(l);
  ss >> tok >> claim >> tok >> p.x >> tok >> p.y >> tok >> a.w >> tok >> a.h;

  if (!ss) {
    throw runtime_error("Failed to parse line");
  }

  swap(p_, p);
  swap(a_, a);
}

const point &rectangle::get_bottom_left() const { return p_; }

const area &rectangle::get_area() const { return a_; }

}  // namespace part01
}  // namespace day03
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br
