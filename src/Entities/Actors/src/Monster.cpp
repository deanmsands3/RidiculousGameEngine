/*
 * Monster.cpp
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#include "../include/Monster.h"

namespace enDJIN {

Monster::Monster(std::string filename):Actor(filename) {
	// TODO Auto-generated constructor stub

}

Monster::~Monster() {
	// TODO Auto-generated destructor stub
}
ActorStates Monster::updateIdle(){
	return WANDERING;
}
ActorStates Monster::updateWandering(){
	return WANDERING;
}
ActorStates Monster::updateHunting(){
	return HUNTING;
}
ActorStates Monster::updateRunning(){
	return RUNNING;
}
ActorStates Monster::updateJumping(){
	return JUMPING;
}
ActorStates Monster::updateFalling(){
	return FALLING;
}
ActorStates Monster::updateAttacking(){
	return ATTACKING;
}
ActorStates Monster::updateAttackingFar(){
	return ATTACKINGFAR;
}
ActorStates Monster::updateStunned(){
	return STUNNED;
}
ActorStates Monster::updateDying(){
	return DYING;
}


const Armor& enDJIN::Monster::getArmor() const {
	return armor;
}

void enDJIN::Monster::setArmor(const Armor& armor) {
	this->armor = armor;
}

void receiveAttack(const Attack &attack){

}

} /* namespace enDJIN */

