#include "sprite.hpp"

Sprite::Sprite() {
        this->position = { 0 };
        this->should_delete = false;
}

void Sprite::update(double dt) {
}

void Sprite::render() {
        if (texture) texture->render(this->position);
}

bool Sprite::get_should_delete() {
        return this->should_delete;
}

void Sprite::set_should_delete(bool value) {
        this->should_delete = value;
}

SDL_FPoint& Sprite::get_position() {
        return this->position;
}

void Sprite::set_position(float x, float y) {
        this->position.x = x;
        this->position.y = y;
}
