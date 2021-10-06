#include <stdio.h>
float suma(float numeros[]);
int main (void){
	float result, numeros[]={23.4, 55.0, 22.6, 3.1, 40.5, 22.1};
	result=suma(numeros);
	printf("Resultado = %.2f", result);
	return 0;
}
float suma(float numeros[]){
	float sum=0.0;
	for(int i=0; i<6; i++){
		sum+=numeros[i];
	}
	return sum;
}
