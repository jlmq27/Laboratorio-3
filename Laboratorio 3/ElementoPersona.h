/*
 * ElementoPersona.h
 *
 *  Created on: May 8, 2015
 *      Author: b03979
 */

#ifndef ELEMENTOPERSONA_H_
#define ELEMENTOPERSONA_H_

#include "Elemento.h"

#include <iostream>
#include <cstdlib>

using namespace std;

class ElementoPersona : public Elemento {

private:
	int id;
	string nombre;

public:
	ElementoPersona(int i, string nombre);
	~ElementoPersona();
	int compareTo(Elemento *);
	void imprimir(ostream &) const;

};


#endif /* ELEMENTOPERSONA_H_ */
