#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "GameObject.h"

class Triangle : public GameObject
{
public:
	void update();
	void attach(Observer* observer);
	Triangle();
	~Triangle();
};

#endif // !TRIANGLE_H
