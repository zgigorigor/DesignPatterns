#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <iostream>
#include <string>
#include <vector>
#include "Observer.h"

class GameObject
{
public:
	static GameObject* create(std::string type);
	virtual void update() = 0;
	virtual void attach(Observer* observer) = 0; 
	GameObject();
	
	~GameObject();
protected:
	int state;
	std::vector<Observer*> observers;
};

#endif // !SHAPE_H
