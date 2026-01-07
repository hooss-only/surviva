#pragma once

#include "../sprite.hpp"

class Player : public Sprite {
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
