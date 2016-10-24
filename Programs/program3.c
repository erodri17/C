/**
 * Name: program3.c
 * Purpose: Computes the dimensional weight from an input provided by the user
 * @return  [dimensional weight]
 */
#include<stdio.h>

int main(void)
{
    int height, length, width, volume, weight;

    printf("Enter the height of the box: ");
    scanf("%d", &height);
    printf("Enter the length of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;
        printf("Volume (cubic inches): %d\n", volume);
        printf("Dimensional weight (pounds): %d\n", weight);

        return 0;
}

/**
 * Works Cited
 *
 * King, K. N. C Programming: A Modern Approach. New York: W.W. Norton, 2008. Print.
 *
 * */
