/*
 * Actor.cpp
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#include "../include/Actor.h"

namespace enDJIN {

Actor::Actor(std::string filename):Entity(filename),state(IDLE) {

}

Actor::~Actor() {
	// TODO Auto-generated destructor stub
}
sf::Vector2f Actor::getVelocity() const {
	return velocity;
}

void Actor::setVelocity(sf::Vector2f velocity) {
	this->velocity = velocity;
}
void Actor::update(){
	sf::Vector2f t=getLocation();
	t.x+=velocity.x;
	t.y+=velocity.y;
	setLocation(t);
	switch(state){
	case IDLE:
		state = updateIdle();
		break;
	case WANDERING:
		state = updateWandering();
		break;
	case HUNTING:
		state = updateHunting();
		break;
	case RUNNING:
		state = updateRunning();
		break;
	case JUMPING:
		state = updateJumping();
		break;
	case FALLING:
		state = updateFalling();
		break;
	case ATTACKING:
		state = updateAttacking();
		break;
	case ATTACKINGFAR:
		state = updateAttackingFar();
		break;
	case STUNNED:
		state = updateStunned();
		break;
	case DYING:
		state = updateDying();
		break;
	case DEAD:
		delete this;
		break;
	default:
		state = IDLE;
		break;
	}
}

ActorStates Actor::updateIdle(){
	return WANDERING;
}
ActorStates Actor::updateWandering(){
	return WANDERING;
}
ActorStates Actor::updateHunting(){
	return HUNTING;
}
ActorStates Actor::updateRunning(){
	return RUNNING;
}
ActorStates Actor::updateJumping(){
	return JUMPING;
}
ActorStates Actor::updateFalling(){
	return FALLING;
}
ActorStates Actor::updateAttacking(){
	return ATTACKING;
}
ActorStates Actor::updateAttackingFar(){
	return ATTACKINGFAR;
}
ActorStates Actor::updateStunned(){
	return STUNNED;
}
ActorStates Actor::updateDying(){
	return DYING;
}

} /* namespace enDJIN */
