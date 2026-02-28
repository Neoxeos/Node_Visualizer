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
	for (unsigned i = 0; i < m_nodes.size(); i++)
	{
		for (unsigned j = 0; j < m_nodes[i].size(); j++)
		{
			Node node = m_nodes[i][j];
			sf::CircleShape n(node.getSize());
			n.setPosition(node.getPosition());
			n.setFillColor(sf::Color(150, 50, 250));

			// set a 10-pixel wide orange outline
			n.setOutlineThickness(2.f);
			n.setOutlineColor(sf::Color(250, 150, 100));

			if (i > 0)
			{
				// need to draw edges here
				for (unsigned k = 0; k < m_nodes[i - 1].size(); k++)
				{
					sf::Vertex line[] =
					{
						sf::Vertex({ 10.f + (i - 1) * 50 + 15, 20.f + j * 40 + 15 }),
						sf::Vertex({ 10.f + i * 50, 20.f + j * 40 })
					};
					m_window.draw(line, 2, sf::Lines);
				}
			}
			m_window.draw(node);
		}
	}
	m_window.display();
}

void App::addLayer(std::vector<Node>& layer)
{
	m_nodes.push_back(layer);
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
