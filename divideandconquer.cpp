#include<iostream>
using namespace std;
void divide(int *arr,int l,int r);
void merge(int *arr,int l,int mid,int r);
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int l=0;
	int r=n-1;
	divide(arr,l,r);
	return 0;
}
void divide(int *arr,int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;
		divide(arr,l,mid);
		divide(arr,mid+1,r);
		merge(arr,l,mid,r);
	}
}
void merge(int *arr,int l,int mid,int r)
{
	int size1=mid-l+1;
	int size2=r-mid;
	int temp1[size1];
	int temp2[size2];
	int i=0,j=0,k=l;
	while(i<size1&&j<size2)
	{
		if(temp1[i]<=temp2[j])
		{
			arr[k]=temp1[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=temp2[j];
			j++;
			k++;
		}
	}
	while(i<size1)
	{
		arr[k]=temp1[i];
		i++;
		k++;
	}
	while(j<size2)
	{
		arr[k]=temp2[j];
		k++;
		j++;
	}
	int m=0;
	for(m=0;m<=r;m++)
	{
		cout<<arr[m]<<" ";
	}
}
