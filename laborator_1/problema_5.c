#include <stdio.h>
#include <math.h>
/* 
    Enunt problema:
    
    Ecuaţia de gradul 2. A*X↑2+B*X+C=0


*/
int main()
{
    float a, b, c, x1, x2, delta;

    printf("Valoarea lui a, b, si c (separate cu virgula)= ");
    scanf("%f,%f, %f",  &a, &b, &c);
    printf("\n");

    if(a == 0)
    {
        if(b == 0) 
        {
            printf("Impartire la 0");
        }
        else 
        {
            printf("x este= %f", -c/b);
        }
    }
    else {
        delta = b*b - 4*a*c;

        if(delta > 0) 
        {
            x1 = (-b + sqrtf(delta)) / 2 * a;
            x2 = (-b - sqrtf(delta)) / 2 * a;
            printf("Solutiile ecuatiei sunt: x1=%f, x2=%f", x1, x2);
        }
        else if(delta == 0) 
        {
            x1 = x2 = (-b + sqrtf(delta)) / 2 * a;
            printf("Solutia unica ecuatiei x1=x2=%f", x1);
        }
        else {
            printf("Solutii complexe");
        }

    }



    return 0;
}