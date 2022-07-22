#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[]={90,50,40,60,80,10};
int i,j,temp;
for( i=1;i<6;i++)
{
    for(j=0;j<6-i;j++)
{
    if (a[j]>a[j+1])
       {
           temp=a[j];
           a[j]=a[j+1];
           a[j+1]=temp;
       }
}
}
for(i=0;i<6;i++)
    printf("%d\t",a[i]);
}
// 10      40      50      60      80      90
