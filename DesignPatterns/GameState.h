#ifndef GAMESTATE_H
#define GAMESTATE_H
#define GAME_OVER 0
#define GAME_RESTARTED 1

#include <iostream>
#include <vector>
#include "GameObject.h"

class GameState
{
public:
	std::vector<GameObject*> gameObjects;

	GameState();
	~GameState();
	
	void update();
	GameObject* instantiateObject(std::string objectType);
	void registerObject(GameObject* object);
	void changeState(int state);

private:
	std::vector<Observer*> _gameObservers;
};

#endif // !GAMESTATE_H
