#include <SDL3/SDL.h>
#include "game_status.h"

int initialize_window() {
        if (SDL_Init(SDL_INIT_VIDEO)) return 1;

        set_window(SDL_CreateWindow(
                "Surviva",
                800, 600,
                0
        ));
        if (get_window() == NULL) return 1;

        set_renderer(SDL_CreateRenderer(get_window(), NULL));
        if (get_renderer() == NULL) return 1;

        return 0;
}

int main() {
        if (initialize_window())  return 1;

        while (!game_should_close()) {
                SDL_Event event;
                while (SDL_PollEvent(&event)) {
                        if (event.type == SDL_EVENT_QUIT) set_game_should_close(true);
                }
        }

        SDL_DestroyRenderer(get_renderer());
        SDL_DestroyWindow(get_window());
        SDL_Quit();

        return 0;
}
