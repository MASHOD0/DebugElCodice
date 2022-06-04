#include <stdio.h>
#include <stdlib.h>

void sort(int n, int *a)
{
 //insert code here

}

int main() 
{
	=
	int i,j,a[100],n,min=INT_MAX,l,h,target;
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	sort(a,a+n);
	printf("Enter the target\n");
	scanf("%d",&target);
	
	j=n-1;
	while(i<j)
	{
	    int sum=a[i]+a[j];
	    if(abs(sum-target)<min)
	    {
	        l=i;
	        h=j;
	        min=abs(sum-target);
	    }
	    if(sum<target)
	    i++;
	    else
	    j--;
	}
	printf("The closest pair is %d and %d\n",a[l],a[h]);
	return 0;
}