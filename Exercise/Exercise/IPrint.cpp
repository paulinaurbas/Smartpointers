#include "pch.h"
#include <iostream>
#include "IPrint.h"
std::ostream &operator<<(std::ostream &os, const IPrint &obj) {
	obj.Print(os);
	return os;
}