/*THIS PROGRAM IS CODED BY AKASH VISHWAKARMA*/
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    top:
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the last number\n");
    scanf("%d", &b);

    for(int i=a;i<=b;i++){
    printf("\n\n");
    printf("the table of %d is\n", i);
    for(int j=1; j<=10; j++){
 printf("\t%d * %d = %d\n", i,j, i*j);
    }
sleep(3);
    }
    goto top;
    return 0;
}