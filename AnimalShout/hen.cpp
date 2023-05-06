#include "hen.h"

void hen::draw()
{
	IMAGE img;
	loadimage(&img, L"assets/hen.jpg", 200, 200, true);
	putimage(m_x, m_y, &img);
}

void hen::shout()
{
	PlaySound(L"assets/hen.wav", NULL, SND_FILENAME | SND_ASYNC);
}

void hen::move(int x, int y)
{
	m_x = x;
	m_y = y;
}