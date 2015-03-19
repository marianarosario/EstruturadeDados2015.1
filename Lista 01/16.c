#include <stdio.h>
float salariofinal(float s);
main()
{
    float sal;
    scanf("%f", &sal);
    printf("%f\n", salariofinal(sal));
    return 0;
}
// Função que calcula o salario final, apos gratificação e imposto
float salariofinal(float s)
{
    return((s+(0.05*s))-(0.07*s));
}
