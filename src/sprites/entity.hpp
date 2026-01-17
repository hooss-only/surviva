#pragma once

#include "../sprite.hpp"

class Entity: public Sprite {
        public:
                Entity();
                ~Entity();

        private:
                Rectangle hitbox;
                int middle_point;
};
