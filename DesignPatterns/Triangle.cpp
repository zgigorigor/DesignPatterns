#include "Triangle.h"

Triangle::Triangle()
{
}


Triangle::~Triangle()
{
}

void Triangle::update()
{
	
}

void Triangle::attach(Observer * observer)
{
	observers.push_back(observer);
}
