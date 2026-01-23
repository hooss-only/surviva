#include <SDL3/SDL.h>

SDL_Window* window;
SDL_Renderer* renderer;

int initialize_window() {
        if (SDL_Init(SDL_INIT_VIDEO)) return 1;

        SDL_Window* window = SDL_CreateWindow(
                "Surviva",
                800, 600,
                0
        );
        if (window == NULL) return 1;

        SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
        if (renderer == NULL) return 1;

        return 0;
}

int main() {
        if (initialize_window())  return 1;

        bool should_close = false;
        
        while (!should_close) {
                SDL_Event event;
                while (SDL_PollEvent(&event)) {
                        if (event.type == SDL_EVENT_QUIT) should_close = true;
                }
        }

        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();

        return 0;
}
