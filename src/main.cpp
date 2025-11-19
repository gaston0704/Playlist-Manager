#include "playlist.h"
#include "song.h"
#include <utility>
#include <iostream>

int main(){

    std::cout << "\n";

    Playlist playlist;
    playlist.addSong(Song("Sun is up", "Inna", 217));
    playlist.addSong(Song("Guapa", "Marc Moon", 156));

    std::cout << "Copy constructor example:" << std::endl;
    Playlist copy(playlist);
    
    copy.addSong(Song("Toxic", "Britney Spears", 198));

    std::cout << "Original playlist should not contain the new song:\n";
    playlist.print();
    std::cout << "The copy playlist: ";
    copy.print();

    std::cout << "Move constructor example:" << std::endl;
    Playlist moved(std::move(playlist));
    moved.print();

    Playlist selfAssign;
    selfAssign.addSong(Song("Song A", "Artist A", 200));

    std::cout << "Calling selfAssign = selfAssign;" << std::endl;
    selfAssign = selfAssign; // self-assignment test
    selfAssign.print();

    Playlist a, b, c;
    a.addSong(Song("Song A", "AA", 111));
    b.addSong(Song("Song B", "BB", 222));
    c.addSong(Song("Song C", "CC", 333));

    std::cout << "Calling chaining assignment: a = b = c;\n";
    a = b = c;

    std::cout << "All should now match playlist c:\n";
    a.print();
    b.print();
    c.print();

    std::cout << "End of main (Destructors will run)" << std::endl;
    return 0;
}