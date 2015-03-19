#include <stdio.h>
float soma(float x, float y);
main()
{
	float a, b;
	scanf("%f%f", &a, &b);
	printf("%f\n", soma(a,b));
	return 0;
}
// Função que soma 2 números reais
float soma(float x, float y)
{
    return(x+y);
}
