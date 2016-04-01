// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdlib.h"
#include "iostream"

using namespace std;

void getline(istream cin, string cs);

int main()
{

		string* titulos = NULL;
		string* autores = NULL;

		int tamanio;

		cout << "Cuantos libros desea ingresar?";

		string entrada;

		cin >> tamanio;

		titulos = new string[tamanio];
		autores = new string[tamanio];

		cout << "Por favor ingrese la siguiente información de los Libros: \n";
		for (int i = 0; i < tamanio; i++)
		{
			cout << "\n******* Libro " << i + 1 << "********:\n";
			cout << "Titulo: ";

			getline(cin, titulos[i]);
			cout << "Autor: ";

			getline(cin, autores[i]);
		}

		delete[] titulos;
		delete[] autores;
		titulos = NULL;
		autores = NULL;



    return 0;
}

