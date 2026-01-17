#include "../sprite.hpp"

class Chest: public Sprite {
        public:
                Chest();
                ~Chest();

                void draw() override;
};
