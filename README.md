# Audio Playlist Manager

A practical C++ application demonstrating core Object-Oriented Programming concepts and modern memory management techniques, built using CMake and a clean project structure. The project implements a simple playlist manager that stores songs, performs deep and move copies, and manages dynamic memory safely.


## Project Goals

This application illustrates the following essential C++ OOP concepts:

### Encapsulation

Classes Song and Playlist hide internal data and expose a safe interface.

### Member Initialization in Constructors

All members are initialized using initializer lists, ensuring correctness and consistent behavior.

### Manual Heap Memory Management

The `Playlist` class dynamically allocates and frees memory for storing songs.

### Custom Copy Constructor (Deep Copy)

Ensures that copying a playlist results in a fully independent duplicate.

### Custom Move Constructor

Allows efficient transfer of ownership of allocated resources without copying.

### Destructor

Properly releases all dynamically allocated memory.


## Features

* Add songs to a playlist
* Deep copy playlists
* Efficient move operations using move semantics
* Debug messages for constructor, destructor, copy and move constructor
* Modular source and header files
* Build automation using CMake
  

## Project Structure

```
│
├── CMakeLists.txt
├── src/
│   ├── Song.h
│   ├── Song.cpp
│   ├── Playlist.h
│   ├── Playlist.cpp
│   └── main.cpp
└── build/        (generated automatically)
```


## Build and Run (Linux)

From the project root directory:

```
mkdir build
cd build
cmake ..
make
./AudioPlaylistManager
```



## Purpose of the Project

This repository provides a clear and minimal real-world example demonstrating:

* Fundamental OOP principles in C++
* Manual memory management with heap allocation
* Deep vs. shallow copying behavior
* Move semantics for efficient resource transfer
* Build configuration and automation with CMake

It serves as a practical reference or homework assignment for courses involving OOP, system programming, or software engineering fundamentals.
