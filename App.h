#pragma once

#include <vector>
#include <SFML/Graphics.hpp>

struct Node {
	int value;
	int weights;
};

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
	void run();
};