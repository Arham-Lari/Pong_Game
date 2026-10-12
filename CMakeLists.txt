cmake_minimum_required(3.16)

project(Pong_game)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(raylib REQUIRED)

add_executable(
  src/main.cpp
)

target_link_libraries(Pong_game PRIVATE raylib)
