#include <stdio.h>
float area(float x);
main()
{
	float raio;
	scanf("%f", &raio);
	printf("%f\n", area(raio));
	return 0;
}
// Função que calcula area do circulo
float area(float x)
{
    return(2*3.141592*x);
}
