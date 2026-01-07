#include "player.hpp"
#include "../resources/texture.hpp"

#include <raylib.h>

Player::Player() : Sprite() {
        this->texture = useTexture("assets/player.png");
}

Player::~Player() {
        unuseTexture(this->texture);
}

void Player::draw() {
        DrawTexturePro(
                *this->texture,
                { 0, 0, 16, 16 },
                { this->position.x, this->position.y, 16 * 4, 16 * 4 },
                { 0, 0 },
                0,
                WHITE
        );
}

void Player::update(float dt) {
}
