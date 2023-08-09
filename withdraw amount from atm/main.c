#include <stdio.h>
#include <stdlib.h>

int main()
{
    int balance,amount;
    printf("enter amount");
    scanf("%d",&amount);
    balance=100000-amount;
    printf("balance=%d\n",balance);
    if(amount<balance)
        printf("Withdrawal is possible");
    else
        printf("Withdrawal is not possible");
}




















