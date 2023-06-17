#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
char ch;
int it();
int dt();

int main()
{
    char name[20];
    int sel;
    printf("register your name\n");
    printf("name:  ");
    gets(name);
    printf("welcome %s in our program\n\n",name);
    
    top:
    printf(" press 1 for increment star pattern\n");
    printf(" press 2 for decreament star pattern \n\n");
    printf("choose one of them option\n");
  //  scanf("%d", &sel);
    printf("\n");
    if(getch()=='1'){
    system("cls");
    printf("dear %s you are selected increament star\n",name);
        it();
       } 
  else  if(getch()=='2'){
system("cls");
printf("dear %s you are selected decreament star\n",name);
        dt();
       } 
        else{
        system("cls");
        printf("oops %s bro wrong selection!\n\ttry again\n",name);
        goto top;
         }
    return 0;
}

it() {
    int n;
    printf("choose your character\n");
    scanf("%c", &ch);
    printf("how many turn you want to print star\n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++) {
        printf("\n");
        for(int j=0; j<=(i-1); j++) {
            printf("%c",ch);
        }
    }
}
dt() {
int n;
 printf("choose your character\n");
    scanf("%c", &ch);
    printf("how many turn you want to print star\n");
    scanf("%d", &n);
    for(int i=n; i>=1; i--) {
        printf("\n");
        for(int j=(i-1); j>=0; j--) {
            printf("%c",ch);
        }
    }
}