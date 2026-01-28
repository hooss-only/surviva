#include "test_scene.hpp"

#include "../game_status.hpp"
#include "../sprites/player.hpp"
#include "../sprites/dummy.hpp"
#include "../sprites/tree.hpp"

TestScene::TestScene() : TopView() {
        set_player(new Player);
        this->add_sprite(get_player());

        Dummy* d = new Dummy();
        d->set_position(100, 100);
        this->add_sprite(d);

        Tree* t = new Tree();
        t->set_position(200, 100);
        this->add_sprite(t);
}
