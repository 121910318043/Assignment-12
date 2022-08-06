#include<stdio.h>
//recursive function to print first N odd natural numbers in reverse order.
void revfodd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    revfodd(n);
    return 0;
}
void revfodd(int n)
{
    if(n==0)
       return;
    printf("%d ",2*n-1);
    revfodd(n-1);
}
