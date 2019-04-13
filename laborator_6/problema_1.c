#include <stdio.h>
/*
    Se citește un număr natural n. să se genereze coeficienții dezvoltării binomului (x+1)n
(triunghiul lui Pascal).
 */
int calculeazaSuma(int panaLa);
void printeazaTriunghiul(int triunghi[],int marime);

int main()
{
    int sirTriunghiPascal[100],
        marime,
        indexTriunghiPascal = 3,
        marimePrecedenta = 2,
        marimeCurenta = 3,
        i,
        j,
        offsetSir;

    sirTriunghiPascal[0] = sirTriunghiPascal[1] = sirTriunghiPascal[2] = 1;

    printf("Cate niveluri vrei sa aiba trinunghiul lui Pascal?\n ");
    scanf("%d", &marime);

    for(i = 2; i < marime; i++)
    {
        offsetSir = calculeazaSuma(marimePrecedenta - 1);
        for(j = 0; j < marimeCurenta; j++)
        {
            if(j == 0 || j == (marimeCurenta - 1))
            {
                sirTriunghiPascal[indexTriunghiPascal] = 1;
            }
            else
            {
                sirTriunghiPascal[indexTriunghiPascal] = sirTriunghiPascal[offsetSir] + sirTriunghiPascal[offsetSir - 1];
            }
            indexTriunghiPascal++;
            offsetSir++;
        }
        marimeCurenta++;
        marimePrecedenta++;
    }

    printeazaTriunghiul(sirTriunghiPascal, marime);
}

int calculeazaSuma(int panaLa)
{
    int suma = 0, i;

    for(i = 1; i <= panaLa; i++)
    {
        suma += i;
    }

    return suma;
}


void printeazaTriunghiul(int triunghi[],int marime)
{
    int i, j, k, offsetCurent;

    for(i = 0; i < marime; i++)
    {

        offsetCurent = calculeazaSuma(i);
        j = 0;
        do {
                printf("%d ", triunghi[offsetCurent + j]);
                j++;
        }
        while(j <= i);

    }
}
