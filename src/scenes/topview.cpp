#include "topview.hpp"

#include <algorithm>

TopView::TopView() {
}

TopView::~TopView() {
        for (Entity* entity: this->entities) {
                delete entity;
        }
        this->entities.clear();
}

void TopView::update(double dt) {
        for (Entity* entity: this-> entities) {
                entity->update(dt);
        }
        this->order_entities();
        Scene::update(dt);
}

void TopView::render() {
        for (Entity* entity: this->entities) {
                entity->render();
        }
        Scene::render();
}

void TopView::add_entity(Entity* entity) {
        this->entities.push_back(entity);
}

void TopView::order_entities() {
        std::sort(this->entities.begin(), this->entities.end(),
                [](Entity* a, Entity* b) {
                        return a->get_position().y
                                < b->get_position().y;
                }
        );
}
