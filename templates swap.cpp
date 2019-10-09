#include<iostream>
using namespace std;
template<class type>
type swapt(type &a, type &b)
{
type temp;
temp=a;
a=b;
b=temp;
}
int main()
{
int num1,num2;
char c1,c2;
float f1,f2;
cin>>num1>>num2;
swapt(num1, num2);
cin>>c1>>c2;
swapt(c1, c2);
cin>>f1>>f2;
swapt(f1, f2);
cout<<"integer : "<<num1<<" "<<num2;
cout<<endl<<"char    : "<<c1<<" "<<c2;
cout<<endl<<"float   : "<<f1<<" "<<f2;
}
