#include "entity.hpp"

class Chest: public Entity {
        public:
                Chest();
                ~Chest();

                void draw() override;
};
