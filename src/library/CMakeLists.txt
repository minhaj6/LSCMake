cmake_minimum_required(VERSION 3.22)

project(simplemath)

add_library(${PROJECT_NAME} src/adder.cpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER src/adder.h)
install(TARGETS ${PROJECT_NAME} DESTINATION lib
        PUBLIC_HEADER DESTINATION include
        )