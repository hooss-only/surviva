#include "test_scene.hpp"

#include "../sprites/player.hpp"
#include "../sprites/dummy.hpp"

TestScene::TestScene() {
        this->add_entity(new Player());
        this->add_entity(new Dummy());
}
