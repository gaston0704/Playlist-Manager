cmake_minimum_required(VERSION 3.10)
project(AudioPlaylistManager)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Source files list
set(SRC_FILES
src/main.cpp
src/song.cpp
src/playlist.cpp
)

# Include directories
include_directories(src)

# Create executable
add_executable(${PROJECT_NAME} ${SRC_FILES})