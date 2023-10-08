#pragma once
#include<iostream>
#include"graphics.h"
#include"windowsetting.h"
#include<string>
#include<stdio.h>
#include"playground.h"
#include"start.h"
#include"about.h"
#include"setting.h"
#include"Load.h"
using namespace std;

void box(int x, int y, int w, int h, int t_color, int b_color, string nd) {
	textcolor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++) {
		for (int ix = x + 1; ix <= x + w - 1; ix++) {
			gotoXY(ix, iy); cout << " ";
		}
	}
	textcolor(245);
	gotoXY(x + 4, y + 1);
	cout << nd;
	textcolor(t_color);
	if (h <= 1 || w <= 1) return;
	for (int ix = x; ix <= x + w; ix++) {
		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++) {
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y); cout << char(218);
	gotoXY(x + w, y); cout << char(191);
	gotoXY(x, y + h); cout << char(192);
	gotoXY(x + w, y + h); cout << char(217);
}
//lam sang lua chon khi con tro tro toi
void mua(int m, int n, int check) {
	while (true) {
		int mcu, ncu;
		mcu = m;
		ncu = n - 1;
		textcolor(244);
		gotoXY(m, n);
		cout << "X";
		if (n == 30) {
			check = 1;
		}
		else if (n == 0 || n == 1 || n == 2 || n == 3 || n == 4) {
			check = 0;
		}
		if (check == 0) {
			n++;
		}
		else if (check == 1) {
			n = 0;
		}
		gotoXY(mcu, ncu);
		cout << " ";



		Sleep(120);




	}
}
// ve hinh nen
void vehinhnen() {
	int x, y;
	int i;
#define D char(219)
#define E char(186)
#define F char(205)
	//ve chu C 
	textcolor(187);
	for (x = 23; x <= 37; x++)
		for (y = 5; y <= 6; y++)
		{
			GoTo(x, y); cout << D;
		}
	for (x = 23; x <= 37; x++)
		for (y = 14; y <= 15; y++)
		{
			GoTo(x, y); cout << D;
		}
	for (y = 6; y <= 14; y++)
		for (x = 22; x <= 26; x++)
		{
			GoTo(x, y); cout << D;
		}
	//ve vien chu C 
	textcolor(251);
	for (y = 7; y <= 14; y++) { x = 21; GoTo(x, y); cout << E; }
	for (x = 23; x <= 35; x++) { y = 16; GoTo(x, y); cout << F; }
	GoTo(21, 6); cout << char(201);
	GoTo(21, 15); cout << char(200);
	GoTo(22, 15); cout << char(187);
	GoTo(22, 16); cout << char(200);
	GoTo(36, 16); cout << char(188);
	//ve chu A 
	for (x = 45; x <= 61; x++)
		for (y = 5; y <= 6; y++) { GoTo(x, y); cout << D; }
	for (y = 6; y <= 15; y++)
		for (x = 44; x <= 48; x++) { GoTo(x, y); cout << D; }
	for (y = 6; y <= 15; y++)
		for (x = 58; x <= 62; x++) { GoTo(x, y); cout << D; }
	for (x = 49; x <= 57; x++)
		for (y = 10; y <= 11; y++) { GoTo(x, y); cout << D; }
	//ve vien chu A 
	for (x = 49; x <= 56; x++) { y = 7; GoTo(x, y); cout << F; }
	for (x = 49; x <= 56; x++) { y = 12; GoTo(x, y); cout << F; }
	for (x = 44; x <= 47; x++) { y = 16; GoTo(x, y); cout << F; }
	for (x = 58; x <= 61; x++) { y = 16; GoTo(x, y); cout << F; }
	for (y = 7; y <= 15; y++) { x = 43; GoTo(x, y); cout << E; }
	for (y = 8; y <= 9; y++) { x = 57; GoTo(x, y); cout << E; }
	for (y = 13; y <= 15; y++) { x = 57; GoTo(x, y); cout << E; }
	GoTo(43, 6); cout << char(201);
	GoTo(43, 16); cout << char(200);
	GoTo(57, 16); cout << char(200);
	GoTo(57, 7); cout << char(187);
	GoTo(57, 12); cout << char(187);
	GoTo(47, 16); cout << char(188);
	GoTo(61, 16); cout << char(188);
	//ve chu R
	for (x = 69; x <= 83; x++)
		for (y = 5; y <= 6; y++) { GoTo(x, y); cout << D; }
	for (y = 7; y <= 15; y++)
		for (x = 69; x <= 73; x++) { GoTo(x, y); cout << D; }
	for (x = 74; x <= 83; x++)
		for (y = 10; y <= 11; y++) { GoTo(x, y); cout << D; }
	for (x = 81; x <= 85; x++)
		for (y = 6; y <= 8; y++) { GoTo(x, y); cout << D; }
	for (x = 81; x <= 84; x++) { y = 9; GoTo(x, y); cout << D; }
	for (x = 81; x <= 84; x++) { y = 11; GoTo(x, y); cout << D; }
	for (x = 81; x <= 85; x++)
		for (y = 12; y <= 15; y++) { GoTo(x, y); cout << D; }
	//ve vien chu R 
	for (x = 74; x <= 79; x++) { y = 7; GoTo(x, y); cout << F; }
	for (x = 74; x <= 79; x++) { y = 12; GoTo(x, y); cout << F; }
	for (x = 69; x <= 71; x++) { y = 16; GoTo(x, y); cout << F; }
	for (x = 81; x <= 83; x++) { y = 16; GoTo(x, y); cout << F; }
	for (y = 7; y <= 15; y++) { x = 68; GoTo(x, y); cout << E; }
	for (y = 8; y <= 9; y++) { x = 80; GoTo(x, y); cout << E; }
	for (y = 13; y <= 15; y++) { x = 80; GoTo(x, y); cout << E; }
	GoTo(68, 6); cout << char(201);
	GoTo(68, 16); cout << char(200);
	GoTo(72, 16); cout << char(188);
	GoTo(84, 16); cout << char(188);
	GoTo(80, 16); cout << char(200);
	GoTo(80, 7); cout << char(187);
	GoTo(80, 12); cout << char(187);
	//ve chu O
	for (x = 93; x <= 107; x++)
		for (y = 5; y <= 6; y++) { GoTo(x, y); cout << D; }
	for (x = 93; x <= 107; x++)
		for (y = 14; y <= 15; y++) { GoTo(x, y); cout << D; }
	for (y = 6; y <= 14; y++)
		for (x = 92; x <= 96; x++) { GoTo(x, y); cout << D; }
	for (y = 6; y <= 14; y++)
		for (x = 104; x <= 108; x++) { GoTo(x, y); cout << D; }
	//ve vien chu O
	for (y = 7; y <= 14; y++) { x = 91; GoTo(x, y); cout << E; }
	for (x = 93; x <= 105; x++) { y = 16; GoTo(x, y); cout << F; }
	for (y = 8; y <= 13; y++) { x = 103; GoTo(x, y); cout << E; }
	for (x = 97; x <= 102; x++) { y = 7; GoTo(x, y); cout << F; }
	GoTo(91, 6); cout << char(201);
	GoTo(91, 15); cout << char(200);
	GoTo(92, 15); cout << char(187);
	GoTo(92, 16); cout << char(200);
	GoTo(106, 16); cout << char(188);
	GoTo(103, 7); cout << char(187);
}
void fixkhung() {
	//fixkhung
	textcolor(245);
	for (int p = 0; p < 4; p++) {
		gotoXY(55, 20 + (p * 2) + 2);
		cout << char(195);
		gotoXY(55 + 12, 20 + (p * 2) + 2);
		cout << char(180);
	}

}
void thanhsang(int x, int y, int w, int h, int b_color) {
	textcolor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++) {
		for (int ix = x + 1; ix <= x + 1; ix++) {
			gotoXY(ix, iy); cout << " ";
			gotoXY(ix + 10, iy); cout << " ";

		}
	}


}

