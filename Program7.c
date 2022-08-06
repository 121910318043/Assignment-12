#include<stdio.h>
//recursive function to print squares of first N natural numbers.
void sqNnatural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    sqNnatural(n);
    return 0;
}
void sqNnatural(int n)
{
    if(n==1)
    {
        printf("%d ",n*n);
        return;
    }
    sqNnatural(n-1);
    printf("%d ",n*n);
}
