#include <stdio.h>

main() 
{
    float celc, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celc = lower;

    printf("Celcius\tFahrenheit\n");

    while (celc <= upper) {
        fahr = (9.0/5.0) * celc + 32;
        
        printf("%10.0f\t%7.1f\n", celc, fahr);
        celc = celc + step;
    }
}
        
