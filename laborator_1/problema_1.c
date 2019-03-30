#include <stdio.h>
/* 
    Enunt problema:
    
    -- Se dau două numere reale A şi B. Să se calculeze şi să se tipărească suma, diferenţa, produsul şi
câtul celor două numere.
*/
int main() 
{
    float a, b, suma, diferenta, produsul, catul;

    printf("Introdu valoare lui a=");
    scanf("%f", &a);
    
    printf("Introdu valoare lui b=");
    scanf("%f", &b);

    suma = a + b;
    diferenta = a - b;
    produsul = a * b;
    catul = (int)a % (int)b;

    printf("Suma= %f; Diferenta= %f; Produsul= %f; Catul= %f", suma, diferenta, produsul, catul);

    return 0;    
}