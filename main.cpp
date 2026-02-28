#include <iostream>
#include "imgui.h"
#include "imgui-SFML.h"
#include <SFML/Graphics.hpp>

#include "App.h"


int main()
{
	App app;

	for (unsigned i = 0; i < 30; ++i)
	{
		Node newNode{ i, i * 2 };
		app.addNode(newNode);
	}

	app.run();
}