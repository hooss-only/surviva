#pragma once

#include <SDL3/SDL.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
        SDL_Window* window;
        SDL_Renderer* renderer;
        bool should_close;
} game_status_t;

void set_window(SDL_Window* window);
SDL_Window* get_window();

void set_renderer(SDL_Renderer* renderer);
SDL_Renderer* get_renderer();

void set_game_should_close(bool should_close);
bool game_should_close();

#ifdef __cplusplus
}
#endif
