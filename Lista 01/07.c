#include <stdio.h>
float cent(float n);
main()
{
	float x;
	scanf("%f", &x);
	printf("%f", cent(x));
	return 0;
}
// Fun��o que converte metros para centimetros
float cent(float n)
{
    return(n*100);
}
