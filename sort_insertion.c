#include<stdio.h>

int main()
{
    int i,j,key;
    int a[6]={9,3,5,6,1,4};
    for(i=1;i<6;i++)
    {
        key = a[i];
        j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]= key;
    }
    for(i=0;i<6;i++)
    printf("%d ",a[i]);
}
