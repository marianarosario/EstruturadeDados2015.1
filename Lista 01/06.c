#include <stdio.h>
float media(float a, float b, float c, float d);
main()
{
	float n1, n2, n3, n4;
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	printf("%f\n", media(n1,n2,n3,n4));
	return 0;
}
// Função que calcula media aritmetica
float media(float a, float b, float c, float d)
{
    return((a+b+c+d)/4);
}
