/*
 * Entity.h
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#ifndef ENTITY_H_
#define ENTITY_H_
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <string>
#include "TickingDrawable.h"

class Entity: TickingDrawable{
public:
	Entity();
	virtual ~Entity();
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
	static void updateEntity(Entity* that);
};


#endif /* ENTITY_H_ */
