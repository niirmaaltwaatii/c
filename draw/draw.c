#include <windows.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

/*
GitHub : https://github.com/niirmaaltwaatii/c/draw
FOr Windows
*/


void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(consoleHandle, coord);
}

void main(){
	int cursor = 6;
	int wall = 4;
	int x=6,y=2;

	system("cls");
	
	// for borders
	for(int i=0;i<75;i++){
		gotoxy(i,0);
		printf("%c",wall);
		gotoxy(i,25);
		printf("%c",wall);
	}
	for(int i=0;i<25;i++){
		gotoxy(0,i);
		printf("%c",wall);
		gotoxy(75,i);
		printf("%c",wall);
	}
	
	while(true){
		gotoxy(x,y);
		printf("%c",cursor);
		// keyboared controls (w,a,s,d)
		if(_kbhit()){
			int key = _getch();
			switch(key){
			case 'd':
				x++;
				break;
			case 's':
				y++;
				break;
			case 'w':
				y--;
				break;
			case 'a':
				x--;
				break;
			}	
		}
		//Sleep(100);
	}
}