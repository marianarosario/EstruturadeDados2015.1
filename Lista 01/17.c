#include <stdio.h>
float salario(float x);
main()
{
    float sal;
    scanf("%f", &sal);
    printf("%f\n", salario(sal));
    return 0;
}
// Fun��o que calcula novo salario apos gratifica��o e imposto
float salario(float x)
{
    return(x+50-(0.1*x));
}
