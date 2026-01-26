#pragma once

#include "entity.hpp"
#include "../behaviors/clickable.hpp"

class Dummy : public Entity, public Clickable {
        public:
                Dummy();
                ~Dummy() = default;

                void on_hover() override;
};
