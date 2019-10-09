#include <iostream>
#include<cstring>
using namespace std;
class stringg
{
	public:
		char str[20];
		void accept_string()
		{
			cout<<"ENTER STRING";
			cin>>str;
		}
		void display_string()
		{
			cout<<str<<endl;
		}
		stringg operator + (stringg x)
		{
			stringg s;
			strcat(str,x.str);
			strcpy(s.str,str);
			return s;
		}
};
int main()
{
	stringg str1,str2,str3;
	str1.accept_string();
	str2.accept_string();
	cout<<"FIRST STRING"<<endl;
	str1.display_string();
	cout<<"SECOND STRING"<<endl;
	str2.display_string();
	str3=str1 + str2;
	cout<<"CONCATENATE STRING :";
	str3.display_string();
	return 0;
}
