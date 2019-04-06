#include <stdio.h>
/*
    Enunt problema:

    -- 1. Se dă un număr natural “N”. Să se testeze dacă este prim sau nu.
*/

int isPrime(int num);

int main()
{
    int n;

    printf("Introduceti numarul: ");
    scanf("%d", &n);

    if(isPrime(n) == 1)
    {
        printf("Numarul este prim");
    }
    else
    {
        printf("Numarul nu este prim");
    }

    return 0;
}

int isPrime(int num)
{
    int i, isNumPrime = 1;
    for(i = num - 1; i > 1; i--)
    {
        if(num % i == 0) {
            isNumPrime = 0;
            break;
        }
    }

    return isNumPrime;
}
