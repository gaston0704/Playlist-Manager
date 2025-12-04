#include "song.h"
#include <iostream>

Song::Song(const std::string& title, const std::string& singer, int duration)
    : title(title), singer(singer), duration(duration), audio(title) {}

Song::Song(const Song& other)
    : title(other.title), singer(other.singer), duration(other.duration),
      audio(other.title)   // deep copy
{
    std::cout << " Deep copy of Song '" << title << "'\n";
}

Song::Song(Song&& other) noexcept
    : title(std::move(other.title)),
      singer(std::move(other.singer)),
      duration(other.duration),
      audio(std::move(other.audio))
{
    std::cout << " Move Song '" << title << "'\n";
}

Song& Song::operator=(const Song& other) {
    if (this != &other) {
        title = other.title;
        singer = other.singer;
        duration = other.duration;
        audio = SongHandle(other.title);  // new resource
        std::cout << "Assigned Song '" << title << "'\n";
    }
    return *this;
}

Song& Song::operator=(Song&& other) noexcept {
    if (this != &other) {
        title = std::move(other.title);
        singer = std::move(other.singer);
        duration = other.duration;
        audio = std::move(other.audio);
        std::cout << "Move assigned '" << title << "'\n";
    }
    return *this;
}


void Song::print() const{
    std::cout << title << " - " << singer << "(" << duration << "s), fd=" << audio.get() << std::endl;
}