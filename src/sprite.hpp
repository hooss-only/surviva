#pragma once
#include <raylib.h>

class Sprite {
        public:
                Sprite();
                ~Sprite();

                virtual void draw();
                virtual void update(float dt);

        protected:
                Texture2D* texture;
                Vector2 position;
};
