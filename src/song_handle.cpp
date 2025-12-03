#include "song_handle.h"

SongHandle::SongHandle(const std::string& songName)
    : fd(openAudioResource(songName)) {}

SongHandle::~SongHandle() {
    closeAudioResource(fd);
}

SongHandle::SongHandle(SongHandle&& other) noexcept 
    : fd(other.fd) 
{
    other.fd = -1;
}

SongHandle& SongHandle::operator=(SongHandle&& other) noexcept {
    if (this != &other) {
        closeAudioResource(fd);
        fd = other.fd;
        other.fd = -1;
    }
    return *this;
}
