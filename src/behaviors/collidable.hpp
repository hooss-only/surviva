#pragma once

#include <SDL3/SDL.h>

#include "../sprites/entity.hpp"

class Collidable {
        public:
                Collidable(SDL_FRect box, Entity* owner);
                ~Collidable() = default;

                virtual void on_collide();

                bool check_collision(Collidable* other);
                SDL_FRect get_collide_box();

        private:
                SDL_FRect box;
                Entity* owner;
};
