#include<iostream>
#include <cstdlib>
using namespace std;
void merge(int *a, int n1,int *b,int n2);
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	int b[m];
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	merge(a,n,b,m);
	return 0;
	
}
void merge(int *a,int n1,int *b,int n2)
{
	int x=0,y=0,z=0;
	int *res=(int*)malloc(sizeof(int)*(n1+n2));
	while((x<n1)&&(y<n2))
	{
		if(*(a+x)<=*(b+y))
		{
			*(res+z)=*(a+x);
			x++;
			z++;
		}
		else
		{
			*(res+z)=*(b+y);
			z++;
			y++;
		}
	}
	while(x<n1)
	{
		*(res+z)=*(a+x);
		z++;
		x++;
	}
	while(y<n2)
	{
		*(res+z)=*(b+y);
		y++;
		z++;
	}
	int i=0;
	for(i=0;i<(n1+n2);i++)
	{
		cout<<*(res+i);
	}
}
