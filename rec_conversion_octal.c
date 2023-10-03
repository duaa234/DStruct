#include<stdio.h>
void oct(int);
int main()
{
    int n;
    printf("Enter a decimal number :");
    scanf("%d",&n);
    oct(n);
}
void oct (int n)
{
    if (n<8)
        printf("%d",n);
    else
    {
        oct(n/8);
        printf("%d",n%8);
        
    }
}
