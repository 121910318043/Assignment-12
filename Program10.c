#include<stdio.h>
//Reverse of a number using recursion.
void reverse(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    if(n<1)
        return;
    printf("%d",n%10);
    reverse(n/10);
}
