#include <stdio.h>
float farenheit(float c);
main()
{
	float temp;
	scanf("%f", &temp);
	printf("%f\n", farenheit(temp));
	return 0;
}
// Função que converte celsius em farenheit

float farenheit(float c)
{
    return(9*c/5 + 32);
}


