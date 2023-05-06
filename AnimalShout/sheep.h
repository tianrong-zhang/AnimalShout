#pragma once
#include "livestock.h"

class sheep : public livestock
{
public:
	virtual void draw();
	virtual void shout();
	virtual void move(int x, int y);
};

