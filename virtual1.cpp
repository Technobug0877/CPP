#include<iostream>
using namespace std;
class base
{
protected:
    int a;
public:
    base(int x)
    {
        a=x;
    }
    virtual void show()
    {
        cout<<"in base : " <<a<<endl;
    }
};
class derived:public base
{
    int b;
public:
    derived(int x,int y):base(x)
    {
        b=y;
    }
    virtual void show()
    {
        cout<<"in derived : " <<a<<"   "<<b;
    }
};
int main()
{
    base b(5);
    derived d(2,3);
    // syntax this will give value passed to derived class
    /*
    b=d;
    b.show();
    */
    //syntax this will give value of each class

    b.show();
    d.show();
}
