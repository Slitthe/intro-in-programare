#include <stdio.h>
/*
    Enunt problema:

    -- 4. Să se genereze şirul lui Fibonacci pentru primele “N” numere.
*/

int main()
{
    int n, i, firstNumFibo = 0, secondNumFibo = 1, tempSum;

    printf("Entere the number: ");
    scanf("%d", &n);

    printf(" %d  %d ", firstNumFibo, secondNumFibo);
    for(i = 0; i < n; i++)
    {
        tempSum = firstNumFibo + secondNumFibo;
        firstNumFibo = secondNumFibo;
        secondNumFibo = tempSum;
        printf(" %d ", tempSum);
    }

    return 0;
}
