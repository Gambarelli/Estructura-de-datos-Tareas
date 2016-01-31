// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <array>

using namespace std;
 
struct restaurante
{	

	string nombre;
	int score;
	string tipo;
};

restaurante sanpedrosula[20];

void ImprimirRestaurantes()
{
	for (int i = 0; i < 20;i++)
	{
		cout << sanpedrosula[i].nombre<< "";
		cout << sanpedrosula[i].score << "";
		cout << sanpedrosula[i].tipo << "";
		cout << endl;
	}
	
}

int main()
{
	cout << "Ingrese los mejores restaurantes en San Pedro Sula y sus atributos";
	cout << endl;

	for (int i = 0; i < 20; i++)
	{
		cout << "Ingrese el Nombre del Restaurante";
		
		cin >> sanpedrosula[i].nombre;
		cout << endl;
		cout << "Ingrese la puntuacion del Restaurante";

		cin >> sanpedrosula[i].score;
		cout << endl;

		cout << "Ingrese el tipo del Restaurante";

		cin >> sanpedrosula[i].tipo;

		cout << endl;

		cout << "Desea continuar?";
		string res;
		cin >> res;
		if (res != "Y")
		break;

	}

	cout << "Desea imprimir los restaurantes";
	string y="y";
	cin >> y;

	if (y == "y")
		ImprimirRestaurantes();


  return 0;
}

