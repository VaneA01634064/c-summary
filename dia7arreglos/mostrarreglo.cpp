/*
Ejercicio 3: Escribe un programa que lea de la entrada est�ndar un vector de n�meros y muestre en la salida est�ndar los n�meros del vector con sus �ndices asociados.

#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	int numeros[100];//se deja un numeero grande porque no sabemos cuantos nos va a dictar
	int n;

	cout << "Digite el numero de elemntos del arreglo "; cin >> n;

	for (int i = 0; i < n; i++) {//n numero de elementos del vector
		cout << "Digite un numero: "; cin >> numeros[i];//guardando todos los elementos del vector
	}
	//ahpra vamos a mostrar los elementos con sus inidices asociados
	for (int i = 0; i < n; i++) {//n numero de elementos del vector
		
		cout <<i<<"->" << numeros[i] << endl;
	}
	int getch();
	return 0;
}*/