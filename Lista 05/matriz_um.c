#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "esboco-m1.h"


void main(){
	Matriz *k;
	int i, j, l;
	int n;
	n=cria(k);
	while(!n){
		printf("Não criou T.T\n");
		n=cria(&k, rand()%10+1, rand()%10+1);
		
	}
	for(i=0; i<k.linhas; i++){
		for(j=0; j<k.colunas; j++){
			n=atribui(&k, i, j, rand()%31);
			if(n)
				printf("atribuiu\n");
			else
				printf("n atribuiu\n");
		}
	}
	while(i>0){
		n=acessa(k, rand()%10, rand()%10, &l);
		if(n)		
			printf("%d\n", l);
		else
			printf("numeros invalidos\n");
		i--;
	}
	for(i=0; i<k.linhas; i++){
		for(j=0; j<k.colunas; j++)
			printf("%d ", k.Mt[(i*k.colunas)+j]);
		printf("\n");
	}
	while(j>0){
		n=atribui(&k, rand()%10, rand()%10, rand()%31);
		if(n)
			printf("atribuiu\n");
		else
			printf("n atribuiu\n");
	}
	printf("Numero de linhas: %d\n", linhas(k));
	printf("Numero de colunas: %d\n", colunas(k));
	for(i=0; i<k.linhas; i++){
		for(j=0; j<k.colunas; j++)
			printf("%d ", k.Mt[(i*k.colunas)+j]);
		printf("\n");
	}
	libera(&k);

}
	
