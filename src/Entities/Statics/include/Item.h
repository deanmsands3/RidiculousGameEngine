/*
 * Item.h
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#ifndef ITEM_H_
#define ITEM_H_

#include "Entities/Entity.h"

namespace enDJIN {

class Item: public Entity {
public:
	Item(std::string filename);
	virtual ~Item();
};

} /* namespace enDJIN */

#endif /* ITEM_H_ */
