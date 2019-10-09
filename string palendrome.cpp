#include <iostream>
#include<string.h>
using namespace std;
int main()
{
	
	//char str[20];
	//cin.getline(str,20);
	//cout<<sterlen(str)<<endl;
	string str;
	getline(cin,str);
	
	int l,i=0,t,j,k,flag=0,c=0;
    l=str.length();
    while(i<=(l-1))
	{
		t=i;
		while(str[i]!=' ')
		{
			if(str[i]!='\0')
			{
				i++;
			}
			else
			{
				break;
				
			}
		}
		for(j=t,k=(i-1);j<=(i-1)/2,k>=i/2;j++,k--)
		{
			if(str[j]=str[k])
			{
				flag=1;
			}
			else
			{
				flag=0;
				break;
			}
		}
	
	if(flag==1)
	{
		c++;
	}
	i++;
    }
cout<<c;
return 0;
}
