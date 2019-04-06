#include <stdio.h>
/*
    Enunt problema:

    -- Se dă un număr natural “N”. Să se descompună în factori primi. 
*/
void printPrimeFactors(int primeFactors[], int index);

int main()
{
    int num, i, primeFactors[100], primeFactorsIndex = 0;

    printf("Introduceti numarul: "); 
    scanf("%d", &num);

    while(num > 1) 
    {
        for(i = 2; i <= num; i++)
        {
            if(num % i == 0) {
                primeFactors[primeFactorsIndex] = i;
                primeFactorsIndex++;
                num /= i;
                break;
            }
        }
    }

    for(i = 0; i < primeFactorsIndex; i++) 
    {
        printf(" %d x", primeFactors[i]);
    }
    printf(" 1");

    return 0;
}
