#include<stdio.h>
void binary(int);
int main()
{
    int n;
    printf("Enter a decimal number :");
    scanf("%d",&n);
    binary(n);
}
void binary (int n)
{
    if (n==0)
        printf("0");
    else if (n==1)
        printf("1");
    else
    {
        binary(n/2);
        printf("%d",n%2);
        
    }
}
