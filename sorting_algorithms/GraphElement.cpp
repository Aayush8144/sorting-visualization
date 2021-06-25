#include "GraphElement.h"

GraphElement::GraphElement()
{
	//setting index to 0
	this->index = 0;

	// sets size to 0,0
	body.setSize(sf::Vector2f(0.f, 0.f));

	// sets position to 0,0
	body.setPosition(sf::Vector2f(0.f,0.f));

	// setting origin to 0,0
	body.setOrigin(sf::Vector2f(0.f,0.f));

	// setting a random fill color
	body.setFillColor(sf::Color(rand() / 256, rand() / 256, rand() / 256, 255));

	// setting up origin body 
	// setting size to 0,0
	originBody.setSize(sf::Vector2f(0.f,0.f));
	
	// setting origin to 0,0
	originBody.setOrigin(sf::Vector2f(0.f,0.f));
	
	// setting origin to 0,0
	originBody.setPosition(sf::Vector2f(0.f, 0.f));
	
	// setting origin to 0,0
	originBody.setFillColor(sf::Color(255, 255, 255, 100));
}

GraphElement::GraphElement(const float height, const float width, int index=0, float currYPosition = 150)
{
	//setting index to index;
	this->index = index;
	
	// sets size according to the int value it represents and the width
	// the width depends on window width and number of element on screen
	// each element have the same width 
	// GraphElement shape(1111, 30, 5, 10);
	body.setSize(sf::Vector2f(width, height));

	// sets position to accoring to graph 00 posiiton and its index
	body.setPosition(sf::Vector2f(this->index * body.getSize().x, currYPosition));

	// setting origin to bottom left corner
	body.setOrigin(sf::Vector2f(0,body.getSize().y)); 

	// setting a random fill color
	body.setFillColor(sf::Color(rand() / 256, rand() / 256, rand() / 256, 255));

	// setting up originBody
	// setting originsize to 20,20
	originBody.setSize(sf::Vector2f(20.f, 20.f));
	
	// setting originBody oigin to the lower left of the originBody
	originBody.setOrigin(sf::Vector2f(0, originBody.getSize().y));
	
	// setting originBody position to the lower left of the body
	originBody.setPosition(body.getPosition());

	// setting originBody color to pale White
	originBody.setFillColor(sf::Color(255, 255, 255, 100));

}

GraphElement::~GraphElement()
{
}

GraphElement::GraphElement(const GraphElement& newElement)
{
	//setting index to index;
	this->index = newElement.index;

	// setting body size equal to newElement
	this->body.setSize(newElement.body.getSize());

	// setting position equal to newElement
	this->body.setPosition(newElement.body.getPosition());

	// setting origin to bottom left corner which is where newElement's is
	this->body.setOrigin(newElement.body.getOrigin());

	// setting color identical to newElement
	this->body.setFillColor(newElement.body.getFillColor());

	// setting up origin body
	// copying originBody size from newElement
	this->originBody.setSize(newElement.originBody.getSize());
	
	// copying originBody origin from newElement
	this->originBody.setOrigin(newElement.originBody.getOrigin());
	
	// copying originBody position from newElement
	this->originBody.setPosition(newElement.originBody.getPosition());
	
	// copying originBody color from newElement
	this->originBody.setFillColor(newElement.originBody.getFillColor());
}

GraphElement& GraphElement::operator=(const GraphElement& newElement)
{
	//setting index to index;
	this->index = newElement.index;

	// setting body size equal to newElement
	this->body.setSize(newElement.body.getSize());

	// setting position equal to newElement
	this->body.setPosition(newElement.body.getPosition());

	// setting origin to bottom left corner which is where newElement's is
	this->body.setOrigin(newElement.body.getOrigin());

	// setting color identical to newElement
	this->body.setFillColor(newElement.body.getFillColor());

	// setting up origin body
	// copying originBody size from newElement
	this->originBody.setSize(newElement.originBody.getSize());

	// copying originBody origin from newElement
	this->originBody.setOrigin(newElement.originBody.getOrigin());
	
	// copying originBody position from newElement
	this->originBody.setPosition(newElement.originBody.getPosition());
	
	// copying originBody color from newElement
	this->originBody.setFillColor(newElement.originBody.getFillColor());
	
	return *this;
}

void GraphElement::SetIndex(int newIndex)
{
	this->index = newIndex; 
	UpdatePosition();
}

void GraphElement::UpdatePosition()
{
	SetPosition(this->index * body.getSize().x, body.getPosition().y);
	originBody.setPosition(body.getPosition());
}

void GraphElement::Draw(sf::RenderWindow& window)
{
	window.draw(body);
	//window.draw(originBody);
}
