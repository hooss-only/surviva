#pragma once

#include "entity.hpp"

class Player : public Entity {
        public:
                Player();
                ~Player() = default;

                void update(double dt);

        private:
                void move(double dt);
                void animate();
        
                int ticks;

                Uint32 flipflop = 0;
};
