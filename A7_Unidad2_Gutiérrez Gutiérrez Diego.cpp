#include <stdio.h>

void intercambio(int *x, int *y);
int main(void){
	int a=7, b=8;
	
	printf("a=%d b=%d", a, b);
	intercambio(&a, &b);
	printf("a=%d b=%d", a, b);
}
void intercambio(int *x, int *y){
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
