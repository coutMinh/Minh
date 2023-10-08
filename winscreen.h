#pragma once

#include<iostream>
#include"graphics.h"
#include"windowsetting.h"


using namespace std;
void DrawFireWorks(int key, int x, int y)
{
	switch (key)
	{
	case 0:
		gotoXY(x, y + 10);
		cout << "|";
		break;
	case 1:
		gotoXY(x, y + 10);
		cout << " ";
		gotoXY(x, y + 9);
		cout << "|";
		break;
	case 2:
		gotoXY(x, y + 9);
		cout << " ";
		gotoXY(x, y + 8);
		cout << "|";
		break;
	case 3:
		gotoXY(x, y + 8);
		cout << " ";
		gotoXY(x, y + 7);
		cout << "|";
		break;
	case 4:
		gotoXY(x, y + 7);
		cout << " ";
		gotoXY(x, y + 6);
		cout << "|";
		break;
	case 5:
		gotoXY(x, y + 6);
		cout << " ";
		gotoXY(x, y + 5);
		cout << "|";
		break;
	case 6:
		gotoXY(x, y + 5);
		cout << " ";
		gotoXY(x, y + 4);
		cout << "|";
		break;
	case 7:
		gotoXY(x, y + 4);
		cout << " ";
		gotoXY(x, y + 3);
		cout << "|";
		break;
	case 8:
		gotoXY(x, y + 3);
		cout << " ";
		gotoXY(x, y + 2);
		cout << "|";
		break;
	case 9:
		gotoXY(x, y + 0);
		cout << " ";
		gotoXY(x, y + 1);
		cout << "|";
		break;
	case 10:
		gotoXY(x - 6, y - 3);
		cout << "             ";
		gotoXY(x - 6, y - 2);
		cout << "             ";
		gotoXY(x - 6, y - 1);
		cout << "         	  ";
		gotoXY(x - 6, y);
		cout << "      *      ";
		gotoXY(x - 6, y + 1);
		cout << "             ";
		gotoXY(x - 6, y + 2);
		cout << "             ";
		gotoXY(x - 6, y + 3);
		cout << "             ";
		break;
	case 11:
		gotoXY(x - 6, y - 3);
		cout << "             ";
		gotoXY(x - 6, y - 2);
		cout << "             ";
		gotoXY(x - 6, y - 1);
		cout << "      *  	 ";
		gotoXY(x - 6, y);
		cout << "    * * *    ";
		gotoXY(x - 6, y + 1);
		cout << "      *      ";
		gotoXY(x - 6, y + 2);
		cout << "             ";
		gotoXY(x - 6, y + 3);
		cout << "             ";
		break;
	case 12:
		gotoXY(x - 6, y - 3);
		cout << "      *      ";
		gotoXY(x - 6, y - 2);
		cout << "  *   *   *  ";
		gotoXY(x - 6, y - 1);
		cout << "    *   *	 ";
		gotoXY(x - 6, y);
		cout << "* *       * *";
		gotoXY(x - 6, y + 1);
		cout << "    *   *    ";
		gotoXY(x - 6, y + 2);
		cout << "  *   *   *  ";
		gotoXY(x - 6, y + 3);
		cout << "      *      ";
		break;
	case 13:
		gotoXY(x - 6, y - 3);
		cout << "      *      ";
		gotoXY(x - 6, y - 2);
		cout << "  *       *  ";
		gotoXY(x - 6, y - 1);
		cout << "             ";
		gotoXY(x - 6, y);
		cout << "*           *";
		gotoXY(x - 6, y + 1);
		cout << "             ";
		gotoXY(x - 6, y + 2);
		cout << "  *       *  ";
		gotoXY(x - 6, y + 3);
		cout << "      *      ";
		break;
	case 14:
		gotoXY(x - 6, y - 3);
		cout << "             ";
		gotoXY(x - 6, y - 2);
		cout << "             ";
		gotoXY(x - 6, y - 1);
		cout << "             ";
		gotoXY(x - 6, y);
		cout << "             ";
		gotoXY(x - 6, y + 1);
		cout << "             ";
		gotoXY(x - 6, y + 2);
		cout << "             ";
		gotoXY(x - 6, y + 3);
		cout << "             ";
		break;
	}
}



