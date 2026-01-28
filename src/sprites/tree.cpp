#include "tree.hpp"

#include "../assets/texture.hpp"

Tree::Tree() : 
        Entity(),
        Clickable({16, 36, 16, 28}, this),
        Collidable({16, 55, 16, 9}, this)
{
        this->texture->set_texture(use_texture("assets/tree.png"));
        this->offset = { 24, 64 };
}
