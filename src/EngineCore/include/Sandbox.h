//
// Created by dean on 2/13/20.
//

#ifndef SSS_SANDBOX_H
#define SSS_SANDBOX_H

#include <SFML/Graphics.hpp>

#include <SFML/Graphics/Drawable.hpp>

class Sandbox: public sf::Drawable {
    sf::Texture _star_texture;
    sf::Sprite star_sprite;
protected:
    virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
public:
    virtual ~Sandbox();
    Sandbox();
    void tick();
};


#endif //SSS_SANDBOX_H
