#include<stdio.h>
int main(){

    float celsius, fahrenheit;

   
    printf("\nEnter the Temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit
    fahrenheit = (1.8 * celsius) + 32;

    
    printf("\nTemperature in Fahrenheit: %.2f\n", fahrenheit);

    return 0;
}
