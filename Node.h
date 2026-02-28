#pragma once

#include <SFML/Graphics.hpp>

class Node
{
	double m_value;
	double m_weight;
	sf::Vector2f m_position; //x,y
	double m_size;

	public:
		Node();
		Node(double value, double weight, sf::Vector2f position);
		double getValue() const;
		double getWeight() const;
		double getSize() const;
		void setSize(double size) { m_size = size; }
		void setPosition(sf::Vector2f position) { m_position = position; }
		sf::Vector2f getPosition() const;
};