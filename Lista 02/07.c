#include <stdio.h>
float maior(float a, float b, float c){
      if(a > b && a > c){
           return a;
      }
      else if(b > a && b > c){
           return b;
      }
      else{
           return c;
      }
}
float meio(float a, float b, float c){
      if(a > b && a < c || a < b && a > c){
           return a;
      }
      else if(b > a && b < c || b < a && b > c){
           return b;
      }
      else{
           return c;
      }
}
float menor(float a, float b, float c){
      if(a < b && a < c){
           return a;
      }
      else if(b < a && b < c){
           return b;
      }
      else{
           return c;
      }
}
void result(float q,float w,float e,int r){
    if(r == 1){
         printf("%f %f %f\n", q, w, e);
    }
    else if(r == 2){
         printf("%f %f %f\n", e, w, q);
    }
    else{
         printf("%f %f %f\n", w, q, e);
    }
    
}
int main(){
    float a, b, c, m, n, p; int i;
    printf("Digite os números a serem ordenados: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b); 
    scanf("%f", &c);
    printf("Digite o valor de I: \n"); 
    scanf("%d", &i);
    m = maior(a, b, c); 
    n = meio(a, b, c); 
    p = menor(a, b, c);
    result(m,n,p,i);
    return 0;
}
