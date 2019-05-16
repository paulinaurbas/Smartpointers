// Exercise4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <memory>
#include <string>

//ZADANIE 
//A) napisz klase Person, ktora posiada imie oraz wskaznik na partnera
//B) napisz konstruktor i deskruktor z wypisywaniem na konsole (aby lepiej zobaczyc dzialanie smart pointerow)
//C) napisz funkcje Love() ktora paruje dwa obiekty typu Person tj. jeden obiekt wskazuje na drugi a drugi wskazuje na pierwszy 
//D) odkomentuj zawartosc main i zobacz czy poprawnie wykonales powyzsze zadania
//wskazowka - pamietaj aby urzyc wlasciwego rodzaju smart pointera tak aby zapobiec odniesienia cyklicznego (circular reference)


int main()
{
	//auto shrek = std::make_shared<Person>("Shrek");
	//auto fiona = std::make_shared<Person>("Fiona");

	//Love(shrek, fiona);

	return 0;
}

