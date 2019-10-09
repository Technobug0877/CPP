#include<iostream>
using namespace std;
int sortt(int arr[],int start,int target);
int main()
{
	int n,t;
	cin>>n;
	int ar[n];
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		cin>>ar[i];
	}
	cin>>t;
	int temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
			}
		}
	}
	int result=sortt(ar,n,t);
	cout<<result;
}
int sortt(int arr[],int n,int target)
{
	int start=0,end=n-1;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(arr[mid]==target)
		{
			return mid;
		}
		else if(arr[mid]<target)
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return -1;
}
