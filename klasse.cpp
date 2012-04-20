#include "klasse.hpp"
#include <iostream>

klasse::klasse()
:
	i(0)
{
}

int const &
klasse::getI() const
{
	std::cout << "getI: " << i << "\n";
	return i;
}

void
klasse::increase()
{
	i++;
}
