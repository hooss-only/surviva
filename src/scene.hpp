#pragma once

#include <vector>
#include "sprite.hpp"

class Scene {
        public:
                Scene();
                ~Scene();

                void draw();
                void update(float dt);

                void add_sprite(Sprite* sprite);

        private:
                std::vector<Sprite*> sprites;
};
