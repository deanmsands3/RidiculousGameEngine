/*
 * Actor.h
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#ifndef ACTOR_H_
#define ACTOR_H_
#include "Entities/Entity.h"

namespace enDJIN {

typedef enum {
	IDLE,
	WANDERING,
	HUNTING,
	RUNNING,
	JUMPING,
	FALLING,
	ATTACKING,
	ATTACKINGFAR,
	STUNNED,
	DYING,
	DEAD
}ActorStates;
class Actor: public Entity {
private:
	sf::Vector2f velocity;
	ActorStates state;
	unsigned long health;
public:
	void update();
	Actor(std::string filename);
	virtual ~Actor();

	sf::Vector2f getVelocity() const;
	void setVelocity(sf::Vector2f velocity);
	virtual ActorStates updateIdle();
	virtual ActorStates updateWandering();
	virtual ActorStates updateHunting();
	virtual ActorStates updateRunning();
	virtual ActorStates updateJumping();
	virtual ActorStates updateFalling();
	virtual ActorStates updateAttacking();
	virtual ActorStates updateAttackingFar();
	virtual ActorStates updateStunned();
	virtual ActorStates updateDying();
};

} /* namespace enDJIN */

#endif /* ACTOR_H_ */
