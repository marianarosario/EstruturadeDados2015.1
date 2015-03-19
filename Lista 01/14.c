#include <stdio.h>
float novosalario(float a);
main()
{
	float x;
	scanf("%f", x); // salario antigo
	printf("%f\n", novosalario(x));
	return 0;
}
// Função que soma 25% ao salario antigo
float novosalario(float a)
{
	return (a + ((25/100)*a));
}
