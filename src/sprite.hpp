#pragma once
#include <raylib.h>

class Sprite {
        public:
                Sprite();
                ~Sprite();

                virtual void draw();
                virtual void update(float dt);

        private:
                Texture2D* texture;
                Vector2 position;
};
