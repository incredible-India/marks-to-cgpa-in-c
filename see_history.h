
void bac(void);
void see_rec(int math,int phy,int com,int eng ,int ele,int civ ,int lab1, int lab2,char name[],float mak,float cgpa)
{
    FILE *P;
    time_t t;
    time(&t);
    P=fopen("result_histroy.txt","a");

     fprintf(P,"\n*****************************");
     fprintf(P,"\n%s\n",ctime(&t));
     fprintf(P,"_____________________________\n");
     fprintf(P," Name - %s\n",strupr(name));
     fprintf(P,"math\t %d\n",math);
     fprintf(P,"_____________________________\n");
     fprintf(P,"physics\\Chemistry\t %d\n",phy);
     fprintf(P,"_____________________________\n");
     fprintf(P,"computer\\CAED\t %d\n",com);
     fprintf(P,"_____________________________\n");
     fprintf(P,"English\t %d\n",eng);
     fprintf(P,"_____________________________\n");
     fprintf(P,"Electrical\\Electronic\t %d\n",ele);
     fprintf(P,"_____________________________\n");
     fprintf(P,"Civil\\Mechanical\t %d\n",civ);
     fprintf(P,"_____________________________\n");
     fprintf(P,"1st lab\t %d\n",lab1);
     fprintf(P,"_____________________________\n");
     fprintf(P,"2nd  lab\t %d\n",lab2);
     fprintf(P,"_____________________________\n");
     fprintf(P,"%f  marks and c g p a is %f\n",mak,cgpa);
     fprintf(P,"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");
     fclose(P);




}
void read(void)
{
    FILE *p;
    p=fopen("result_histroy.txt","r");
    char ch;

      if(p==NULL)
    {
        system("cls");
        gotoxy(40,12);
        system("color 70");
        printf("YOU FILE HAS BEEN DELETED");
        bac();
    }
    while(ch!=EOF)
    {

        printf("%c",ch);
        ch=fgetc(p);
    }
    fclose(p);
    bac();

}
void del(void)
{
int k;
  k=remove("result_histroy.txt");
  if(k==0)
  {
      system("cls");
      gotoxy(40,12);
      system("color 73");
      printf("File deleted Successfully");
  }else{
      system("cls");
      gotoxy(40,12);
      system("color 73");
   printf("file cannot be deleted ");

  }
  bac();


}
