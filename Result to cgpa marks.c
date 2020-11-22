#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<string.h>
#include"start.h"
#include"result.h"
#include<time.h>
#include"see_history.h"

void start(void);
void start2(char []);
int i,j;
void setcolor(int ForgC)
{
     WORD wColor;


     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
     CONSOLE_SCREEN_BUFFER_INFO csbi;


     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
}
void gotoxy(int a,int b)
{

    COORD x;
    x.X=a;

    x.Y=b;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),x);



}
int main()
{

    void (*p) (void);
     p=start;
     p();

  getch();


}

