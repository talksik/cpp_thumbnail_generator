cmake_minimum_required(VERSION 3.15)

project(ThumbnailGenerator)

# compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)

set (source_dir "./src")
file (GLOB source_files "${source_dir}/*.cpp")

add_executable(ThumbnailGenerator ${source_files})

file (GLOB header_files "${source_dir}/*.hpp")
target_include_directories(ThumbnailGenerator PUBLIC ${source_dir})
