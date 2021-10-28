#include <stdio.h>
void table (float *b, int n);
int main (void){
    int i;
    float x[5]={0,0,0,0,0};
    for (i =0; i<5; i++){
        printf("volor posicional %d:", i+ 1);
        scanf("%f",&x[i]);
    }
    printf("\nCl\t");
    printf("C2\t");
    printf("C3\n");
    table(x,5);
    return 0;
}
void table(float *b, int n){
	int i;
	for (i=0; i<5; i++){
        printf("a\t");
        printf("%.2f\t",b[i]);
        printf("%p\n",&b[i]);
    }
}
