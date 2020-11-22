void setcolor(int);
void gotoxy(int,int);
void read(void);
void del(void);
void result (char []);
void start2(char []);
void start(void)
{
    SetConsoleTitle("WELCOME....");
    char name[100];
  extern int i,j;
  gotoxy(25,12);
  setcolor(63);
  printf("Your Name : ");
setcolor(43);
scanf("%[^\n]",name);
start2(name);



}
void start2(char name[])
{
  extern int i,j;
  read:
   SetConsoleTitle("Himanshu Sharma..");
  system("cls");
  for(i=20;i<=87;i++)
  {
      gotoxy(i,9);
      setcolor(88);
      printf("=");
  }
  for(j=20;j<=87;j++)
  {
      gotoxy(j,20);
      setcolor(88);

      printf("=");

  }

  gotoxy(25,12);
  printf("This is the               System");
  gotoxy(37,12);
  setcolor(118);
  printf("Simple Result");
   gotoxy(25,14);
  setcolor(94);
  printf("Welcome ");
  gotoxy(34,14);
  setcolor(106);
  printf("%s",strupr(name));

  gotoxy(3,25);
setcolor(88);
for(i=0;i<=98;i++)
{
    printf("=");
}
 gotoxy(3,27);
 for(i=0;i<=98;i++)
{
    printf("=");
}
setcolor(99);
gotoxy(4,26);
printf("1 : SEE RESULT");
gotoxy(43,26);
printf("2 : SEE HISTORY");
gotoxy(89,26);
printf("3 :  Exit");
{
    char ch;
    ch=getch();
if(ch=='1')
result(name);
else if(ch=='3')
{
     system("cls");
      system("color 70");
      gotoxy(40,12);
      printf("THANX FOR VISITING US");
      getch();
      exit(0);


}else if(ch=='2')
{
    {
        char f;
        ag:
        system("cls");
        gotoxy(20,5);
        setcolor(110);
        printf("1 : See The Records");
        gotoxy(60,5);
        setcolor(121);
        printf("2 : Delete the history");
        f=getch();
        if(f=='1')
        {
            system("cls");
            read();


        }else if(ch=='2')
        {
            del();
        }
        else
        {
            goto ag;

        }
    }

}
else{
        printf("\a");

    goto read;


}
}
}
