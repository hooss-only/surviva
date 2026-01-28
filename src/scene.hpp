#pragma once

#include "sprite.hpp"
#include "camera.h"

#include <vector>

class Scene {
        public:
                Scene() = default;
                virtual ~Scene();
                
                virtual void handle_event(SDL_Event& event);
                virtual void update(double dt);
                virtual void render();

                void add_sprite(Sprite* sprite);

                struct Camera& get_camera();

        protected:
                std::vector<Sprite*> sprites;
                struct Camera camera = { 0 };

        private:
                void remove_dead_sprites();
                void process_hovering();
};
