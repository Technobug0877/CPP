#include<iostream>
using namespace std;
class train2;
class train1
{
int d;
int s;
public:
train1()
{
d=0;
s=0;
}
void get()
{
cin>>d>>s;
}
void display(train2 &);
};
class train2
{
	int d2;
	int s2;
	public:
		train2()
		{
			d2=0;
			s2=0;
		}
		void get()
		{
			cin>>d2>>s2;
		}
		friend void train1::display(train2& obj2);
};

int main()
{
train1 obj1;
train2 obj2;
obj1.get();
obj2.get();
obj1.display(obj2);
return 0;
}
void train1::display(train2 &obj2)
{
train1 a;

a.d=d+obj2.d2;
cout<<a.d;
a.s=s+obj2.s2+50;
a.s=a.s*1000;
cout<<endl<<endl<<a.d/a.s;


}
/*class train2
{
int d1;
int t1;
public:
train2()
{
d1=0;
t1=0;
}
void get1()
{
cin>>d1>>t1;
}
friend void total(train1, train2);
};*/

