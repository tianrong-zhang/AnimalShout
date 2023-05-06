#include "dog.h"

void dog::draw()
{
	IMAGE img;
	loadimage(&img, L"assets/dog.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void dog::shout()
{
	PlaySound(L"assets/dog.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void dog::move(int x, int y)
{
	m_x = x;
	m_y = y;
}