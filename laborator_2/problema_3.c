#include <stdio.h>
/* 
    Enunt problema:
    
    -- Se dă un număr natural “N”. Să se afişeze de câte ori apare cifra X in numarul N. 
*/
int main() 
{
    int cifra, deCateOri = 0, ultimaCifra, numarulInitial;
    long int numarul;
    printf("Calculeaza de cate ori apare cifra X in numarul N------\n\n");

    printf("Introduceti numarul N: ");
    scanf("%li", &numarul);
    numarulInitial = numarul;

    printf("Introduceti cifra X: ");
    scanf("%d", &cifra);

    while(numarul > 0)
    {
        ultimaCifra = numarul % 10;
        if(ultimaCifra == cifra)
        {
            deCateOri++;
        }

        numarul /= 10;
    }

    printf("Cifra %d apare de %d ori in numarul %d", cifra, deCateOri, numarulInitial);    
    return 0;
}