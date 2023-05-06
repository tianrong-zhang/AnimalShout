#include "pig.h"

void pig::draw()
{
	IMAGE img;
	loadimage(&img, L"assets/pig.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void pig::shout()
{
	PlaySound(L"assets/pig.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void pig::move(int x, int y)
{
	m_x = x;
	m_y = y;
}