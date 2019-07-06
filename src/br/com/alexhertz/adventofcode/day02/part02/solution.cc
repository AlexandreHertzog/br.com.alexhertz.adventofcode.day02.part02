#include "solution.hh"

#include <br/com/alexhertz/adventofcode/common/io/fileloader.hh>
#include <br/com/alexhertz/adventofcode/common/logger/log.hh>

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace day02 {
namespace part02 {

string solution::get(string p) { return get_instance().run(move(p)); }

solution &solution::get_instance() {
  static solution s;
  return s;
}

string solution::run(string path) {
  const auto lines = common::io::file_loader(path).get_lines();

  string larger_box;
  for (int i = 0; i < lines.size(); ++i) {
    for (int j = i + 1; j < lines.size(); ++j) {
      auto compared = common_chars(lines[i], lines[j]);
      if (compared.size() > larger_box.size()) {
        log_info("Found a new larger value = " + compared);
        larger_box.swap(compared);
      }
    }
  }

  return larger_box;
}

string solution::common_chars(const string &l, const string &r) {
  string ret;

  const auto len = min(l.size(), r.size());
  for (auto i = 0; i < len; ++i) {
    if (l[i] == r[i]) {
      ret += l[i];
    }
  }

  return ret;
}

}  // namespace part02
}  // namespace day02
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br
