#include "topview.hpp"

#include <algorithm>

TopView::TopView() {
}

TopView::~TopView() {
}

void TopView::update(double dt) {
        this->order_sprites();
        Scene::update(dt);
}

void TopView::render() {
        Scene::render();
}

void TopView::order_sprites() {
        std::sort(this->sprites.begin(), this->sprites.end(),
                [](Sprite* a, Sprite* b) {
                        return a->get_position().y
                                < b->get_position().y;
                }
        );
}
