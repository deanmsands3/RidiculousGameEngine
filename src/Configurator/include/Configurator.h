/*
 * Configurator.h
 *
 *  Created on: Jul 10, 2020
 *      Author: deanm
 */

#ifndef SRC_CONFIGURATOR_INCLUDE_CONFIGURATOR_H_
#define SRC_CONFIGURATOR_INCLUDE_CONFIGURATOR_H_

class Configurator {
public:
	Configurator();
	virtual ~Configurator();
	Configurator(const Configurator &other);
	Configurator(Configurator &&other);
	Configurator& operator=(const Configurator &other);
	Configurator& operator=(Configurator &&other);
};

#endif /* SRC_CONFIGURATOR_INCLUDE_CONFIGURATOR_H_ */