void Xwin() {
	ShowCur(0);
	PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
	int y = 6;
	int yy = 24;
	int i = 1;
	for (int x=20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, y);
		cout << " ";
		i+=15;
	}
	for (int x = 20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, yy);
		cout << " ";
		i += 15;
	}
	for (int j = 241; j <= 252; j++) {
		
		
		Sleep(400);
		if (j > 252)j = 241;

		textcolor(j);
		gotoXY(20, 9);  cout << " .------------------.       .------------------.      .------------------.     .------------------.                                                      ";
		gotoXY(20, 10); cout << "| .----------------. |     | .----------------. |    | .----------------. |   | .----------------. |                                    ";
		gotoXY(20, 11); cout << "| |   xxxx  xxxx   | |     | |  www     www   | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                  ";
		gotoXY(20, 12); cout << "| |    xx    xx    | |     | |   w       w    | |    | |      ww        | |   | |  nnnn     nn   | |                                   "; textcolor(j + 1);
		gotoXY(20, 13); cout << "| |     xx  xx     | |     | |   w       w    | |    | |      ww        | |   | |  nn nn    nn   | |                                   ";
		gotoXY(20, 14); cout << "| |       xx       | |     | |   w   w   w    | |    | |      ww        | |   | |  nn  nn   nn   | |                                    ";
		gotoXY(20, 15);  cout <<"| |       xx       | |     | |    w  w  w     | |    | |      ww        | |   | |  nn   nn  nn   | |                                    "; textcolor(j + 2);
		gotoXY(20, 16); cout << "| |     xx  xx     | |     | |    w w w w     | |    | |      ww        | |   | |  nn    nn nn   | |                                    ";
		gotoXY(20, 17); cout << "| |    xx    xx    | |     | |    w w w w     | |    | |      ww        | |   | |  nn     nnnn   | |                                    ";
		gotoXY(20, 18); cout << "| |   xxxx  xxxx   | |     | |     w   w      | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                                    "; textcolor(j -1);
		gotoXY(20, 19); cout << "| '----------------' |     | '----------------' |    | '----------------' |   | '----------------' |                                   ";
		gotoXY(20, 20); cout << "'--------------------'     '--------------------'    '--------------------'   '--------------------'                                    ";
		if (j == 252)j = 241;
	}


}
void Owin() {
	ShowCur(0);
	PlaySound(TEXT("win.wav"), NULL, SND_ASYNC);
	int y = 6;
	int yy = 24;
	int i = 1;
	for (int x = 20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, y);
		cout << " ";
		i += 15;
	}
	for (int x = 20; x < 120; x++) {
		textcolor(i);
		gotoXY(x, yy);
		cout << " ";
		i += 15;
	}
	for (int j = 241; j <= 252; j++) {


		Sleep(400);
		if (j > 252)j = 241;

		textcolor(j);
		gotoXY(20, 9);  cout << " .------------------.       .------------------.      .------------------.     .------------------.                                                      ";
		gotoXY(20, 10); cout << "| .----------------. |     | .----------------. |    | .----------------. |   | .----------------. |                                    ";
		gotoXY(20, 11); cout << "| |   oooooooooo   | |     | |  www     www   | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                  ";
		gotoXY(20, 12); cout << "| |  oo        oo  | |     | |   w       w    | |    | |      ww        | |   | |  nnnn     nn   | |                                   "; textcolor(j + 1);
		gotoXY(20, 13); cout << "| | oo          oo | |     | |   w       w    | |    | |      ww        | |   | |  nn nn    nn   | |                                   ";
		gotoXY(20, 14); cout << "| |oo            oo| |     | |   w   w   w    | |    | |      ww        | |   | |  nn  nn   nn   | |                                    ";
		gotoXY(20, 15); cout << "| |oo            oo| |     | |    w  w  w     | |    | |      ww        | |   | |  nn   nn  nn   | |                                    "; textcolor(j + 2);
		gotoXY(20, 16); cout << "| | oo          oo | |     | |    w w w w     | |    | |      ww        | |   | |  nn    nn nn   | |                                    ";
		gotoXY(20, 17); cout << "| |  oo        oo  | |     | |    w w w w     | |    | |      ww        | |   | |  nn     nnnn   | |                                    ";
		gotoXY(20, 18); cout << "| |   oooooooooo   | |     | |     w   w      | |    | |    wwwwww      | |   | | nnnn     nnnn  | |                                    "; textcolor(j - 1);
		gotoXY(20, 19); cout << "| '----------------' |     | '----------------' |    | '----------------' |   | '----------------' |                                   ";
		gotoXY(20, 20); cout << "'--------------------'     '--------------------'    '--------------------'   '--------------------'                                    ";
		if (j == 252)j = 241;
	}

}