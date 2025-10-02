#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <stdio.h>
#include <string.h>

class Persona{
	
private:
	bool genero;
	int edad;
	char dni[10];
	
	static int contador;
	
public:

	Persona(int edad, bool genero);
	~Persona();
	
	int getEdad() const;
	bool esMujer() const;
	void setEdad(int nuevaEdad);
	void mostrar() const;
	
private:
	void generarDNI();
	
};

#endif