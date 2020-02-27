/*
 * EntityManager.cpp
 *
 *  Created on: Mar 22, 2018
 *      Author: deansands
 */

#include "EntityManager.h"

EntityManager::EntityManager(
		std::shared_ptr<AssetManager> asset_manager
		):_asset_manager(asset_manager){

}

void EntityManager::set(unsigned index, Entity* entity) {
	_entities[index]=entity;
}

unsigned int EntityManager::getSize() const{
	return _entities.size();
}

//Destructor
EntityManager::~EntityManager(){}

std::unordered_map<unsigned int, Entity*>::iterator EntityManager::begin() {
	return _entities.begin();
}

std::unordered_map<unsigned int, Entity*>::iterator EntityManager::end() {
	return _entities.end();
}
