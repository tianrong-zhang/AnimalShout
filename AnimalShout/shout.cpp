#include <iostream>
#include "easyx.h"
#include "livestock.h"
#include "cattle.h"
#include "dog.h"
#include "hen.h"
#include "horse.h"
#include "pig.h"
#include "sheep.h"

int main()
{
	initgraph(640, 480);
	livestock* pls[] = {
		new cattle(),
		new dog(),
		new hen(),
		new horse(),
		new pig(),
		new sheep()
	};
	int pos[][3] = {
		{0, 0}, {200, 0}, {400, 0},
		{0, 200}, {200, 200}, {400, 200}
	};
	int length = std::end(pls) - std::begin(pls);
	for (int i = 0; i < length; ++i) {
		pls[i]->move(pos[i][0], pos[i][1]);
		pls[i]->draw();
	}

	ExMessage m;
	while (!(GetAsyncKeyState(VK_ESCAPE) & 0x8000)) {
		m = getmessage();
		if (m.message == WM_LBUTTONDOWN) {
			for (int i = 0; i < length; ++i) {
				pls[i]->draw();
			}
			for (int i = 0; i < length; ++i) {
				if ((pos[i][0] < m.x && m.x < pos[i][0] + 200) && (pos[i][1] < m.y && m.y < pos[i][1] + 200)) {
					setlinecolor(0x800000);
					rectangle(pos[i][0] + 1, pos[i][1] + 1, pos[i][0] + 198, pos[i][1] + 198);
					pls[i]->shout();
					break;
				}
			}
		}
	}
	for (int i = 0; i < length; ++i) {
		delete pls[i];
	}
	closegraph();
	system("pause");
	return 0;
}