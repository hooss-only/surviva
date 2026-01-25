#pragma once

#include "../scene.hpp"
#include "../sprites/entity.hpp"

#include <vector>

class TopView : public Scene {
        public:
                TopView();
                virtual ~TopView();

                void update(double dt) override;
                void render() override;

                void add_entity(Entity* entity);

        protected:
                std::vector<Entity*> entities;

        private:
                void order_entities();
};
