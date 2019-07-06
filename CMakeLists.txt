cmake_minimum_required(VERSION 3.14)

project(
  br.com.alexhertz.adventofcode
  VERSION 1.0.0.0
  DESCRIPTION "Solutions for the Advent of Code days"
)

add_library(adventofcode.common
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/common/io/fileloader
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/common/logger/log
)

target_include_directories(adventofcode.common
  PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/br/com/alexhertz/adventofcode/common/io
    ${CMAKE_CURRENT_SOURCE_DIR}/include/br/com/alexhertz/adventofcode/common/logger
)

set_target_properties(adventofcode.common PROPERTIES
  CXX_STANDARD 17
)

enable_testing()
find_package(GTest REQUIRED)

link_libraries(adventofcode.common gtest_main gtest)
set(CMAKE_CXX_STANDARD 17)

add_executable(adventofcode.day02.part02
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/day02/part02/solution
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/day02/part02/solution.test
)

add_test(
  NAME adventofcode.day02.part02
  COMMAND adventofcode.day02.part02
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/resource/day02/part02
)

add_executable(adventofcode.day03.part01
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/day03/part01/solution
  ${CMAKE_CURRENT_SOURCE_DIR}/src/br/com/alexhertz/adventofcode/day03/part01/solution.test
)

add_test(
  NAME adventofcode.day03.part01
  COMMAND adventofcode.day03.part01
  WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/resource/day03/part01
)
