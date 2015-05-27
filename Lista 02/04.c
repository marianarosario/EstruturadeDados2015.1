#include <stdio.h>
void func(float i, float j, float k){
    if (i > j && i > k){
          if (i > j)
                printf("%f %f %f\n", i, j, k);
          else
                printf("%f %f %f\n", i, k, j);
    }
    else if (j > i && j > k){
          if (i > k)
                printf("%f %f %f\n", j, i, k);
          else
                printf("%f %f %f\n", j, k, i);
    }
    else{
          if (i > j)
                printf("%f %f %f\n", k, i, j);
          else
                printf("%f %f %f\n", k, j, i);
    }
}

int main(){
    float a, b, c;
    printf("Digite um número: \n"); scanf("%f", &a);
    printf("Digite um número: \n"); scanf("%f", &b);
    printf("Digite um número: \n"); scanf("%f", &c);
    func(a,b,c);
    return 0;
}
