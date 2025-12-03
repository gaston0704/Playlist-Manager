#ifndef SONG_HANDLE_H
#define SONG_HANDLE_H

#include "audio_resource.h"

class SongHandle {
private:
    int fd;  // file descriptor (resource)

public:
    explicit SongHandle(const std::string& songName);

    ~SongHandle();

    // Disable copying
    SongHandle(const SongHandle&) = delete;
    SongHandle& operator=(const SongHandle&) = delete;

    // Allow moving (transfer ownership)
    SongHandle(SongHandle&& other) noexcept;
    SongHandle& operator=(SongHandle&& other) noexcept;

    int get() const { return fd; }
};

#endif
