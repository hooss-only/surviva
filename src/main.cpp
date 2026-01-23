#include <SDL3/SDL.h>

int main() {
        SDL_Init(SDL_INIT_VIDEO);

        SDL_Window* window = SDL_CreateWindow(
                "Surviva",
                800, 600,
                0
        );

        SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);

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
