#include <stdio.h>

/*
    Enunt problema:

    --- 5. Se dau 2 numere naturale A şi B. Să se afle cel mai mare divizor comun. 
*/

int main() 
{
    int a, b, smallNum, bigNum, tempNumStorage;

    printf("Introdu cele 2 numere (separate de virgula): ");
    scanf("%d,%d", &a, &b);

    smallNum = a < b ? a : b;
    bigNum = a > b ? a : b;

    // se foloseste algoritmul lui Euclid pt aflarea cmmdc
    while(smallNum != 0)
    {
        tempNumStorage = smallNum;
        smallNum = bigNum % smallNum;
        bigNum = tempNumStorage;
    }

    bigNum = bigNum == a || bigNum == b ? 1 : bigNum;

    printf("Cel mai mare divizor comun este: %d", bigNum);

    return 0;
}