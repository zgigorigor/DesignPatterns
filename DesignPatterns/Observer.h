#ifndef OBSERVER_H
#define	OBSERVER_H
#include <iostream>

class Observer
{
public:
	Observer();
	~Observer();
	
	void notify();
	void update(int state);
	void changeState(int state);
private:
	int _observerState;
};

#endif // !1
