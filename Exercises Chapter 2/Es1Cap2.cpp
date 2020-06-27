#include<stdio.h>

#define QUATTRO_TERZI 4.0f / 3.0f
#define PI_GRECO 3.14

int main()
{
	float raggio, potenza_raggio, volume;
	
	printf("Inserisci il raggio della sfera: ");
	scanf("%f", &raggio);
	
	potenza_raggio = raggio * raggio * raggio;
	volume = QUATTRO_TERZI * potenza_raggio * PI_GRECO;
	
	printf("Il volume della sfera e' %f", volume);
	
	return 0;
}
