/*This program is coded by Akash vishwakarma
on 12 dec,2020*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
int n;
scanf("%d", &n);
int digit, temp, sum = 0;
temp = n;
//Complete the code to calculate the sum of the five digits on n.
while(temp > 0)
{
    digit = temp % 10;
    sum = sum + digit;
    temp = temp / 10;
}
printf("%d\n",sum);
return 0;
}