#include <stdio.h>
#include <math.h>
/* 
    Enunt problema:
    
    --  Se dau 3 numere naturale A,B,C. Să se scrie schema logică pentru calculul mediei aritmetice,
armomice şi geometrice.

    Media aritmetica = A + B + C / 3
    Media geomtrica = (A * B * C)^1/3
    Media armomice = 3/(1/A + 1/B + 1/C)
*/
int main() 
{
    float a, b, c, mediaAritmetica, mediaGeometrica, mediaArmomice;

    printf("Introduceti valoarea lui a=");
    scanf("%f", &a);
    
    printf("Introduceti valoarea lui b=");
    scanf("%f", &b);

        
    printf("Introduceti valoarea lui c=");
    scanf("%f", &c);

    mediaAritmetica = (a + b + c) / 3;
    mediaGeometrica = powf(a * b * c, (float)1/3);
    mediaArmomice = 3 / ((float)1/a + (float)1/b + (float)1/c);


    printf("Media artimetica= %f; Media geometrica= %f; Media armonica= %f", mediaAritmetica, mediaGeometrica, mediaArmomice);

    return 0;    
}