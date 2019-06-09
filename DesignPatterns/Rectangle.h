#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "GameObject.h"

class Rectangle : public GameObject
{
public:
	void update();
	void attach(Observer* observer);
	Rectangle();
	~Rectangle();
};

#endif // !RECTANGLE_H

