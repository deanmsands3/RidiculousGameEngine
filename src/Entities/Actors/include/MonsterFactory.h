/*
 * MonsterFactory.h
 *
 *  Created on: Nov 22, 2014
 *      Author: dean
 */

#ifndef MONSTERFACTORY_H_
#define MONSTERFACTORY_H_
#include <unordered_map>
#include <string>
#include <json/json.h>
#include "Monster.h"

namespace enDJIN {

class MonsterFactory {
	std::unordered_map<std::string, Monster> mapOfMonsterTemplates;
public:
	MonsterFactory(Json::Value *JV);
	virtual ~MonsterFactory();
};

}; /* namespace enDJIN */

#endif /* MONSTERFACTORY_H_ */
