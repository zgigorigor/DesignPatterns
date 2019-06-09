#include "Window.h"
#include "GameState.h"


Window* Window::instance = 0;

Window* Window::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Window();
		return instance;
	}
	else
	{
		return instance;
	}
}

std::string Window::getWindowName()
{
	return "Moj Singleton prozor";
}

void Window::update()
{
	GameState* gameState = new GameState();

	while (this->renderContext->isOpen())
	{
		sf::Event event;
		while (this->renderContext->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				this->renderContext->close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::T))
		{
			gameState->instantiateObject("Triangle");
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
		{
			gameState->instantiateObject("Rectangle");
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Q))
		{
			gameState->changeState(GAME_OVER);
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			gameState->changeState(GAME_RESTARTED);
		}

		gameState->update();
		this->renderContext->clear();
		this->renderContext->display();
	}
}

Window::Window()
{
	renderContext = new sf::RenderWindow(sf::VideoMode(800, 600), this->getWindowName());
}


Window::~Window()
{
}
