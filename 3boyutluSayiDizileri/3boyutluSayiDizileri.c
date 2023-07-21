#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() 
{

	int can[2][3][2];
	int f, b, s;

	printf("Lutfen 12 adet sayi giriniz");

	for (f = 0; f < 2; f++) {
		for (b = 0; b < 3; b++) {
			for (s = 0; s < 2; s++) {
				scanf("%d",&can[f][b][s]);
			}
		}
	}

	printf("Girdiniz Degerler");

	for (f = 0; f < 2; f++) {
		for (b = 0; b < 3; b++) {
			for (s = 0; s < 2; s++) {
				printf("can[%d][%d][%d]=%d\n", f, b, s, can[f][b][s]);
			}
		}
	}









	return 0;

}