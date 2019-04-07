#include <stdio.h>
/*
    Enunt problema:

    -- Se citeste un sir de n numere reale. Să se afișeze: suma acestor numere, valoarea maximă
din șir.
*/
float maxNumInArray(float numList[], int howMany)
{
    int i;
    float max = numList[0];

    for(i = 1; i < howMany; i++)
    {
        max = (numList[i] > max) ? (numList[i]) : (max);
    }

    return max;
}

float sumOfNumInArray(float numList[], int howMany)
{
    int i;
    float sum = 0;

    for(i = 0; i < howMany; i++)
    {
        sum += numList[i];

    }
    return sum;
}

int main()
{
    float numList[50];
    int i, howMany;

    printf("How many numbers you want to enter?\n");
    scanf("%d", &howMany);

    for(i = 0; i < howMany; i++)
    {
        printf("Enter the number with the index of %d: ", i + 1);
        scanf("%f", &numList[i]);
    }

    printf("\n---Max is: %f\n", maxNumInArray(numList, howMany));
    printf("---Sum is: %f\n", sumOfNumInArray(numList, howMany));

    return 0;
}
