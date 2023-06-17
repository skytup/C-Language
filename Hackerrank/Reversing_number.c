/*this program is coded by Akash vishwakarma 
on 12-Dec-2020*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", (arr + i));
    }

    /* Write the logic to reverse the array. */
    for(i=num-1; i>= 0; i--)
    //  printf("%d",i);
      printf("%d ", *(arr + i));
    return 0;
}