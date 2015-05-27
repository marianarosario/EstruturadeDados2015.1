#include <stdio.h>
#include <stdlib.h>

struct ponto {
		float x;
		float y;
	};

void ler(struct ponto *p){
	scanf("%f", &p->x);
	scanf("%f", &p->y);
}

void imprimir(struct ponto *p){
	printf("%f\n", p->x);
	printf("%f\n", p->y);
}

void main(){
	struct ponto v;
	struct ponto *p;

	ler(&v);	
	imprimir(&v);

}
