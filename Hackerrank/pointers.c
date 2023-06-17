/*this program is coded by Akash vishwakarma 
date-12 Dec 2020*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function
   //*a=*a-*b; 
    
    *a=*a+*b;
    if((*a-*b)<*b){
      *b=*b*2-*a; 
    }
    else{
    *b=*a-*b*2;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}