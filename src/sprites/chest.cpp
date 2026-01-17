#include "chest.hpp"

#include "../resources/texture.hpp"

Chest::Chest() : Entity() {
        this->texture = useTexture("assets/chest.png");
        this->middle_point = 5 * 4;
}

Chest::~Chest() {
        unuseTexture(this->texture);
}

void Chest::draw() {
        DrawTextureEx(*this->texture, this->position, 0, 4, WHITE);
}
