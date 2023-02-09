#include <bits/stdc++.h>
#include <Windows.h>
#include <stdlib.h>
#include <chrono>
#include <thread>
//    0 = Black       8 = Gray
//    1 = Blue        9 = Light Blue
//    2 = Green       A = Light Green
//    3 = Aqua        B = Light Aqua
//    4 = Red         C = Light Red
//    5 = Purple      D = Light Purple
//    6 = Yellow      E = Light Yellow
//    7 = White       F = Bright White
using namespace std;
using namespace chrono;
using namespace this_thread; 
void doimau (int color)
{
	WORD wColor;
     

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
          wColor = (csbi.wAttributes & 0xF0) + (color & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
}

void testmau (int n) {
	for (int i=0; i<n; i++) {
		doimau(i);
		cout<<i<<" ";
	}
}

void xoamanhinh () {
	system("cls");
} 
void doinen(){
      system("Color 10E");
}
void ngu(int n){
   sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(n));
}
