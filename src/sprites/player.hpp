#pragma once

#include "entity.hpp"
#include "../behaviors/collidable.hpp"

class Player : public Entity, public Collidable {
        public:
                Player();
                ~Player() = default;

                void update(double dt) override;

                void on_collide() override;

        private:
                void move(double dt);
                void animate();

                SDL_FPoint previous_position;
        
                int ticks;

                Uint32 flipflop = 0;
};
