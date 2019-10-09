#include <iostream>
using namespace std;
class A
{
	int c,d;
	public:
		A (int a=2,int b=3)
		{
			c=a;
			d=b;
		}
		int area()
		{
			return c*d;
		}
};
int main()
{
	A A1(3,4);
	A A2(4,5);
	A *ptr;
	cout<<ptr->area()<<endl;
	ptr=&A2;
	cout<<ptr->area();
}

