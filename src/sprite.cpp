#include "sprite.hpp"

Sprite::Sprite() {
        this->position = { 0 };
}

Sprite::~Sprite() {
}

void Sprite::draw() {
        DrawTextureV(*this->texture, this->position, WHITE);
}

void Sprite::update(float dt) {
}
