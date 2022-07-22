#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[]={90,50,40,60,80,10};
int i,j,temp;
for(i=0;i<4;i++)
{
    for(j=i+1;j<6;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<5;i++)
    printf("%d\t",a[i]);
}

