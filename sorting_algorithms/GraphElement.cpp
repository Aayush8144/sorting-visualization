#include "GraphElement.h"

GraphElement::GraphElement(const float height, const float width, int index, float currYPosition)
{
	body.setSize(sf::Vector2f(width, height));
	body.setPosition(sf::Vector2f(index * body.getSize().x, currYPosition));
	body.setOrigin(sf::Vector2f(0,body.getSize().y));
	body.setFillColor(sf::Color(rand() / 256, rand() / 256, rand() / 256, 255));
}

GraphElement::~GraphElement()
{
}

void GraphElement::Update(int newPosition)
{
	SetPosition(newPosition * body.getSize().x, body.getPosition().y);
}

void GraphElement::Draw(sf::RenderWindow& window)
{
	window.draw(body);
}
