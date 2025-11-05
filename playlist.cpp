#include "playlist.h"
#include <iostream>

Playlist::Playlist() : songs(nullptr), count(0) {
    std::cout << "Empty playlist created" << std::endl;
}

Playlist::~Playlist(){
    std::cout << "Destroying playlist..." << std::endl;
    for(size_t i = 0; i < count; ++i){
        delete songs[i];
    }
    delete[] songs;
}

Playlist::Playlist(const Playlist& anotherPlaylist) : count(anotherPlaylist.count){
    std::cout << "Copying playlist..." << std::endl;
    songs = new Song*[count];
    for(size_t i = 0; i < count; ++i){
        songs[i] = new Song(*anotherPlaylist.songs[i]);
    }
}

Playlist::Playlist(Playlist&& anotherPlaylist) noexcept 
    : songs(anotherPlaylist.songs), count(anotherPlaylist.count){
        std::cout << "Moving playlist..." << std::endl;
        
        anotherPlaylist.songs = nullptr;
        anotherPlaylist.count = 0;
}

void Playlist::addSong(const Song& song){
    Song** newSongs = new Song*[count + 1];
    for(size_t i = 0; i < count; ++i){
        newSongs[i] = songs[i];
    }

    newSongs[count] = new Song(song);

    delete[] songs;
    songs = newSongs;
    count ++;
}

void Playlist::print() const{
    std::cout << "Playlist(" << count << " songs):" << std::endl;
    for(size_t i = 0; i < count; ++i){
        songs[i]->print();
    }
    std::cout << std::endl;
}