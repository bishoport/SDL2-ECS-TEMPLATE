#pragma once

#include "Components.h"
#include "../Vector2.h"

class TransformComponent : public Component
{

public:
	
	Vector2 position;

	TransformComponent()
	{
		position.x = 0.0f;
		position.y = 0.0f;
	}

	TransformComponent(int x, int y)
	{
		position.x = x;
		position.y = y;
	}

	void update() override
	{
		
	}


	//int x() { return xpos; }
	//void x(int x) { xpos = x; }
	//int y() { return ypos; }
	//void y(int y) { ypos = y; }

	//void setPos(int x, int y)
	//{
	//	xpos = x;
	//	ypos = y;
	//}
};