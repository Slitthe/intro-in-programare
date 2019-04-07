#include <stdio.h>
#include <math.h>
/*
    Enunt problema:

    -- Se citeste un sir de n+1 numere reale a0, a1, …, an reprezentând coeficienții unui polinom de
gradul n . Se citeste o valoare reală x. să se calculeze valoarea polinomului in punctul x
*/
void afiseazaPolinom(float listaCoeficienti[], int lungimePolinom)
{
    int i;

    printf("\n\n");
    for(i = 0; i <= lungimePolinom; i++)
    {
        char separator = i == lungimePolinom ? ' ' : '+';
        printf("%f * X^%d %c ", listaCoeficienti[i], i, separator);
    }
    printf("\n\n");
}

float calculeazaSuma(float listaCoeficienti[], int lungimePolinom, float valoareNecunoscuta)
{
    float suma = 0;
    int i;

    for(i = 0; i <= lungimePolinom; i++)
    {
        suma += listaCoeficienti[i] * powf(valoareNecunoscuta, i);
    }

    return suma;
}

int main()
{
    float listaCoeficienti[30], valoareaNecunoscuta;
    int lungimePolinom, i;

    printf("Introduceti puterea cea mai mare din polinom: ");
    scanf("%d", &lungimePolinom);

    for(i = 0; i <= lungimePolinom; i++)
    {
        printf("{numarul tau} * X^%d: ", i);
        scanf("%f", &listaCoeficienti[i]);
    }

    afiseazaPolinom(listaCoeficienti, lungimePolinom);

    printf("\nIntroduceti valoarea lui X: ");
    scanf("%f", &valoareaNecunoscuta);

    printf("\nSuma pt X=%f este: %f\n", valoareaNecunoscuta, calculeazaSuma(listaCoeficienti, lungimePolinom, valoareaNecunoscuta));


    return 0;
}
