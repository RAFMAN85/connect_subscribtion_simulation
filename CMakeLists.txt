cmake_minimum_required(VERSION 3.22)
project(connect_subscribtion_simulation)

set(CMAKE_CXX_STANDARD 23)

add_executable(connect_subscribtion_simulation main.cpp data.h data.h data.cpp data.cpp client.cpp client.h client.h client.h info_codes.h info_codes.cpp info_codes.cpp strategy.cpp strategy.cpp)
