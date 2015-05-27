#include <stdio.h>
void parimpar(int i){
    if(i%2 == 0)
         printf("É par\n");
    else
         printf("É ímpar\n");
}
int main(){
    int a; 
    scanf("%d", &a);
    parimpar(a);
    return 0;
}
