/*
 * Player.h
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#ifndef PLAYER_H_
#define PLAYER_H_

#include "Actor.h"
#include "Armors/Armors.h"
#include "Attacks/Attack.h"

namespace enDJIN {

class Player: public Actor {
	static Player *_instance;
	Player(std::string filename);
public:
	Player* init(const std::string& filename);
	void update();
	virtual ~Player();
	static Player *getInstance();
	static void killPlayer(Player* playerToKill);
};

} /* namespace enDJIN */

#endif /* PLAYER_H_ */
