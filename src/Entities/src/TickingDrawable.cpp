//
// Created by dean on 8/28/20.
//

#include "TickingDrawable.h"



bool TickingDrawable::is_loaded() const {
    return _is_loaded;
}

TickingDrawable::TickingDrawable(): _is_loaded(false), _z_order(0), _texture_sheets() {

}

unsigned int TickingDrawable::getZOrder() const {
    return _z_order;
}

void TickingDrawable::setZOrder(unsigned int order) {
    _z_order = order;
}
