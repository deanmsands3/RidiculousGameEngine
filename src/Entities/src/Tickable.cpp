//
// Created by dean on 8/13/20.
//

#include "Tickable.h"

#include <utility>

Tickable::Tickable(std::vector<unsigned> ticks_states):_ticks_states(std::move(ticks_states)) {
    _state = 0;
    _tick = 0;
}

Tickable::Tickable() {
    _state = 0;
    _tick = 0;
    _ticks_states.push_back(1);
}

void Tickable::operator++() {
    _tick++;
    _tick %= _ticks_states[_state];
}
