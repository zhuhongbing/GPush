cmake_minimum_required(VERSION 2.6)
project(push_server)
set(CMAKE_VERBOSE_MAKEFILE ON)
add_definitions("-Wall -pg -g")
include_directories(${PROJECT_SOURCE_DIR}/include
${PROJECT_SOURCE_DIR}/../common/include ${PROJECT_SOURCE_DIR}/../efnfw ${PROJECT_SOURCE_DIR}/../head)
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/../common/lib
${PROJECT_SOURCE_DIR}/../efnfw/lib /usr/local/lib)
link_libraries(common efnfw zookeeper_mt hiredis protobuf jsoncpp pthread)
AUX_SOURCE_DIRECTORY(src SRC_LIST)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
file(GLOB_RECURSE SRC_LIST src/*.cpp)
add_executable(bin/PushServer ${SRC_LIST})
