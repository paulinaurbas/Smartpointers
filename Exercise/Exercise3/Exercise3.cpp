#include "pch.h"
#include <memory>
#include <iostream>

void zadanie1()
{
	int *wsk = new int(89);
	std::cout << "adres " << wsk << std::endl;
	std::cout << "wartosc " << *wsk << std::endl;
	std::cout << " ZMIANA WARTOSCI " << std::endl;
	*wsk = 47;
	std::cout << "nowa wartosc : " <<  *wsk << std::endl;
	delete wsk;
}
//ZADANIE PIERWSZE 
// napisz funkcje smartZadanie1() 
//funkcja ta ma być lustrzanym odbiciem funckji zadanie1 ale proszę wykorzystać unique_pointer'a zamiast zwykłego wskaźnika 

void smartZadanie1()
{
	//tutaj rozwiązanie 
}

	
int main()
{
	zadanie1();
	smartZadanie1();
}

