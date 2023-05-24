#include <stdio.h>
void main(){
    float n1, n2, n3, m;
    printf("quais as notas:");
    scanf("%f%f%f", &n1, &n2, &n3);
    m = ((n1 + n2 + n3)/3);
    if(m <= 3.0) {
        printf("aluno reprovado, ");
    }
    else if(m > 3.0 && m <= 7.0){
        printf("aluno exame, ");
    }
    else if(m > 7.0 && m <= 10.0){
        printf("aluno aprovado, ");
    }
    else {
        printf("erro, ");
    }
    printf("media de:%.2f", m);
}
