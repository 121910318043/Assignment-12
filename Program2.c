#include<stdio.h>
//recursive function to print first N natural numbers in reverse order
void firstNnatural_in_reverse(int);
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    firstNnatural_in_reverse(n);
    return 0;
}
void firstNnatural_in_reverse(int n1)
{
    if(n1==0)
        return;
    printf("%d ",n1);
    firstNnatural_in_reverse(n1-1);
}

/*//recursive function to print first N natural numbers in reverse order method 1(with two arguments).
void firstNnatural_in_reverse(int,int);
int main()
{
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    i=1;
    firstNnatural_in_reverse(n,i);
    return 0;
}
void firstNnatural_in_reverse(int n1,int i1)
{
    if(n1==0)
        return;
    firstNnatural_in_reverse(n1-1 , i1+1);
    printf("%d ",i1);
}*/
