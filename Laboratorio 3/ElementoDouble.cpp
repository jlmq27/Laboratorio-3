/*
 * ElementoInt.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */
#include "stdafx.h"
#include "ElementoDouble.h"

ElementoDouble::ElementoDouble(double i) :
		i(i) {
}

ElementoDouble::~ElementoDouble() {
}

int ElementoDouble::compareTo(Elemento * otro) {
	int cmp = 0;
	ElementoDouble * eInt = static_cast<ElementoDouble *>(otro);
	if (eInt != 0) {
		cmp = this->i < eInt->i ? -1 : this->i == eInt->i ? 0 : 1;
	}
	return cmp;
}

void ElementoDouble::imprimir(ostream& out) const {
	out << i;
}
