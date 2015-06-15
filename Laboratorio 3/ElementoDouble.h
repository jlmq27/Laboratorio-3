/*
 * ElementoPersona.h
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#ifndef ELEMENTODOUBLE_H_
#define ELEMENTODOUBLE_H_

#include "Elemento.h"

#include <iostream>
using namespace std;

class ElementoDouble : public Elemento {

private:
	double i;

public:
	ElementoDouble(double i);
	~ElementoDouble();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};

#endif /* ELEMENTODOUBLE_H_ */
