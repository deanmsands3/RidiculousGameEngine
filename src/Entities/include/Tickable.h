//
// Created by dean on 8/13/20.
//

#ifndef SSS_TICKABLE_H
#define SSS_TICKABLE_H
#include <vector>

class Tickable {
private:
    std::vector<unsigned> _ticks_states;
    unsigned _tick;
    unsigned _state;

public:
    virtual void tick()=0;
    explicit Tickable();
    explicit Tickable(std::vector<unsigned> ticks_states);
    virtual void operator++();
};


#endif //SSS_TICKABLE_H
