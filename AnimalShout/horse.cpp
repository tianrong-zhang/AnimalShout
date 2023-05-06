#include "horse.h"

void horse::draw()
{
	IMAGE img;
	loadimage(&img, L"assets/horse.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void horse::shout()
{
	PlaySound(L"assets/horse.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void horse::move(int x, int y)
{
	m_x = x;
	m_y = y;
}