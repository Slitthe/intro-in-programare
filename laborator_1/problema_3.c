#include <stdio.h>
#include <math.h>
/* 
    Enunt problema:
    
    Se dă funcţia f:ℝxℝ→ℝ, 
    f(x,y)=     1) 1/(x^2 + y^2 + 1)    --> x^2 + y^2 < 1
                2) x + y                --> x^2  + y^2 = 1 
                3) 1/(x^2 + y^2 -1)     --> x^2 + y^2 > 1
.Să se calculeze valoarea lui f. 
*/
int main() 
{
    float x, y, valoare;
    int conditie;

    puts("Introduceti valoare lui x=");
    scanf("%f", &x);

    puts("Introduceti valoarea lui y=");
    scanf("%f", &y);

    conditie = x*x + y*y;

    if(conditie == 1) 
    {
        valoare = x + y;
    }
    else if(conditie > 1) {
        valoare = 1 / (x*x + y*y - 1);
    }
    else {
        valoare = 1 / (x*x + y*y + 1);
    }

    printf("f(%f, %f) = %f", x, y, valoare);


    return 0;    
}