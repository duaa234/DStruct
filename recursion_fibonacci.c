#include<stdio.h>
int fibonacci(int);
int main()
{
    int n,i,a;
    printf("Enter the nth place of the fibonacci series");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a = fibonacci(i);
        printf("%d",a);
    }

}
int fibonacci (int n)
{
    if(n==0)
    {
        return 0;

    }
    else if(n==1)
    {
        return 1;

    }
    else
    {
        return ((fibonacci(n-1) + fibonacci(n-2));
    }

};
