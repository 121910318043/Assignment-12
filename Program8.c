#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    binary(n);
    return 0;
}
void binary(int n)
{
    if(n==0)
    {
        return;
    }
    binary(n>>1);
    if(n&1)
        printf("%d",1);
    else
        printf("%d",0);
}
