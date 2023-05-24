#include <stdio.h>
void main(){
    float n, a;
    printf("Ano de Nascimento:");
    scanf("%f", &n);
    a = 2023 - n;
    if(a < 16.0){
        printf("não votante, ");
    }
    else if(a >= 16.0 && a < 18.0){
        printf("votante, ");
    }
    else if(a >=18.0){
        printf("votante e habilitado, ");
    }
}
