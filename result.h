#define ENTER 13
#define TAB 9
#define BKSP 8
#define ESC 27
void bac(void);
void see_rec(int,int,int,int,int,int,int,int,char [],float,float);
struct mk
{
    float mark[8];
};
void marks(char name[]);
void result(char name[])
{

  extern int i,j;
  system("cls");
   for(i=3;i<=98;i++)
   {
       gotoxy(i,3);
       setcolor(120);
       printf("|");

   }
 for(i=3;i<=98;i++)
   {
       gotoxy(i,25);
       setcolor(120);
       printf("|");

   }
 for(i=3;i<=25;i++)
   {
       gotoxy(3,i);
       setcolor(105);
       printf("-");

   }
    for(i=3;i<=25;i++)
   {
       gotoxy(98,i);
       setcolor(105);
       printf("-");

   }
    for(i=3;i<=21;i++)
   {
       gotoxy(58,i);
       setcolor(102);
       printf("-");

   }
    for(i=3;i<=21;i++)
   {
       gotoxy(68,i);
       setcolor(105);
       printf("-");

   }
     for(i=3;i<=21;i++)
   {
       gotoxy(77,i);
       setcolor(105);
       printf("-");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,5);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,7);
       setcolor(105);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,9);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,11);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,13);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,15);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,17);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,19);
       setcolor(120);
       printf("|");

   }
    for(i=3;i<=98;i++)
   {
       gotoxy(i,21);
       setcolor(120);
       printf("|");

   }
   setcolor(62);
   gotoxy(6,4);
   printf("SUBJECTS");
   gotoxy(61,4);
   printf("MARKS");
   gotoxy(71,4);
   printf("P\\F");
   gotoxy(79,4);
   printf("PERCENTAGE");
   gotoxy(23,24);
   setcolor(93);
   printf("%s",strupr(name));
   marks(name);

}
void marks(char name [])

{
   int  b=0;
  float tm,tper,cgpa ;
   struct  mk m;
   setcolor(102);
   gotoxy(6,6);
   printf("Maths");
   gotoxy(62,6);
   scanf("%f",&m.mark[0]);
   if(m.mark[0]<=38)
   {
      b++;
       setcolor(108);
       gotoxy(72,6);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,6);
       Beep(2500,100);
       printf("P");

   }
   gotoxy(82,6);
   setcolor(94);
   printf("%3.1f%%",m.mark[0]);
    setcolor(102);
   gotoxy(6,8);
   printf("Physics\\Chemistry");
   gotoxy(62,8);
   scanf("%f",&m.mark[1]);
   if(m.mark[1]<=38)
   { b++;
       setcolor(108);
       gotoxy(72,8);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,8);
       Beep(2500,100);
       printf("P");

   }
    gotoxy(82,8);
   setcolor(94);
   printf("%3.1f%%",m.mark[1]);
    setcolor(102);
   gotoxy(6,10);
   printf("Computer Programming\\CAED");
   gotoxy(62,10);
   scanf("%f",&m.mark[2]);
   if(m.mark[2]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,10);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,10);
       Beep(2500,100);
       printf("P");

   }
    gotoxy(82,10);
   setcolor(94);
   printf("%3.1f%%",m.mark[2]);

setcolor(102);
   gotoxy(6,12);
   printf("English");
   gotoxy(62,12);
   scanf("%f",&m.mark[3]);
   if(m.mark[3]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,12);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,12);
       Beep(2500,100);
       printf("P");

   }
    gotoxy(82,12);
   setcolor(94);
   printf("%3.1f%%",m.mark[3]);
   setcolor(102);
   gotoxy(6,14);
   printf("Electrical\\Electronic");
   gotoxy(62,14);
   scanf("%f",&m.mark[4]);
   if(m.mark[4]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,14);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,14);
       Beep(2500,100);
       printf("P");

   }

 gotoxy(82,14);
   setcolor(94);
   printf("%3.1f%%",m.mark[4]);
 setcolor(102);
   gotoxy(6,16);
   printf("CIVIL\\Mechanical");
   gotoxy(62,16);
   scanf("%f",&m.mark[5]);
   if(m.mark[5]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,16);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,16);
       Beep(2500,100);
       printf("P");

   }
 gotoxy(82,16);
   setcolor(94);
   printf("%3.1f%%",m.mark[5]);
   setcolor(102);
   gotoxy(6,18);
   printf("1ST  LAB EXTERNAL ");
   gotoxy(62,18);
   scanf("%f",&m.mark[6]);
   if(m.mark[6]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,18);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,18);
       Beep(2500,100);
       printf("P");

   }
    gotoxy(82,18);
   setcolor(94);
   printf("%3.1f%%",m.mark[6]);
 setcolor(102);
   gotoxy(6,20);
   printf("2nd  LAB EXTERNAL ");
   gotoxy(62,20);
   scanf("%f",&m.mark[7]);
   if(m.mark[7]<=38)
   {
       b++;
       setcolor(108);
       gotoxy(72,20);
       Beep(2500,100);
       printf("F");

   }else
   {
       setcolor(90);
       gotoxy(72,20);
       Beep(2500,100);
       printf("P");

   }

 gotoxy(82,20);
   setcolor(94);
   printf("%3.1f%%",m.mark[7]);
gotoxy(6,22);
setcolor(58);
printf("P : PASS");
gotoxy(6,24);
setcolor(44);
printf("F : FAIL");
gotoxy(22,22);
setcolor(110);
printf("NO. OF BACKLOGS =");
setcolor(44);
printf(" %d",b);
gotoxy(45,22);
setcolor(110);
printf("Total Marks  =");
gotoxy(62,22);
tm=m.mark[0]+m.mark[1]+m.mark[2]+m.mark[3]+m.mark[4]+m.mark[5]+m.mark[6]+m.mark[7];
setcolor(58);
printf("%4.0f",tm);
gotoxy(71,22);
setcolor(110);
printf("Total Percentage");
tper=(tm/8);
cgpa=(tper/9.5);
gotoxy(88,22);
setcolor(58);
printf("%3.3f%%",tper);
gotoxy(71,24);
setcolor(110);
printf("Total C G P A ");
gotoxy(88,24);
setcolor(58);
printf(" %3.3f",cgpa);
see_rec(m.mark[0],m.mark[1],m.mark[2],m.mark[3],m.mark[4],m.mark[5],m.mark[6],m.mark[7],name,tm,cgpa);
bac();
}
void bac(void)
{

    char ch;
    again:
    gotoxy(3,1);
    setcolor(111);
    printf("\"Enter\" To Go Back");
      gotoxy(80,1);
    setcolor(111);
    printf("\"Esc\" To EXIT");
  ch=getch();
  if(ch==ENTER)
  {
      system("cls");
      start();
  }else if(ch==ESC)
  {
      system("cls");
      system("color 70");
      gotoxy(40,12);
      printf("THANX FOR VISITING US");
      getch();
      exit(0);


  }else
  {
         printf("\a");
      goto again;
  }


}


