#include "song.h"
#include <iostream>

Song::Song(const std::string& title, const std::string& singer, int duration)
    : title(title), singer(singer), duration(duration) {}

void Song::print() const{
    std::cout << title << " - " << singer << "(" << duration << "s)" << std::endl;
}