#include <stdio.h>
float maior(float a, float b){
      if(a > b || a == b)
           return a;
      else
           return b;
}
int main(){
    float a, b, c;
    printf("Digite dois números: \n"); 
    scanf("%f", &a); 
    scanf("%f", &b);
    c = maior(a, b);
    printf("%f\n", c);
    return 0;
}
