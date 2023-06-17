/*this program is coded by Akash vishwakarma
On Tuesday,15 Dec 2020*/
/*Degit frequency in HACKERRANK.COM*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */  
       char arr[1000], i;
      int count, j;
     scanf("%s", &arr);
           for(i=48;i<=57; i++)
      {
    count=0;
    for(j=0; j<strlen(arr);j++){
    if(arr[j]==i)
    count++;
    } 
      printf("%d ", count); 
    } 
    
          return 0;
}
       