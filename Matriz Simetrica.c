#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int main() {
	int A[MAX][MAX], i, fil, col, j, n = 0;
	//recoger numero de filas y columnas
	printf("Introduzca nro de filas de su matriz : ");
	scanf("%d",&fil);
	printf("\nIntroduzca nro de columnas de su matriz : ");
	scanf("%d",&col);
	//recoger elementos
	for (i = 0;i < fil;i++){
		for (j = 0;j < col;j++){
			printf("\nElemento [%d , %d] : ",i+1,j+1);
			scanf("%d",&A[i][j]);
		}
	}
	//comprobar si es simetrica
	system("cls");
	if (fil != col) {
		printf("La Matriz ingresada no es simetrica, pues no tiene el mismo numero de filas y columnas.");
	} else {
		for (i = 0;i < fil;i++) {
			for (j = 0;j < col;j++) {
				if (A[i][j] == A[j][i]) {
					n+=1;
				}
			}
		}
		if (n = fil*col) {
			printf("La matriz ingresada : \n\n");
			for (i = 0;i < fil;i++) {
				for (j = 0;j < col;j++) {
					printf("\t%d\t",A[i][j]);
				}
				printf("\n");
			}
			printf("\nEs Simetrica.");	
		} else {
			printf("La matriz ingresada : \n\n");
			for (i = 0;i < fil;i++) {
				for (j = 0;j < col;j++) {
					printf("\t%d\t",A[i][j]);
				}
				printf("\n");
			}
			printf("No es Simetrica.");
		}
	}
	return 0;
}
