#include <stdio.h>
void main(){
    float h, p;
    char g;
    printf("qual sua altura:");
    scanf("%f", &h);
    printf("qual seu genero: M/F\n");
    scanf(" %c", &g);
    if(g =='M'){
        p = (72.7 * h) - 58;
        printf("peso ideal, ");
    }
    else if(g == 'F');
        p = (62.1 * h) - 44.7;
        printf("peso ideal, ");
    }