void menu()
{
	int y = 20;
	int x = 55;

	int b_color_sang = 13;
	box(x, y, 12, 2, 245, 244, "Start");
	box(x, y + 2, 12, 2, 245, 244, "Load");
	box(x, y + 4, 12, 2, 245, 244, "About");
	box(x, y + 6, 12, 2, 245, 244, "Setting");
	box(x, y + 8, 12, 2, 245, 244, "Exit");
	int xp = x; int yp = y;//giu toa do thanh sang
	int xcu = xp; int ycu = yp;
	bool kt = true;
	/*while (true) {

		//backspace xoa du lieu cu
		//in
		if (kt == true) {
			gotoXY(xcu, ycu);
			thanhsang(xcu, ycu, 12, 2, 245);
			xcu = xp; ycu = yp;
			thanhsang(xp, yp, 12, 2, 80);
			kt = false;
		}
		//dieu khien//di chuyen
		if (_kbhit()) {
			char c = _getch();
			if (c == -32) {
				kt = true;//da bam
				c = _getch();
				if (c == 72) {
					if (yp != y)yp -= 2;
					else {
						yp = y + 8;
					}

				}
				else if (c == 80) {
					if (yp != y + 8)yp += 2;
					else {
						yp = y;
					}

				}
			}
		}*/

}


