#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){
	int a=5;
	int b=20;
	int matriz[5][20], i, j;
	float vector[5]={0,0,0,0,0};
	float vector2[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float vector3[5]={0,0,0,0,0}, vector4[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	float vector5[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			printf("Indica el valor de la calificacion %d del alumno %d: ", i, j);
			scanf("%d", &matriz[i][j]);
			vector[i]=vector[i]+matriz[i][j];
			vector2[j]=vector2[j]+matriz[i][j];
		}
	}
	printf("Los valores obtenidos son: \n\n");
	for(i=0; i<a; i++){
		printf("\n");
		for(j=0; j<b; j++){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	printf("El promedio de las calificaciones de cada estudiantes es: \n");
	//for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			vector3[i]=vector2[j]/5;
			printf("%.2f\n", vector3[i]);
		}
	//}
	printf("El promedio del grupo en cada materia es: \n");
	for(i=0; i<a; i++){
		vector4[i]=vector[i]/20;
		printf("%.2f\n", vector4[i]);
	}
	printf("Los estudiantes con resultados inferiores a 7 son:");
	//for(i=0; i<a; i++){
		for(j=0; j<b; j++){
			vector5[i]=vector2[j]/5;
			if(vector5[i]<7){
				printf("Este alumno tiene menos de 7\n");
			}
			else{
				printf("Este alumno tiene mas de 7\n");
			}
		}
	//}
	getch();
	return 0;
}
