/*
 * EntityManager.h
 *
 *  Created on: Mar 22, 2018
 *      Author: deansands
 */

#ifndef SRC_ENTITYMANAGER_H_
#define SRC_ENTITYMANAGER_H_
#include "Entity.h"
#include <memory>
#include <AssetManager.h>

//struct IEntity {
//    Entity* _e;
//    IEntity(Entity* e) :_e(e) {}
//    bool operator!=(IEntity rhs) {return _e != rhs._e;}
//    Entity& operator*() {return *_e;}
//    void operator++() {++_e;}
//};

class EntityManager{
  std::vector<std::string> _files;
  std::unordered_map<unsigned int, Entity*> _entities;
  std::shared_ptr<AssetManager> _asset_manager;

public:
  unsigned int getSize() const;
  void set(unsigned index, Entity* entity);

  std::unordered_map<unsigned int, Entity*>::iterator begin();
  std::unordered_map<unsigned int, Entity*>::iterator end();
  EntityManager(std::shared_ptr<AssetManager> asset_manager);
  virtual ~EntityManager();
};


#endif /* SRC_ENTITYMANAGER_H_ */
