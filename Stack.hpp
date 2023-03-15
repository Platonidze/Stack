#include "Element.hpp"

class Stack
{
	Element a[10];
	Element* i =a;
	int n = 0;
public: 
	void push(Element e);
	void pop();
	Element& top();
	int size();
	void print(bool b = true, Element* j = nullptr);
};

