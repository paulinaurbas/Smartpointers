#pragma once
#include <iostream>
class IPrint
{
	friend std::ostream &operator<<(std::ostream &os, const IPrint &obj);
public:
	virtual void Print(std::ostream &os) const = 0;
	virtual ~IPrint() = default;
};