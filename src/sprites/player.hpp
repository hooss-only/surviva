#pragma once

#include "entity.hpp"

class Player : public Entity {
        public:
                Player();
                ~Player();

                void draw() override;
                void update(float dt) override;

        private:
                Vector2 velocity;
                int speed;

                void move();
};
