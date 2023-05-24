#include<stdio.h>
void main(){
    float f, s;
    printf("salario: ");
    scanf("%f", &s);
    if(s < 500.00) {  
        f = (s * 0.15) + s;
    }
    else if(s >= 500.00 && s <= 1000.00 ) {
        f = (s * 0.1) + s;
    }
    else {  
        f = (s * 0.05) + s;
    }
    printf("salario atual: %.2f\nSalario reajustado: %.2f", s, f);
}