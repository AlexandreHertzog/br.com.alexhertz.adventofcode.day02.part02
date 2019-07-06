#include "fileloader.hh"

#include <fstream>
#include <ios>
#include <iostream>

#include "log.hh"

namespace br {
namespace com {
namespace alexhertz {
namespace adventofcode {
namespace common {
namespace io {

file_loader::file_loader(string p) {
  log_debug("Using input file: " + p);
  path_.swap(p);
}

vector<string> file_loader::get_lines() {
  ifstream input(path_);
  if (!input.is_open()) {
    throw runtime_error("Input file not found: " + path_);
  }

  vector<string> lines;
  while (!input.eof()) {
    string l;
    getline(input, l);

    if (l.empty()) {
      continue;
    }

    log_debug("Read line: " + l);
    lines.emplace_back(move(l));
  }

  return lines;
}

}  // namespace io
}  // namespace common
}  // namespace adventofcode
}  // namespace alexhertz
}  // namespace com
}  // namespace br
