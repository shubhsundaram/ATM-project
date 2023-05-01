#include <stdio.h>
int main()
{
    //ATM has Rs 16000 as deposit in it.
    //money to be withdraw should be in the multipe of Rs 100.
    int amount, rem;
    printf("Enter the amount ");
    scanf("%d", &amount);
    if (amount % 100 == 0)
    {
        if (amount >= 10000 && amount <=16000)
        {
            rem = (amount - 10000);
            printf("1000 rs notes are : %d\n", (10000 / 1000));
            if (rem >= 500)
            {
                printf("500 note are: %d\n", (rem / 500));
                rem = rem % 500;
                printf("100 rs notes are : %d\n", (rem / 100));
            }
            else
            {
                rem = rem % 500;
                printf("100 notes are : %d\n", (rem / 100));
            }
        }
        if (amount < 10000 && amount>=100)
        {
            rem = amount % 1000;
            printf("The 1000 notes are : %d\n", (amount / 1000));
            if (rem >= 500)
            {
                printf("500 note are: %d\n", (rem / 500));
                rem = rem % 500;
                printf("100 rs notes are : %d\n", (rem / 100));
            }
            else
            {
                rem = rem % 500;
                printf("100 notes are : %d\n", (rem / 100));
            }
        }
        if(amount >16000){

            printf("insufficient fund");
        }
    }
    else
    {
        printf("Invalid amount!!\n please enter in the multiple of 100");
    }
    return 0;
}