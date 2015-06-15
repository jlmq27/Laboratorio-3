/*
 * Main.cpp
 *
 */
#include "stdafx.h"

#include "ArbolBinario.h"
#include "Elemento.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char **argv) {

	srand(time(NULL));

	ArbolBinario a;
	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoInt(rand() % 100));
	}

	ArbolBinario b;
	for (int i = 0; i < 3; ++i) {
		b.insertarElemento(new ElementoDouble(2.1));
		b.insertarElemento(new ElementoDouble(3.5));
		b.insertarElemento(new ElementoDouble(4.8));
    }

	ArbolBinario c;
		c.insertarElemento(new ElementoPersona(5, "juan"));
		c.insertarElemento(new ElementoPersona(3, "pedro"));
		c.insertarElemento(new ElementoPersona(7,"jorge"));


    cout << "Arbol Int: " << endl;
	cout << a << endl;
	cout << "Arbol Double: " << endl;
	cout << b << endl;
	cout << "Arbol Persona: " << endl;
	cout << c << endl;

	return 0;
}
