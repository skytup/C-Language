/*
Made by Akash vishwakarma in hackerranks.com
*/
#include <stdio.h>
#include <string.h>
int main()  {
    char *akash[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int a, b;

    scanf("%d\n%d", &a, &b);

    for ( ;a<=b; a++)
        puts((a < 10) ? akash[a] : ((a % 2) ? "odd":"even"));

    return 0;
}