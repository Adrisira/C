#include <stdio.h>

float main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celcius to Fahrenheit \n");

    celcius = lower;
    while (celcius <= upper){
        fahr = celcius * 1.8 + 32;
        printf("%3.0f\t%6.1f\n", celcius, fahr);
        celcius = celcius + step;
    }
}