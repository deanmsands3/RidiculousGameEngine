/*
 * ConfigPlatform.cpp
 *
 *  Created on: Jul 10, 2020
 *      Author: deanm
 */

#include "ConfigPlatform.h"

std::filesystem::path getUserFolder(){
	return std::filesystem::path(".");
}

std::filesystem::path getConfigFolder(){
	return std::filesystem::path(".");
}

std::filesystem::path getConfigFilePath(){
	return std::filesystem::path(".");
}

ConfigPlatform::ConfigPlatform() {
	// TODO Auto-generated constructor stub

}

ConfigPlatform::~ConfigPlatform() {
	// TODO Auto-generated destructor stub
}

ConfigPlatform::ConfigPlatform(const ConfigPlatform &other) {
	// TODO Auto-generated constructor stub

}

ConfigPlatform::ConfigPlatform(ConfigPlatform &&other) {
	// TODO Auto-generated constructor stub

}

ConfigPlatform& ConfigPlatform::operator=(const ConfigPlatform &other) {
	// TODO Auto-generated method stub

}

ConfigPlatform& ConfigPlatform::operator=(ConfigPlatform &&other) {
	// TODO Auto-generated method stub

}

