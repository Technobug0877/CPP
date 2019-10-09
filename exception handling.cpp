#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER VALUE a&b"<<endl;
    cin>>a>>b;
    int x=0;
    x=a-b;
    try
    {
        if(x!=0)
        {
            cout<<endl<<"RESULT(a/x) = "<<a/x;
        }
        else
        {
            throw(x);
        }
    }
    catch(int i)
    {
        cout<<endl<<"EXPECTION CAUGHT : DIVIDE BY ZERO";
    }
    cout<<endl<<"END";
    return 0;
}
