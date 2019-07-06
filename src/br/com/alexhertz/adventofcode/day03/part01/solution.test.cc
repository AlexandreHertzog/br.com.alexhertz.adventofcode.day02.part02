#include <gtest/gtest.h>

#include "solution.hh"

using br::com::alexhertz::adventofcode::day03::part01::solution;

TEST(adventofcode_day03_part01, input01) {
  ASSERT_EQ(solution::get("input.01.txt"), 4);
}

TEST(adventofcode_day03_part01, input02) {
  ASSERT_EQ(solution::get("input.02.txt"), 98005);
}
