#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"
#include <cstddef>
#include <utility>
#include <iostream>

class Playlist{
private:
    Song** songs;
    size_t count;

    void init_form(const Playlist& other); 

public:
    Playlist(); //constructor
    ~Playlist(); //destructor

    Playlist(const Playlist& anotherPlaylist); //copy constructor

    Playlist(Playlist&& anotherPlaylist) noexcept; //move constructor

    Playlist& operator = (Playlist rhs);
    void swap(Playlist& other) noexcept;

    void addSong(const Song& song);
    void print() const;
};

inline void swap(Playlist& a, Playlist& b) noexcept {
    a.swap(b);
}

#endif
