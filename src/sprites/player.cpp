#include "player.hpp"
#include "../resources/texture.hpp"

#include <raylib.h>


Player::Player() : Entity() {
        this->texture = useTexture("assets/player.png");
        this->speed = 200;
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
        this->move();
        this->position.x += this->velocity.x * dt;
        this->position.y += this->velocity.y * dt;
}

void Player::move() {
        Vector2 weight = { 0 };
        if (IsKeyDown(KEY_A)) {
                weight.x--;
        }
        if (IsKeyDown(KEY_D)) {
                weight.x++;
        }
        if (IsKeyDown(KEY_W)) {
                weight.y--;
        }
        if (IsKeyDown(KEY_S)) {
                weight.y++;
        }

        int modified = speed;
        if (weight.x * weight.y != 0) {
                modified /= 1.414;

        }

        this->velocity.x = modified * weight.x;
        this->velocity.y = modified * weight.y;
}
