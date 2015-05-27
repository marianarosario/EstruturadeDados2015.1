#include <stdio.h>
float soma(){
    float a, b;
    printf("Digite os operandos: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b);
    return a+b;    
}
float sub(){
    float a, b;
    printf("Digite os operandos: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b);
    return a-b;
}
float mult(){
    float a, b;
    printf("Digite os operandos: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b);
    return a*b;
}
float divi(){
    float a,b;
    printf("Digite os operandos: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b);
    return a/b;
}
float raiz(){
    float a;
    printf("Digite o operando: \n"); 
    scanf("%f", &a);
    return sqrt(a);
}
int main(){
    float a, b, c; int i;
    printf("Menu de opções:\n1.Somar dois números.\n2.Subtrair dois números\n3.Multiplicar dois números\n4.Dividir dois números\n5.Raiz quadrada de um número\nDigite a opção desejada."); scanf("%d", i);
    if(i == 1){
        printf("%f\n", soma(void));
    }
    else if(i == 2){
         printf("%f\n", sub(void));
    }
    else if(i == 3){
         printf("%f\n", mult(void));
    }
    else if(i == 4){
         printf("%f\n", divi(void));
    }
    else if(i == 5){
         printf("%f\n", raiz(void));
    }
    return 0;
}
