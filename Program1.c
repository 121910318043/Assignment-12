#include<stdio.h>
//recursive function to print first N natural numbers.
void firstNnatural(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    firstNnatural(n);
    return 0;
}
void firstNnatural(int n)
{
    if(n==0)
        return;
    firstNnatural(n-1);
    printf("%d ",n);
}
