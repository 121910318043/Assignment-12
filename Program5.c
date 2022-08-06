#include<stdio.h>
//recursive function to print first N even natural numbers.
void Neven(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Neven(n);
    return 0;
}
void Neven(int n)
{
    if(n==1)
    {
        printf("%d ",n*2);
        return;
    }
    Neven(n-1);
    printf("%d ",2*n);
}
