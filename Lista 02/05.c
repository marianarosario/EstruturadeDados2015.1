#include <stdio.h>
void orgnaiza(float a,float b,float c, float d){
    if (d > a){
          printf("%f %f %f %f", d, a, b, c);
    }
    else if (d > b && d < a){
          printf("%f %f %f %f", a, d, b, c);
    }
    else if (d > c && d < b){
          printf("%f %f %f %f", a, b, d, c);
    }
    else{
          printf("%f %f %f %f", a, b, c, d);
    }
    printf("\n");
}
int main(){
    float i, j, k, l;
    printf("Digite três números em ordem crescente: \n"); 
    scanf("%f", &i); 
    scanf("%f", &j); 
    scanf("%f", &k);
    printf("Digite um número: \n");  
    scanf("%f", &l);
    organiza(i,j,k,l);
    return 0;
}
