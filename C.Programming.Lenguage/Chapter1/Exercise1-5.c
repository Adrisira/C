#include <stdio.h>

float main()
{
    float celcius;

    printf("Celcius to Fahrenheit \n");

    for (celcius = 300; celcius >= 0; celcius = celcius - 20)
        printf("%3.0f\t%6.1f\n", celcius, celcius * 1.8 + 32);
    
}