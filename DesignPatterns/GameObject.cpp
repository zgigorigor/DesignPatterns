#include "GameObject.h"
#include "Rectangle.h"
#include "Triangle.h"

GameObject * GameObject::create(std::string type)
{
	if (type == "Triangle")
	{
		return new Triangle();
	}
	else if (type == "Rectangle")
	{
		return new Rectangle();
	}
}

GameObject::GameObject()
{
}


GameObject::~GameObject()
{
}
