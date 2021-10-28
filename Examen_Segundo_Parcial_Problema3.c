#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){

    int a[25]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i,j,aux,min;
    float x;

    for(i=0; i<25; i++){
        printf("Dame un numero: ");
        scanf("%d", &a[i]);
    }

    for(i=0; i<25; i++){
        min=i;
        for(j=i+1; j<25; j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;

        x=x+a[i];
    }
    printf("Ascendente\n");
    for(i=0; i<25; i++){
        printf("%i\t", a[i]);
    }
    printf("Media: %.2f", x/25.0);
}
