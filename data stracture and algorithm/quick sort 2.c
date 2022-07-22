#include<stdio.h>


void qsort(int a[],int lower,int upper);
int split(int a[],int lower,int upper);

int main()
{
	int a[]={44,33,11,55,77,90,40,60,99,22,88,66},i;
	qsort(a,0,11);
	for(i=0;i<12;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

void qsort(int a[],int lower,int upper)
{
	int i;
	if(upper>lower)
	{
		i=split(a,lower,upper);
		qsort(a,lower,(i-1));
		qsort(a,(i+1),upper);
	}
}
int split(int a[],int lower,int upper)
{
	int p=a[lower],temp;
	int l=lower+1;
	int r=upper;
	while(r>=l)
	{
		while(a[l]<p)
		{
			l++;
	    }
	    while(a[l]>p)
	    {
	    	r--;
	    }
	    if(r>l)
	    {
	    	temp=a[r];
			a[r]=a[l];
			a[l]=temp;
	    }
    }
    temp=a[lower];
    a[lower]=a[r];
	a[r]=temp;
	return(r);
}
