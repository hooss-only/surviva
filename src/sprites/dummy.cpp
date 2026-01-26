#include "dummy.hpp"

#include "../assets/texture.hpp"

Dummy::Dummy() : Entity(), Clickable({0, 0, 16*4, 16*4}) {
        this->texture->set_texture(use_texture("assets/dummy.png"));
}

void Dummy::on_hover() {
        SDL_LogDebug(SDL_LOG_CATEGORY_APPLICATION, "You're hovering a DUMMY!");
}
