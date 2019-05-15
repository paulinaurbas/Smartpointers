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
	std::cout << "nowa wartosc : " << *wsk << std::endl;
	delete wsk;
}

void smartZadanie1()
{
	auto ptr = std::make_unique<int>(3); 
	std::cout << "adres " << ptr.get() << std::endl;
	std::cout << "wartosc " << *ptr << std::endl;
	std::cout << " ZMIANA WARTOSCI " << std::endl;
	*ptr = 47;
	std::cout << "nowa wartosc : " << *ptr << std::endl;
}


int main()
{
	zadanie1();
	smartZadanie1();
}


