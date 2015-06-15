/*
 * ElementoPersona.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#include "stdafx.h"
#include "ElementoPersona.h"

ElementoPersona::ElementoPersona(int id,string nombre) :
		id(id),nombre(nombre) {
}

ElementoPersona::~ElementoPersona() {
}

int ElementoPersona::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoPersona * eInt = static_cast<ElementoPersona *>(otro);
	if (eInt != 0) {
		cmp = this->id < eInt->id ? -1 : this->id == eInt->id ? 0 : 1;
	}
	return cmp;
}

void ElementoPersona::imprimir(ostream& out) const {
	out << id;
}
