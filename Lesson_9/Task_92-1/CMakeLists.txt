cmake_minimum_required (VERSION 3.22.0)
project ("Task_92")

file(GLOB SOURCES "source_files/*.cpp")
add_executable (${PROJECT_NAME} ${SOURCES})
target_include_directories(${PROJECT_NAME} PRIVATE header_files)
