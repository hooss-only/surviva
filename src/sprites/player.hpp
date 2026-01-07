#pragma once

#include "../sprite.hpp"

class Player : private Sprite {
        public:
                Player();
                ~Player();

                void draw() override;
                void update(float dt) override;

        private:
                Texture2D* texture;

                Vector2 velocity;
                int speed;

                void move();
};
