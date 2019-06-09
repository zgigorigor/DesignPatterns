#include "GameState.h"

GameState::GameState()
{
}

GameState::~GameState()
{
}

void GameState::update()
{
	for (auto object : GameState::gameObjects)
	{
		object->update();
	}
}

GameObject* GameState::instantiateObject(std::string objectType)
{
	GameObject* object = GameObject::create(objectType);
	Observer* observer = new Observer();
	object->attach(observer);
	this->registerObject(object);
	_gameObservers.push_back(observer);
	return object;
}

void GameState::registerObject(GameObject* object)
{
	gameObjects.push_back(object);
}

void GameState::changeState(int state)
{
	for (auto observer : _gameObservers)
	{
		observer->changeState(state);
	}
}
