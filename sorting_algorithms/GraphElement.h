/*
* element.h : This file is the header for 'element' class. This class draws element
  in the array into the screen with help of SFML
*/
#include <SFML/Graphics.hpp>
#include <stdlib.h> // for rand


#pragma once
class GraphElement
{
public:
	// default constructure
	GraphElement();

	/*
		constructor for element class
		@param const length: this is length of the rectangle which represent the integer
		@param const width: width of the body
		@param index: index in the array
		@param cosnt currYPosition: base of the graph
	*/
	GraphElement(const float height, const float width, int index, const float currYPosition);
	
	// deconstructure
	~GraphElement();

	// copy Constructure
	GraphElement(const GraphElement &newElement);

	// assignment Constructure
	GraphElement& operator = (const GraphElement &newElement);

	// sets position
	void SetPosition(float x, float y) { body.setPosition(sf::Vector2f(x, y)); }

	// returns body position
	const sf::Vector2f GetPosition() { return body.getPosition(); }

	// sets size
	void SetSize(float x, float y) { body.setSize(sf::Vector2f(x, y)); }

	// returns body Size
	const sf::Vector2f GetSize() { return body.getSize(); }

	// sets index and updates Position
	void SetIndex(int newIndex);

	// gets index 
	const int GetIndex() { return this->index; }
	
	// gets length 
	const int GetLength() { return this->body.getSize().y; }

	/*
		UpdatePosition member function updates the current position
	*/
	void UpdatePosition();

	/*
		Draw member function draws the body onto the screen
		@param &window: passes the window as reference
	*/
	void Draw(sf::RenderWindow& window);

private:
	sf::RectangleShape body;
	sf::RectangleShape originBody;
	int index;
};

