//
// Created by dean on 8/28/20.
//

#ifndef SSS_TICKINGDRAWABLE_H
#define SSS_TICKINGDRAWABLE_H

#include "Tickable.h"
#include <SFML/Graphics/Drawable.hpp>
#include <SFML/Graphics.hpp>

class TickingDrawable: public Tickable, public sf::Drawable {
private:
    std::vector< std::vector< sf::Texture > >  _texture_sheets;
    bool _is_loaded;
    unsigned _z_order;
public:
    TickingDrawable();
    [[nodiscard]] bool is_loaded() const;
    [[nodiscard]] unsigned int getZOrder() const;
    void setZOrder(unsigned int order);
};


#endif //SSS_TICKINGDRAWABLE_H
