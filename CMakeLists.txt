cmake_minimum_required(VERSION 3.7.2)

find_package(SFML 2 REQUIRED COMPONENTS graphics audio)

# all source files
set(SRC main.cpp)

# define the pong target
add_executable(libsrc ${SRC})
target_link_libraries(libsrc sfml-audio sfml-graphics)
