#include <iostream>
#include "Element.hpp"
Element::Element()
{
	a=0; b=0;
}

Element::Element(int A, double B)
{
	a=A; b=B;
}
int& Element::get_first()
{
	return a;
}
double& Element::get_second()
{
	return b;
}
void Element::print()
{
	std::cout << "(" << a << ", " << b << ")" << std::endl;
}

