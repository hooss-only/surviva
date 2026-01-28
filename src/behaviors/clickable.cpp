#include "clickable.hpp"

#include "../game_status.hpp"
#include "../math/distance.h"

Clickable::Clickable(SDL_FRect box, Sprite* owner) {
        this->box = {
                box.x * get_sprite_scale(),
                box.y * get_sprite_scale(),
                box.w * get_sprite_scale(),
                box.h * get_sprite_scale()
        };
        this->owner = owner;
}

void Clickable::on_hover() {}
void Clickable::on_click(Uint8 button) {}

bool Clickable::is_in_player_reach() {
        float dist = get_dist(
                this->owner->get_position(),
                get_player()->get_position()
        );
        return dist <= get_player()->reach;
}

SDL_FRect Clickable::get_click_box() {
        SDL_FPoint screen_pos = this->owner->get_screen_pos();
        SDL_FPoint offset = this->owner->get_offset();
        return SDL_FRect {
                screen_pos.x - offset.x + this->box.x,
                screen_pos.y - offset.y + this->box.y,
                this->box.w,
                this->box.h
        };
}
