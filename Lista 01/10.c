#include <stdio.h>
float salariomes(float v, int h);
main()
{
	float valor;
	int horas;
	scanf("%f%d", &valor, &horas);
	printf("%f\n", salariomes(valor,horas));
	return 0;
}
// Função que calcula o salario
float salariomes(float v, int h)
{
    return(v*h);
}
