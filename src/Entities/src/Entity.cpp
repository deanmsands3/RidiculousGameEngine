/*
 * Entity.cpp
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#include "../include/Entity.h"

namespace enDJIN {

Entity::Entity(std::string filename) {
	  if(_texture.loadFromFile(filename) == false)
	  {
	    _filename = "";
	    _isLoaded = false;
	  }
	  else
	  {
	    _filename = filename;
	    _sprite.setTexture(_texture,true);
	    _isLoaded = true;
	  }

}

void Entity::Load(std::string filename)
{
  if(_texture.loadFromFile(filename) == false)
  {
    _filename = "";
    _isLoaded = false;
  }
  else
  {
    _filename = filename;
    _sprite.setTexture(_texture);
    _isLoaded = true;
  }
}

void Entity::Draw(sf::RenderWindow & renderWindow)
{
  if(_isLoaded)
  {
    renderWindow.draw(_sprite);
  }
}
sf::Vector2f Entity::getLocation() const {
	return _sprite.getPosition();
}
void Entity::setLocation(const sf::Vector2f& position){
  if(_isLoaded)
  {
    _sprite.setPosition(position);
  }
}
void Entity::setLocation(float x, float y){
	  if(_isLoaded)
	  {
	    _sprite.setPosition(x, y);
	  }
}
Entity::~Entity() {
	// TODO Auto-generated destructor stub
}
void Entity::update(){
}
void updateEntity(Entity* that){
	that->update();
}
} /* namespace enDJIN */
