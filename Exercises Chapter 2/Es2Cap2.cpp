#include<stdio.h>

#define TASSA 5.0f
#define CENTO 100

int main()
{
	float importo;
	
	printf("Inserisci il tuo importo: ");
	scanf("%f", &importo);
	
	importo = importo + importo * (TASSA / CENTO);
	
	printf("Il valore dell'importo piu' le tasse e': %.2f", importo);
	
	return 0;
}
