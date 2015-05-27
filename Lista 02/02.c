#include <stdio.h>

float media(float a, float b, float c){
  return ((a+b+c)/3);
}

void res(float f){
  if(f<3)
		printf("Reprovado\n");
	else
		if(f<7)
			printf("Vai precisar de %f\n", 7-f);
		else
			printf("Aprovado\n");
}

int main(){
	float n1, n2, n3, m;
	scanf("%f %f %f", &n1, &n2, &n3);
	m=media(n1, n2, n3);
	printf("%f\n", m);
	res(m);
	return 0;
}
