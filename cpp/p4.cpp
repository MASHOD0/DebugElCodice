#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main() 
{
	// your code goes here
	int i,j,a[100],n,min=INT_MAX,l,h,target;
	cout<<"Enter the number of elements\n";
	cin>>n;
	cout<<"Enter the elements\n";
	for(i=0;i<n;i++)
	cin>>a[i];
	sort(a,a+n);
	cout<<"Enter the target\n";
	cin>>target;
	
	j=n;
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
	cout<<"Closest="<<a[l]+a[h]<<"\n";
	return 0;
}