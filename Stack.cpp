#include "Stack.hpp"
#include <iostream>


void Stack::push(Element e)
{
	if(n==10)
	{
		for(size_t j = 0; j < 9; j++)
			a[j]=a[j+1];
		*(i-1)=e;
	}
	else
	{
		*i=e;
		i++;
		n++;
	}
}

void Stack::pop()
{
	i--;
	n--;
}

Element& Stack::top()
{
	return *(i-1);
}

int Stack::size()
{
	return n;
}


void Stack::print(bool b, Element* j)
{
	if(j==nullptr) j=a;
	if(b)
	{
		(*j).Element::print();
		if(j!=i-1)
			Stack::print(true, j+1);
	}
	else
	{
		if(j!=i-1)
			Stack::print(false,j+1);
		(*j).Element::print();
	}	
}
