#include <stdio.h>
/* 
    Enunt problema:
    
    Ecuaţia de gradul 1. A*x+B=0;

    x: -b/a
*/
int main() {
    float a, b, x;


    printf("Valoare lui a= ");
    scanf("%f", &a);

    printf("Valoare lui b= ");
    scanf("%f", &b);

    if(a == 0 )
    {
        printf("Impartire la 0");
    }
    else {
        x = -b / a;
        printf("%f", x);
    }

    return 0;
}


