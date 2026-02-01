
cmake_minimum_required(VERSION 3.27)


project(Escape_plan CXX)


include_directories(.)

add_executable(Escape_plan main.cpp oz_lib.cpp)


set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")

target_link_libraries(Escape_plan PRIVATE -static -lpthread)

