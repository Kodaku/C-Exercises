#include<stdio.h>

int main()
{
	int x, valore, x_alla_quinta, x_alla_quarta, x_alla_terza, x_quadro;
	
	printf("In questo programma e' valutato il valore di 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\n");
	printf("Inserisci il valore di x: ");
	scanf("%d", &x);
	
	x_alla_quinta = x * x * x * x * x;
	x_alla_quarta = x * x * x * x;
	x_alla_terza = x * x * x;
	x_quadro = x * x;
	
	valore = 3 * x_alla_quinta + 2 * x_alla_quarta - 5 * x_alla_terza - x_quadro + 7 * x - 6;
	
	printf("f(%d) = %d", x, valore);
	
	return 0;
}
