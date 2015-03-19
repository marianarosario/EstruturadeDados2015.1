#include <stdio.h>
float areatri(float ba, float al);
main()
{
    float base, altura;
    scanf("%f%f", &base, &altura);
    printf("%f\n", areatri(base,altura));
    return 0;
}
// Função que calcula area do triangulo
float areatri(float ba, float al)
{
    return((ba*al)/2);
}
