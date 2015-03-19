#include <stdio.h>
float salarionovo(float s, float p);
main ()
{
    float sal, pcent;
    scanf("%f%f", &sal, &pcent);
    printf("%f\n", salarionovo(sal, pcent));
    return 0;
}
// Função que calcula o novo salario
float salarionovo(float s, float p)
{
    return(s+((p/100)*s));
}
