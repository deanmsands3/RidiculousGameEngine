/*
 * Item.h
 *
 *  Created on: Sep 15, 2014
 *      Author: Dean
 */

#ifndef ITEM_H_
#define ITEM_H_

#include "Entities/Entity.h"

class Item: public Entity {
public:
	Item(const std::string &filename);
	virtual ~Item();
};

#endif /* ITEM_H_ */
