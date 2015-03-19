#include <stdio.h>
float salario(float x);
main()
{
    float sal;
    scanf("%f", &sal);
    printf("%f\n", salario(sal));
    return 0;
}
// Função que calcula novo salario apos gratificação e imposto
float salario(float x)
{
    return(x+50-(0.1*x));
}
