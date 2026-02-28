#include <iostream>
#include "imgui.h"
#include "imgui-SFML.h"
#include <SFML/Graphics.hpp>

#include "App.h"


int main()
{
	App app;

	Node n({ 1, 2 });
	Node n2({ 2, 3 });

	app.addNode(n);
	app.addNode(n2);

	Node n3({ 3, 4 });
	std::vector<Node> layer2{ n3 };
	app.addLayer({layer2});

	app.run();
}