#include <stdio.h>
#include <math.h>
/*
    Se citesc 2 numere naturale n și k , k<n și un sir a0, a1, …, an reprezentând coeficienții unui
    polinom de gradul n. să se afiseze derivata de ordinul k a acestui polinom. Se citește o
    valoare reală x. să se calculeze valoarea polinomului si a derivatei in punctul x.

 */

void printarePolinom(float sirPolinom[], int gradPolinom);
void derivarePolinom(float sirPolinom[], int gradPolinom);
float calculareValoareaPolinom(float sirPolinom[], int gradPolinom, float valoareaX);

int main()
{
    int gradPolinom, gradDerivata, i;
    float sirPolinom[50], valoareX;

    printf("Introduceti gradul polinomului: ");
    scanf("%d", &gradPolinom);

    printf("Introduceti ordinul derivatei (mai mic decat %d): ", gradPolinom);
    scanf("%d", &gradDerivata);

    if(gradDerivata >= gradPolinom)
    {
        printf("!!!!!!!!\nOrdinul derivatei nu a fost mai mic decat gradul polinomului\n!!!!!!!!");
        return 0;
    }

    for(i = gradPolinom; i >= 0; i--)
    {
        printf("{numarul tau} * X^%d ", i);
        scanf("%f", &sirPolinom[i]);
    }

    printf("Polinomul este: ");
    printarePolinom(sirPolinom, gradPolinom);
    for(i = 0; i < gradDerivata; i++)
    {
        derivarePolinom(sirPolinom, gradPolinom - i);
    }
    printf("\nDerivata de gradul %d al polinomului dat este: ", gradDerivata);
    printarePolinom(sirPolinom, gradPolinom - gradDerivata);

    printf("Introduceti valoarea lui X: ");
    scanf("%f", &valoareX);
    printf("\nValoarea polinomului derivat pt X=%d este: %f\n", valoareX, calculareValoareaPolinom(sirPolinom, gradPolinom - gradDerivata, valoareX));
    return 0;
}

float calculareValoareaPolinom(float sirPolinom[], int gradPolinom, float valoareaX)
{
    float valoareaPolinom = 0;
    int i;
    float valoareCurentSir, putere;

    for(i = 0; i <= gradPolinom; i++)
    {
        valoareCurentSir = sirPolinom[i];
        putere = powf(valoareaX, i);
        valoareaPolinom += valoareCurentSir * putere;
    }

    return valoareaPolinom;
}


void derivarePolinom(float sirPolinom[], int gradPolinom)
{
    int i;
    float coeficientulCurent;
    float valoareaPrecedenta;
    float derivata[20];

    for(i = gradPolinom; i > 0; i--)
    {
        coeficientulCurent = sirPolinom[i] * i;
        derivata[i - 1] = coeficientulCurent;
    }

    for(i = 0; i <= gradPolinom - 1; i++)
    {
        sirPolinom[i] = derivata[i];;
    }
}

void printarePolinom(float sirPolinom[], int gradPolinom)
{
    int i;
    char plus = '+';

    printf("\n");
    for(i = 0; i <= gradPolinom; i++)
    {
        plus = (i == gradPolinom) ? ('\0') : (plus);
        printf(" %f * X^%d %c", sirPolinom[gradPolinom - i], gradPolinom - i, plus);
    }
    printf("\n");

}


