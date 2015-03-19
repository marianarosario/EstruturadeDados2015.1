#include <stdio.h>
float media3(float a, float b, float c);
main()
{
	float n1, n2, n3;
	scanf("%f%f%f", &n1, &n2, &n3);
	printf("%f\n", media3(n1,n2,n3));
	return 0;
}
// Função que calcula media aritmetica de 3 notas
float media3(float a, float b, float c)
{
    return((a+b+c)/3);
}
