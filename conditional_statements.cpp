#include <stdio.h>
void update(int *a,int *b) {
    // Complete this function   
	int x,y;
	x=*a;
	y=*b;
	*a=x+y;

	if(x>y){
		*b=;
	}
	else{
		*b=x-y;
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
