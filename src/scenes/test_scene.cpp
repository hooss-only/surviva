#include "test_scene.hpp"

#include "../sprites/player.hpp"
#include "../sprites/dummy.hpp"

TestScene::TestScene() {
        this->add_sprite(new Player());
        this->add_sprite(new Dummy());
}
