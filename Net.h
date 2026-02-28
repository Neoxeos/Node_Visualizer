#pragma once


#include "Node.h"

class Net
{
	std::vector<std::vector<Node>> m_nodes;

public:
	void addInputNode(Node& node);
	void addLayer(std::vector<Node>& layer);
	void addToLayer(int layerIndex, Node& node);
	std::vector<std::vector<Node>> getNodes() const { return m_nodes; }
};