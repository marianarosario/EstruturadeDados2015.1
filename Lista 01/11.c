#include <stdio.h>
float farenheit(float c);
main()
{
	float temp;
	scanf("%f", &temp);
	printf("%f\n", farenheit(temp));
	return 0;
}
// Fun��o que converte celsius em farenheit

float farenheit(float c)
{
    return(9*c/5 + 32);
}


