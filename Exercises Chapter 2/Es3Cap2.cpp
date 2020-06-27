#include<stdio.h>

#define VENTI 20
#define DIECI 10
#define CINQUE 5
#define UNO 1

int main()
{
	int importo, biglietti_da_20, biglietti_da_10, biglietti_da_5, biglietti_da_1;
	
	printf("Inserisci l'importo: ");
	scanf("%d", &importo);
	
	biglietti_da_20 = importo / VENTI;
	importo = importo - biglietti_da_20 * VENTI;
	
	biglietti_da_10 = importo / DIECI;
	importo = importo - biglietti_da_10 * DIECI;
	
	biglietti_da_5 = importo / CINQUE;
	importo = importo - biglietti_da_5 * CINQUE;
	
	biglietti_da_1 = importo / UNO;
	importo = importo - biglietti_da_1 * UNO;
	
	printf("Il numero di biglietti da 20 e': %d\n", biglietti_da_20);
	printf("Il numero di biglietti da 10 e': %d\n", biglietti_da_10);
	printf("Il numero di biglietti da 5 e': %d\n", biglietti_da_5);
	printf("Il numero di biglietti da 1 e': %d\n", biglietti_da_1);
	
	return 0;
}
