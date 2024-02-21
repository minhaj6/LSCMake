cmake_minimum_required(VERSION 3.22.1)

project(LSCM_Project)

add_executable(${PROJECT_NAME} src/main.cpp)

add_subdirectory(src/library)
add_subdirectory(external/glfw)

# target_link_directories(${PROJECT_NAME} 
#    PRIVATE ${CMAKE_SOURCE_DIR}/src/library/build/
# )
# link dir not needed because lib is installed

target_link_libraries(${PROJECT_NAME} simplemath glfw3)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)