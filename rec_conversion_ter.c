#include<stdio.h>
void ter(int);
int main()
{
    int n;
    printf("Enter a decimal number :");
    scanf("%d",&n);
    ter(n);
}
void ter (int n)
{
    if (n==0)
        printf("0");
    else if (n==1)
        printf("1");
    else if (n==2)
        printf("2");
    else
    {
        ter(n/3);
        ter(n%3);
        
    }
}
