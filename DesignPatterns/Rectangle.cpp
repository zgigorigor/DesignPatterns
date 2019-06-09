#include "Rectangle.h"

Rectangle::Rectangle()
{
}


Rectangle::~Rectangle()
{
}


void Rectangle::update()
{
	
}

void Rectangle::attach(Observer* observer)
{
	observers.push_back(observer);
}
