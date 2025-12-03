#ifndef AUDIO_RESOURCE_H
#define AUDIO_RESOURCE_H

#include <iostream>
#include <string>

// Simulate opening an audio file or audio stream.
// Returns an integer descriptor representing the resource.
inline int openAudioResource(const std::string& songName) {
    static int nextFD = 1;
    int fd = nextFD++;
    std::cout << "[openAudioResource] Opened audio resource for '" 
              << songName << "' -> fd=" << fd << "\n";
    return fd;
}

// Simulate closing the audio resource descriptor.
inline void closeAudioResource(int fd) {
    if (fd != -1) {
        std::cout << "[closeAudioResource] Closed audio resource fd=" << fd << "\n";
    }
}

#endif
