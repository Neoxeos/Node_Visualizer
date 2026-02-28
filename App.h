#pragma once

#include <vector>
#include "Node.h"

class App
{
private: 
	std::vector<std::vector<Node>> m_nodes;
	sf::RenderWindow m_window;
	bool m_running = true;

public:
	App();
	void draw();
	void addNode(Node& node);
	void addLayer(std::vector<Node>& layer);
	void run();
};