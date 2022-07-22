#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[],int lower,int upper);
int split(int a[],int lower,int upper);
int main()
{ int i=0;
int a[]={90,50,40,60,80,10,20,100,5,70};
quicksort(a,0,9);

for( i=0;i<9;i++)
    printf("%d\t",a[i]);
    return 0;
}
void quicksort(int a[],int lower,int upper)
{

    int i;
    if (lower<upper)
    {

        i=split(a,lower,upper);
        quicksort(a,lower,i-1);
        quicksort(a,i+1,upper);
    }
}
int split(int a[],int lower,int upper)
{

    int p=a[lower],l=lower+1,r=upper,temp;
    while(l<=r){
    while(a[l]<p)
    {
        l++;
    }
    while(a[r]>p)
    {
        r--;
    }
    if(l<r)
    {
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
    }

    }
  temp=a[lower];
  a[lower]=a[r];
  a[r]=temp;
  //printf("%d\n",r);
    return (r);
}
// 5       10      20      40      50      60      70      80      90


