#include <stdio.h>
int soma(int x, int y, int z, int w);
main()
{
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	printf("%d\n", soma(a,b,c,d));
	return 0;
}
// Função que soma 4 inteiros
int soma(int x, int y, int z, int w)
{
    return (x+y+z+w);
}
