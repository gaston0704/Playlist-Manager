#include "playlist.h"
#include <utility>
#include <iostream>

int main(){
    Playlist playlist;
    playlist.addSong(Song("Sun is up", "Inna", 217));
    playlist.addSong(Song("Guapa", "Marc Moon", 156));

    std::cout << "Copy constructor example:" << std::endl;
    Playlist copy(playlist);
    copy.print();

    std::cout << "Move constructor example:" << std::endl;
    Playlist moved(std::move(playlist));
    moved.print();

    std::cout << "End of main (Destructors will run)" << std::endl;
    return 0;
}