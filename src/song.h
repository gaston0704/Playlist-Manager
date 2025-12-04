#ifndef SONG_H
#define SONG_H

#include <string>
#include "song_handle.h"

class Song{
private:
    std::string title;
    std::string singer;
    int duration;

    SongHandle audio; //RAII resource

public:
    Song(const std::string& title, const std::string& singer, int duration);

    // Copying a Song should COPY its resource
    Song(const Song& other);

    // Move constructor
    Song(Song&& other) noexcept;

    Song& operator=(const Song& other);
    Song& operator=(Song&& other) noexcept;

    void print() const;
};

#endif