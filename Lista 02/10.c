
/*maior o ano mais antigo*/

#include<stdio.h>
#include<time.h>

void data(int dia1,int dia2,int mes1,int mes2,int ano1,int ano2)
{
	if(ano1>ano2)//compara ano primeiro 
	{
		printf("cronologicamente a data  %d /  %d / %d, eh a maior \n",dia1,mes1,ano1);// mostra a data
	}
	if(ano1<ano2)//compara ano primeiro 
	{
		printf("cronologicamente a data  %d /  %d / %d, eh a maior\n ",dia2,mes2,ano2);// mostra a data
	}
	if(ano1==ano2)//compara ano primeiro caso o ano for igual so vai saber o maior pelo mês
	{
		if(mes1>mes2)//compara o mes 
		{
			printf("cronologicamente a data  %d /  %d / %d, eh a maior\n",dia1,mes1,ano1);// mostra a data
		}
		if(mes1<mes2)//compara mes
		{
			printf("cronologicamente a data  %d /  %d / %d, eh a maior\n ",dia2,mes2,ano2);// mostra a data
		}
		if (mes1==mes2)// compara mes caso mes seja igual compara o dia
		{
			if(dia1>dia2)// compara o dia
			{
				printf("cronologicamente a data  %d /  %d / %d, eh a maior\n",dia1,mes1,ano1);// mostra a data
			}
			if(dia1<dia2)// compara o dia
			{
				printf("cronologicamente a data  %d /  %d / %d, eh a maior\n",dia2,mes2,ano2);// mostra a data
			}
			if(dia1==dia2)// data igual
			{
				printf("as datas sao iguais");// avisa q as datas sao iguais
			}
		}
	}
}

int main()
{
	int dia1,dia2,mes1,mes2,ano1,ano2;
	printf("Digite uma data");
	scanf("%d",&dia1);
	scanf("%d",&mes1);
	scanf("%d",&ano1);
	printf("Primeira data:  %d /  %d / %d\n ",dia1,mes1,ano1);
	printf("Digite outra data\n");
	scanf("%d",&dia2);
	scanf("%d",&mes2);
	scanf("%d",&ano2);
	printf("segunda data:  %d / %d / %d \n",dia2,mes2,ano2);
	data(dia1,dia2,mes1,mes2,ano1,ano2);
	return 0;
}
