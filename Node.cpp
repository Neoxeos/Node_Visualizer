#include "Node.h"

Node::Node()
{
	m_value = 0;
	m_weight = 0;
	m_position = { 0, 0 };
}

Node::Node(double value, double weight, sf::Vector2f position)
{
	m_value = value;
	m_weight = weight;
	m_position = position;
}

double Node::getValue() const
{
	return m_value;
}

double Node::getWeight() const
{
	return m_weight;
}

double Node::getSize() const
{
	return m_size; 
}

void Node::setSize(double size)
{
	m_size = size;
}

void Node::setPosition(sf::Vector2f position)
{
	m_position = position;
}

sf::Vector2f Node::getPosition() const
{
	return m_position;
}

