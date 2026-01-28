#pragma once

#include <SDL3/SDL.h>

#include "../sprite.hpp"

class Clickable {
        public:
                Clickable(SDL_FRect box, Sprite* owner);
                ~Clickable() = default;

                virtual void on_hover();
                virtual void on_click(Uint8 button);

                bool is_in_player_reach();

                SDL_FRect get_click_box();

        private:
                SDL_FRect box;
                Sprite* owner;
};
