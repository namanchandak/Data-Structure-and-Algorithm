#include<stdio.h>

int main(){
int a[]={30,40,10,50,90,70};
int i ,j,temp;
for (i=1;i<6;i++)
{
    j=i-1;
    temp=a[i];
    while(j>=0 && a[j]>temp)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=temp;
}
for(i=0;i<6;i++)
{


printf("%d\t",a[i]);
}
}
// 10      30      40      50      70      90
