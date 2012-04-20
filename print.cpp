#include "print.hpp"
#include <iostream>

void
print(
	klasse &k1,
	klasse &k2)
{
	std::cout << "In print\n";
	std::cout << "|" << k1.getI() << "|";
	k1.increase();
	std::cout << "|" << k2.getI() << "|";
	std::cout << "|" << k1.getI() << "|";
}
