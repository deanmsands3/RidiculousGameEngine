/*
 * ConfigPlatform.h
 *
 *  Created on: Jul 10, 2020
 *      Author: deanm
 */

#ifndef SRC_CONFIGURATOR_INCLUDE_CONFIGPLATFORM_H_
#define SRC_CONFIGURATOR_INCLUDE_CONFIGPLATFORM_H_

#include <filesystem>

class ConfigPlatform {
public:

	std::filesystem::path getUserFolder();
	std::filesystem::path getConfigFolder();
	std::filesystem::path getConfigFilePath();

	ConfigPlatform();
	virtual ~ConfigPlatform();
	ConfigPlatform(const ConfigPlatform &other);
	ConfigPlatform(ConfigPlatform &&other);
	ConfigPlatform& operator=(const ConfigPlatform &other);
	ConfigPlatform& operator=(ConfigPlatform &&other);
};



extern ConfigPlatform configPlatformLinux;
extern ConfigPlatform configPlatformMacOSX;
extern ConfigPlatform configPlatformWindows;

#endif /* SRC_CONFIGURATOR_INCLUDE_CONFIGPLATFORM_H_ */
