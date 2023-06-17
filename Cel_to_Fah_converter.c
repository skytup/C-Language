#include<stdio.h>
#include<conio.h>
main()
{
int ak;
int bk;
int i,j,c,f,ex;
int cel,fah,choose;
me:
top:
top2:
top1:
	printf("enter 0 anytime for main menu\n");
printf("\t\b 1.Cel to Fah\n");
printf("\t\b 2.Fah to Cel\n");
    printf("choose your option\n");
    scanf("%d",&choose);
    if(choose==1){
     
    printf("\n you are selected cel to fah\n");
    for(;;){
    
    printf("enter value of celcius \n");
    scanf("%d",&cel);
 if(cel==000){
     goto top;} 

 printf("the converted value is\t%5f\n",(float)cel*9/5+32);
    } 
    }
    else if(choose==2){
    printf("\n you are selected fah to cel\n");
    for(;;){
    printf("enter value of Fahrenheit \n");
    scanf("%d",&fah);
    if(fah==000){
     goto top2;} 
    printf("the converted value is\n  %5f\n",(float)5*(fah-32)/9 );
    } 
    }
    else if(choose==5){
    printf("\n you are just akash\n");
    printf("enter 1 for main\n");
   scanf("%d",&ak);
    if(ak==1)
   goto me;
     if(ak==2)
   goto end;
     
    }
    else{
    printf("\n wrong selection\n");
   printf("enter 1 for main and 0 for exit\n");
    scanf("%d",&bk);
    if(bk==1)
    goto top1; 
    if(bk==0)
    goto end2;
    }
    end:
    end2:
    return 0;
    
}


    
