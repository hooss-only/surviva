#include "scene.hpp"

Scene::Scene() {
};
Scene::~Scene() {
        for (Sprite* sprite: this->sprites) {
                delete sprite;
        }
};

void Scene::draw() {
        for (Sprite* sprite: this->sprites) {
                sprite->draw();
        }
}

void Scene::update(float dt) {
        for (Sprite* sprite: this->sprites) {
                sprite->update(dt);
        }
}

void Scene::add_sprite(Sprite* sprite) {
        sprites.push_back(sprite);
}
