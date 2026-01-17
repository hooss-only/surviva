#include "chest.hpp"

#include "../resources/texture.hpp"

Chest::Chest() : Entity() {
        this->texture = useTexture("assets/chest.png");
}

Chest::~Chest() {
        unuseTexture(this->texture);
}

void Chest::draw() {
        DrawTextureEx(*this->texture, this->position, 0, 4, WHITE);
}
