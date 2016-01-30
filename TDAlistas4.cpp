// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <list>


using namespace std;





int main()
{
	int numeros[] = { 1,2,5,5,6,8,2,12,3,7,1,11,14,4,9 };
	std::list<int> cartas(numeros, numeros + sizeof(numeros) / sizeof(int));
	cartas.sort();
	cartas.unique();

	for (std::list<int>::iterator it = cartas.begin(); it != cartas.end(); ++it)
		std::cout << ' ' << *it;



   return 0;
}

