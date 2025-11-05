#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"
#include <cstddef>

class Playlist{
private:
    Song** songs;
    size_t count;

public:
    Playlist(); //constructor
    ~Playlist(); //destructor

    Playlist(const Playlist& anotherPlaylist); //copy constructor

    Playlist(Playlist&& anotherPlaylist) noexcept; //move constructor

    void addSong(const Song& song);
    void print() const;
};

#endif