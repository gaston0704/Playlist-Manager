#ifndef SONG_H
#define SONG_H

#include <string>

class Song{
private:
    std::string title;
    std::string singer;
    int duration;

public:
    Song(const std::string& title, const std::string& singer, int duration);
    void print() const;
};

#endif