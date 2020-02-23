/*
 * AssetManager.h
 *
 *  Created on: Mar 10, 2018
 *      Author: deansands
 */

#ifndef ASSETMANAGER_H_
#define ASSETMANAGER_H_
#include <unordered_map>
#include <string>
#include <cstdint>
#include <mutex>
#include <fstream>
#include "ByteArray.h"
//#include "Logger.h"
#include "nlohmann/json.hpp"

using json = nlohmann::json;




class AssetManager {
	unsigned int _i;
	std::mutex _lock;
	std::unordered_map<std::string, unsigned int> _strings_ids;
	std::unordered_map<unsigned int, std::string> _ids_strings;
	std::unordered_map<unsigned int, ByteArray*> _ids_assets;
	void _free_asset(unsigned int asset_id, std::string asset_name);
	static ByteArray* _load_asset(std::string file_name);
	void _lock_up();
	void _unlock();
public:
	unsigned int push_asset(std::string file_name, std::string asset_name);
	ByteArray* get_asset(unsigned int asset_id);
	ByteArray* get_asset(std::string asset_name);
	virtual void free_asset(unsigned int asset_id);
	virtual void free_asset(std::string asset_name);
	AssetManager(std::string index);
	AssetManager(const AssetManager &that);
	AssetManager(const AssetManager *that);
	virtual ~AssetManager();
}; //AssetManager

class TextureManager{

};

#endif /* ASSETMANAGER_H_ */
