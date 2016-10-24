/**
 * Name: program4.c
 * Purpose: Converts a Fahranheith temperature to Celsius
 * @return  [Celsius]
 */
#include<stdio.h>

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main(void){
    float fahrenheit, celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    /*Conversion formula from Fahrenheit to Celsius*/
    celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

    printf("Celsius equivalent: %.1f\n",celsius);
    return 0;
}

/**
 * Works Cited
 *
 * King, K. N. C Programming: A Modern Approach. New York: W.W. Norton, 2008. Print.
 *
 * */