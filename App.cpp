#include "App.h"
#include <iostream>

App::App()
{
	int windowWidth = 1040;
	int windowHeight = 820;
	m_window.create(sf::VideoMode(windowWidth, windowHeight), "Node Visualizer");
	m_window.setFramerateLimit(60);
}


void App::run()
{
	while (m_running)
	{
		draw();
	}
} 

void App::draw()
{
	m_window.clear();
	for (int i = 0; i < m_nodes.size(); i++)
	{
		for (int j = 0; j < m_nodes[i].size(); j++)
		{
			sf::CircleShape node(15);
			node.setPosition({ 10.f + i*50, 20.f + j*40 });
			m_window.draw(node);
		}
	}
	m_window.display();
}

void App::addNode(Node& node)
{
	if (m_nodes.empty())
	{
		m_nodes.push_back( { node } );
	}
	else if (m_nodes[m_nodes.size()-1].size() >= 10)
	{
		m_nodes.push_back( { node } );
	}
	else
	{
		m_nodes[m_nodes.size()-1].push_back(node);
	}
}
