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
#include "Utils.h"
namespace enDJIN {
class Entity {
private:
	sf::Sprite  _sprite;
	sf::Texture _texture;
	bool _isLoaded;
	std::string _filename;
public:
	Entity(std::string filename);
	virtual ~Entity();
	virtual void update();
	virtual void Load(std::string filename);
	virtual void Draw(sf::RenderWindow & window);
	sf::Vector2f getLocation() const;
	void setLocation(const sf::Vector2f& position);
	void setLocation(float x, float y);
	static void updateEntity(Entity* that);
};

} /* namespace enDJIN */

#endif /* ENTITY_H_ */
