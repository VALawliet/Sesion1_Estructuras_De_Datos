#include <iostream>
using namespace std;


int cuadrado(int x){
	
	return x * x;
	
}

void cuadrado(char c){
	
	cout << c << c << endl;
	cout << c << c << endl;
	return;
	
}


int main(int argc, char **argv)
{
	cout << "usamos la funcion para elevar al cuadrado" << endl;
	cout <<  cuadrado(12) << endl;
	cout << "Ahora la usamos para pintar un cuadrado con un caracter" << endl;
	cuadrado('*');
	return 0;
}
