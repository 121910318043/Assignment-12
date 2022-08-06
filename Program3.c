#include<stdio.h>
//recursive function to print first N odd natural numbers.
void fodd(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    fodd(n);
    return 0;
}
void fodd(int n)
{
    if(n==0)
        return;
    fodd(n-1);
    printf("%d ",2*n-1);
}
