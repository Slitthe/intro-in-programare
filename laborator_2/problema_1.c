#include <stdio.h>
/* 
    Enunt problema:
    
    -- 1. Se dă un număr natural „N”. Să se găsească suma primelor „N” numere naturale. 

*/
int main() 
{
    int n, sum = 0, i;

    printf("Introduceti valoarea lui n=");
    scanf("%d", &n);

    i = 1;
    while(i <= n) 
    {
        sum = sum + i;
        i++;
    }

    printf("Suma numerelor de la \"%d\" pana la \"%d\" este = %d", 1, n, sum);
    
    return 0;
}
