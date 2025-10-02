#include "Persona.hpp"
#include <iostream>
using namespace std;
int Persona::contador = 1;

Persona::Persona(int edad, bool genero) : edad(edad), genero(genero){
	
	generarDNI();
	
}


Persona::~Persona(){}

int Persona::getEdad() const{
	
return edad;
}

bool Persona::esMujer() const {
	return genero;
}

void Persona::setEdad(int nuevaEdad){
	
	edad = nuevaEdad;
}

void Persona::mostrar() const {
	
	cout << "DNI: " << dni << endl;
	cout << "Edad: " << edad << endl;
	cout << "Genero: " << (genero ? "Mujer": "Hombre") << endl;
		
	
}

void Persona::generarDNI(){
		
	int numero = contador++;
	char letra = 'A' + (numero % 26);
	snprintf(dni, sizeof(dni), "%08d%c", numero, letra);
	
	
}