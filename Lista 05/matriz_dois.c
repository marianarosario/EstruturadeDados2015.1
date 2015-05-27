#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "esboco m2.h"

int main(){
	int i, j, k;
	Matriz *M;
	bool n;
	cria(M);
	printf("%d\n", colunas(M));
	printf("%d\n", linhas(M));
	for(i=0; i<(M->l); i++){
		for(j=0; j<(M->c); j++){
			n=atribui(M, i, j, rand()%31);
			if(n)
				printf("Atribuiu\n");
			else
				printf("N atribuiu\n");
		}
	}
	for(i=0; i<10; i++){
		n=acessa(M, rand()%10, rand()%10, &k);
		if(n)
			printf("%d", k);
		else
			printf("Nao achou\n");
	}
	for(i=0; i<M->l; i++){
		for(j=0; j<M->c; k++){
			printf("%d ", M->M[i].V);
		}
		printf("\n");
	}
	for(i=0; i<10; i++){
		n=atribui(M, i, j, rand()%31);
			if(n)
				printf("Atribuiu\n");
			else
				printf("N atribuiu\n");
	}
	for(i=0; i<M->l; i++){
		for(j=0; j<M->c; k++){
			printf("%d ", M->M[i].V[j]);
		}
		printf("\n");
	}
	printf("%d\n", colunas(M));
	printf("%d\n", linhas(M));
	libera(M);
	return 0;
}
