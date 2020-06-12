cmake_minimum_required(VERSION 3.5)
project(http_server_client)

set(CMAKE_CXX_STANDARD 11)

include_directories(/usr/local/include/hv)

link_directories(/usr/local/lib)

add_executable(http_server http_server.cpp)
target_link_libraries(http_server libhv.so)

add_executable(http_client http_client.cpp)
target_link_libraries(http_client libhv.so)