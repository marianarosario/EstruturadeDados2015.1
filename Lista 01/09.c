#include <stdio.h>
float areaquad(float x);
main()
{
	float lado;
	scanf("%f", &lado);
	printf("%f\n", areaquad(lado));
	return 0;
}
// Função que calcula area do quadrado e retorna o dobro dela
float areaquad(float x)
{
    return(2*(x*x));
}
