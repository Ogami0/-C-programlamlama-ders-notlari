#include <stdio.h>

int main() {

	/*int can[2][2] = {{15,20},{25,30}};

	printf("%d", can[0][1]);*/

	//#######################2boyutlu sayi dizilerini pekiştirme###########################################

	int mat[10][10];
	int i,j;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == j) {
				mat[i][j] = 1;
			}
			else {
				mat[i][j] = 0;
			}
		}
	}

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			printf("%4d",mat[i][j]);
		}
		printf("\n");
	}
}   
