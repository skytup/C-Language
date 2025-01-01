#include<stdio.h>
#include<stdlib.h>

void line_number(char *filename){
FILE *file = fopen(filename,"r");
if (file == NULL){
    printf("File doesn't exist \n");
    exit(EXIT_FAILURE);
}
char line[1024];
int lineNumber = 1;
while (fgets(line,sizeof(line),file))
{
    printf("%d : %s", lineNumber, line);
    lineNumber++;
}
fclose(file);

};

int main(){
char filename[100];
printf("Enter the name of file you want to read \n");
scanf("%s",&filename);
// printf("%s",filename);

line_number(filename);
}
