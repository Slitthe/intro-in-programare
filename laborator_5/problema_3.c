#include <stdio.h>
/*
    Enunt problema:

    --3. Se citeste o matrice pătratică A de dimensiune n x n. Să se calculeze transpusa matricii A. 
*/
void printeazaMatricea(int matrice[10][10], int marime, char mesaj[]);

int main()
{
    int matriceInitiala [10][10], matriceTranspusa[10][10], marime, i, j;

    printf("\nIntroduceti marimea matricei patratica n x n: ");
    scanf("%d", &marime);

    for(i = 0; i < marime; i++)
    {
        for(j = 0; j < marime; j++)
        {
            printf("Introduceti valoarea elementului din randul %d si coloana %d: ", i + 1, j + 1);
            scanf("%d", &matriceInitiala[i][j]);

            matriceTranspusa[j][i] = matriceInitiala[i][j];
        }
    }

    printeazaMatricea(matriceInitiala, marime, "Matricea initiala este: ");
    printeazaMatricea(matriceTranspusa, marime, "Matricea transpusa este: ");

    return 0;
}

void printeazaMatricea(int matrice[10][10], int marime, char mesaj[])
{
    int i, j;

    printf("\n%s", mesaj);
    for(i = 0; i < marime; i++)
    {
        printf("\n[ ");
        for(j = 0; j < marime; j++)
        {
            printf("%d%c", (matrice[i][j]), (j == (marime - 1)) ? '\0' : ',');
        }
        printf("]");
    }
    printf("\n");
}

