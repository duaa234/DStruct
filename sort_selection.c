#include<stdio.h>

int main()
{
    int i,j,min,temp;
    int a[6]={9,3,5,6,1,4};
    for(i=0;i<5;i++)
    {
        min = i;
        for(j=i+1;j<6;j++)
        {
            if(a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min]=a[i];
        a[i]= temp;
    }
    for(i=0;i<6;i++)
    {
        printf("%d ",a[i]);
    }
    
}
