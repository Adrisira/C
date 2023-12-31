#include <stdio.h>

/*print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300 */

/*El int antes del main no viene en el ejemplo, pero te salta un warning si no lo pones, 
simplemente le dices que la funcion main va a devolver integers*/
float main()
{
    float fahr, celcius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celcius \n");

    fahr = lower;
    while (fahr <= upper){
        celcius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celcius);
        fahr = fahr + step;
    }
}