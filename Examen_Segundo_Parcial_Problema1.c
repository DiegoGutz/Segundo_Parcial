#include <stdio.h>
#include <math.h>

int main(){

    int a[10];
    float media;
    int i;
    int num=0;
    int suma[10]={0,0,0,0,0,0,0,0,0,0};

    for(i=0; i<10; i++){
        if(a[num]>0){
            printf("Introduce el numero %d : ", i+1);
            scanf("%d", &a[num]);
        }
        suma[num]=suma[num]+a[num];
    }

    if(suma[num]>0){
       printf("La media es %.2f", suma[num]/10.0);
    }

    return 0;
}
