#include<stdio.h>
//recursive function to print first N even natural numbers in reverse order.
void Reven(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    Reven(n);
    return 0;
}
void Reven(int n)
{
    if(n==1)
    {
        printf("%d ",n*2);
        return;
    }
    printf("%d ",n*2);
    Reven(n-1);
}
