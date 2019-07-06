#include <gtest/gtest.h>

#include "solution.hh"

using br::com::alexhertz::adventofcode::day02::part02::solution;

TEST(adventofcode_day02_part02, input01) {
  ASSERT_EQ(solution::get("input.01.txt"), "fgij");
}

TEST(adventofcode_day02_part02, input02) {
  ASSERT_EQ(solution::get("input.02.txt"), "lujnogabetpmsydyfcovzixaw");
}
