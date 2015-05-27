typedef struct a{int *V;
		}Vet;

typedef struct b{Vet *M;
		 int l;
		 int c;
		}Matriz;

bool cria(Matriz *Z){
	Z=(Matriz*)malloc(sizeof(Matriz));
	if(Z==NULL)
		return false;
	Z->l=rand()%10+1;
	Z->c=rand()%10+1;
	//scanf("%d %d", &Z->l, &Z->c);
	int k;
	Z->M=(Vet*)malloc(Z->l*sizeof(Vet));
	for(k=0; k<Z->l; k++)
		Z->M[k].V=(int*)malloc(Z->c*sizeof(int));
	return true;
}

void libera(Matriz *Z){
	int i, j;
	for(i=0; i<Z->l; i++){
			free(Z->M[i].V);
			Z->M[i].V=NULL;
	}
	free(Z->M);	
	Z->M=NULL;
	free(Z);
	Z=NULL;
}

bool acessa(Matriz *Z, int i, int j, int *k){
	if(i>Z->l || j>Z->c)
		return false;
	*k=Z->M[i].V[j];
	return true;
}

bool atribui(Matriz *Z, int i, int j, int k){
	if(i>Z->l || j>Z->c)
		return false;
	Z->M[i].V[j]=k;
	return true;
}

int linhas (Matriz *Z){
	return Z->l;
}

int colunas (Matriz *Z){
	return Z->c;
}

