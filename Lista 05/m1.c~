typedef struct m{int linhas;
	  	 int colunas;
		 int *Mt;
		 }Matriz;

bool cria(Matriz *M){
	M=(Matriz*)malloc(sizeof(Matriz));

	scanf("%d", M->linhas);
	scanf("%d", M->colunas);
	
	M->Mt=(int*)malloc((M->linhas*M->colunas)*sizeof(int));
	if (M->Mt==NULL)
		return false;
	return true;
}

void libera(Matriz *M){
	free(M->Mt);
	M->Mt=NULL;
	free(M);
	M=NULL;
}

bool acessa(Matriz *M, int i, int j, int *k){
	if(i*j>=M->linhas*M->colunas)
		return false;	
	k=M->Mt[(i*M->colunas)+j];
	return true;
}

bool atribui(Matriz *M, int i, int j, int k){
	if(i*j>=M->linhas*M->colunas)
		return false;
	M->Mt[(i*M->colunas)+j]=k;
	return true;
}

int linhas(Matriz *M){
	return M->linhas;
}


int colunas(Matriz *M){
	return M->colunas;
}

	  
