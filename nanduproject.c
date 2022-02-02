#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void car();
void bike();
void bicycle();
int main()
{
int choice;
printf("---------------------PARKING-----------------------\n");
printf("TO KNOW ABOUT THE SPACE AVAILABLE OR NOT IN A PARKING AREA CLICK ANY ONE OF THIS 3\n               1)BIKE\n             2)CAR\n               3)BICYCLE\n\n\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
       bike();
       break;
case 2:
       car();
       break;
case 3:
       bicycle();
       break;
default :
    printf("wrong choice\n");
}
return 0;
}
void bike()
{
    int nob,ch,amount=10;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("bike.txt","r");

     fscanf(fp,"%d",&ch);
       if(ch==10)
       {
       printf("PARKING IS FULL\n");
       fclose(fp);
            }
       else
       {    int F,d;
         printf("you can park a car\n");
         nob=amount-ch;
         printf("%d parking space available yet\n",nob);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
         ///////////
         sleep(3);
         system("cls");
         fs=fopen("note.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);
         }
          fclose(fs);
          ////////
         if(F)
         {
         ch++;
         fq=fopen("bike.txt","w");
         fprintf(fq,"%d",ch);
         }
        fclose(fq);
      }
}

void bicycle()
{
    int nob,ch,amount=20;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("cycle.txt","r");

     fscanf(fp,"%d",&ch);
     if(ch==20)
     {
      printf("PARKING IS FULL\n");
      fclose(fp);     }
      else
      {
         int F,d;
         printf("you can park a car\n");
         nob=amount-ch;
         printf("%d parking space available yet\n",nob);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
         ///////////////////

         sleep(3);
         system("cls");
         fs=fopen("note.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);
         }
         fclose(fs);
         //////////////////
         if(F)
         {
         ch++;
         fq=fopen("cycle.txt","w");
         fprintf(fq,"%d",ch);
         }
         fclose(fq);
      }
}
void car()
{
    int noc,ch,amount=5;
    FILE *fp=NULL,*fq=NULL,*fs=NULL;
    fp=fopen("car.txt","r");
    fscanf(fp,"%d",&ch);
       if(ch==5)
       {
       printf("PARKING IS FULL\n");
       fclose(fp);     }
       else
       {    int F,d;
         printf("you can park a car\n");
         noc=amount-ch;
         printf("%d parking space available yet\n",noc);
         printf("ENTER 1 FOR YES 0 FOR NO\n");
         scanf("%d",&F);
         //////////////////

         sleep(3);
         system("cls");
         fs=fopen("note.txt","r");
         while(!feof(fs))
         {
         d=fgetc(fs);
         printf("%c",d);

         }
         fclose(fs);
         ///////////////////
         if(F)
         {
         ch++;
         fq=fopen("car.txt","w");
         fprintf(fq,"%d",ch);
         }
        fclose(fq);
      }
}
