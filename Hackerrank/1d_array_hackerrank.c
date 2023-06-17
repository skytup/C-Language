/*this program is coded by Akash vishwakarma
on sun, 13/dec/2020*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
      int n; 
     scanf("%d", &n);
    int arr[n];  
        for(int i=1; i<=n; i++){
     scanf("%d",&arr[i] );

        } 
       
       
     for( int i=1; i<=n; i++){
           arr[i+1]=arr[i]+arr[i+1] ;
           if(i==n)
       printf("%d",arr[i]);
     
   } 
 return 0;
}