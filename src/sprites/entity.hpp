#pragma once

#include "../sprite.hpp"

class Entity: public Sprite {
        public:
                Entity();
                ~Entity();

        protected:
                Rectangle hitbox;
                int middle_point;
};
