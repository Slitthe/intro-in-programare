#include <stdio.h>
/* 
    Enunt problema:
    
    -- 2. Se dă un număr natural “N”. Să se găsească suma cifrelor numărului. 
*/

int main() 
{
    int numarul, ultimaCifra, suma = 0, numarulInitial;

    printf("Valoarea cifrelor urmatorului numar intreg: ");
    scanf("%d", &numarul);
    numarulInitial = numarul;

    while(numarul > 0)
    {
        ultimaCifra = numarul % 10;
        suma += ultimaCifra;
        numarul = numarul / 10;
    }

    printf("Suma cifrelor numarului %d este = %d", numarulInitial, suma);

    return 0;
}

