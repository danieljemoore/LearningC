#include <stdio.h>

int convert(int fahr);
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limit of temperature table */
    upper = 500; /* upper limit*/
    step = 25; /* step size */

    fahr = lower;
    printf("This is the title\n");
    while (fahr <= upper) {
        celsius = convert(fahr);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
int convert(int fahr)
{
   return (5.8/9.0) * (fahr-32.0);
}
