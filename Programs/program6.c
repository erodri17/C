/**
 * Name: program6.c
 * Purpose: Calculating teh Broker's Commission
 */

/*Broker's charges amounts shown in the following table*/
/*                                    */
/* Transaction Size | Commission rate */
/* Under 2,500      | $30+1.7%        */
/* $2,500-$6,250    | $56+0.66%       */
/* $6,250-$20,000   | $76+0.34%       */
/* $20,000-$50,000  | $100+0.22%      */
/* $50,000-$500,000 | $155+0.11%      */
/* Over 500,000     | $225+0.09%      */
/*                                    */
#include <stdio.h>

int main(void)
{
    float commission, value;

    printf("Enter value of trade: " );
    scanf("%f", &value);

    if(value < 2500.00f)
        commission = 30.00f + .017f * value;

        else if(value < 6250.00f)
        commission = 56.00f + .0066f * value;

        else if(value < 20000.00f)
        commission = 76.00f + .0034f * value;

        else if(value < 50000.00f)
        commission = 100.00f + .0022f * value;

        else if(value < 5000000.00f)
        commission = 155.00f + .0011f * value;

        else
        commission = 255.00f + .0009f * value;

        if (commission < 39.00f)
        commission = 39.00f;

        printf("Commission: $%.2f\n", commission);
        return 0;
}

/**
 * Works Cited
 *
 * King, K. N. C Programming: A Modern Approach. New York: W.W. Norton, 2008. Print.
 *
 * */