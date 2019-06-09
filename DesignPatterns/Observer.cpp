#include "Observer.h"

Observer::Observer()
{
}

Observer::~Observer()
{
}

void Observer::notify()
{
	this->update(_observerState);
}

void Observer::update(int state)
{
	std::cout << "My Current state is: " << state << std::endl;
}

void Observer::changeState(int state)
{
	this->_observerState = state;
	this->notify();
}
