/*
 * Player.cpp
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#include "../include/Player.h"



Player::Player(std::string filename):Actor(filename) {
	// TODO Auto-generated constructor stub

}

Player::~Player() {
	// TODO Auto-generated destructor stub
}
void Player::update(){

}

Player* Player::init(const std::string& filename) {
	if(Player::_instance==nullptr){Player::_instance=new Player(filename);}
	return Player::_instance;
}

Player* Player::getInstance() {
	if(Player::_instance==nullptr)throw std::runtime_error("Player object does not exist!");
	return Player::_instance;
}

Player *Player::_instance=nullptr;

void Player::killPlayer(Player* playerToKill=Player::_instance) {
	delete playerToKill;

}


