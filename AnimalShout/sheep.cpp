#include "sheep.h"

void sheep::draw()
{
	IMAGE img;
	loadimage(&img, L"assets/sheep.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void sheep::shout()
{
	PlaySound(L"assets/sheep.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void sheep::move(int x, int y)
{
	m_x = x;
	m_y = y;
}