void lenxuong() {
	int mangmenu[58][28] = { 0 };
	char m;
	int check = 0;
	int x1 = 57; int y1 = 21;
	int xet[65][33] = { 0 };
	char c;
	int flag = 0;
	int x = 4, y = 2, a = 0, b = 0;
	string name;
	while (true) {
		m = _getch();

		if (m == 's' && y1 < 29) {
			GoTo(x1, y1 += 2);
			PlaySound(TEXT("wasd.wav"), NULL, SND_ASYNC);

		}
		if (m == 'w' && y1 > 21) {
			GoTo(x1, y1 -= 2);
			PlaySound(TEXT("wasd.wav"), NULL, SND_ASYNC);
		}

		mangmenu[x1][y1] = check;
		if (m == char(13)) check = 1;
		if (mangmenu[57][21] == 1) {
			PlaySound(TEXT("ingame.wav"), NULL, SND_ASYNC);
			playground();
			//danhXO();
			while (1) {
				gotoXY(x, y);
				gotoXY(82, 10); set_color(252); cout << "STEP:";
				gotoXY(110, 10); set_color(250); cout << "STEP:";

				while (true) {

					c = _getch();
					if (c == 'a' && x > 4) GoTo(x -= 4, y);
					if (c == 'd' && x < 4 + 4 * 15) GoTo(x += 4, y);
					if (c == 's' && y < 2 + 2 * 15) GoTo(x, y += 2);
					if (c == 'w' && y > 2) GoTo(x, y -= 2);
					if ((c == char(13) && flag == 0) && xet[x][y] == 0) {
						set_color(244);
						cout << "X"; a++;
						flag++; GoTo(x, y);
						xet[x][y] = 1;
						gotoXY(88, 10); set_color(252); cout << " " << a;
						tatX(); vechuO();
						if (kiemtrathangX(xet) == 1) {
							gotoXY(82, 14);
							cout << "X thang";
							//xwin();
							Sleep(300);
							system("cls");
							system("color f0");
							Xwin();

						}




						continue;
					}
					if ((c == char(13) && flag == 1) && xet[x][y] == 0) {
						set_color(242);
						cout << "O"; b++;
						flag--;
						GoTo(x, y);
						xet[x][y] = 2;
						gotoXY(116, 10); set_color(250); cout << " " << b;
						tatO(); vechuX();
						if (kiemtrathangO(xet) == 2) {
							gotoXY(110, 14);
							cout << "O thang";
							Sleep(300);
							system("cls");
							system("color f0");
							Owin();

						}
					}
					if (c == '1') {
						gotoXY(80, 25); textcolor(240); cout << "Name the file: ";
						cin >> name;
						saveArrayToFile(xet, name);

					}
				}
			}
			return;
		  
			break;
		}
		if (mangmenu[57][23] == 1) {
			system("cls");
			system("color f0");
			Loadgame();

		}
		if (mangmenu[57][25] == 1) {
			system("cls");
			system("color f0");
			about();



		}
		if (mangmenu[57][27] == 1) {
			system("cls");
			system("color f0");
			setting();
		}
		if (mangmenu[57][29] == 1) {
			system("cls");
			system("color f0");

		}
	}
}

void lobby()
{
	PlaySound(TEXT("titletheme.wav"), NULL, SND_ASYNC);
	vehinhnen();
	menu();
	fixkhung();
	
	gotoXY(57, 21);
	
	lenxuong();


}
//dieu khien di chuyen thuan loi hon
