#include<iostream>
#include<cstring>
using namespace std;
#define max 5
template<class type1,class type2,class type3>
class student
{
    type1 roll;
    type2 name;
    type3 grade;
public:
    void get()
    {
        cout<<"\n enter details "<<endl;
        cin>>roll;
        cin.ignore();
        cin>>name;
        cin>>grade;
    }
    void show()
    {
        cout<<endl<<"roll no : "<<roll;
        cout<<endl<<"name    : "<<name;
        cout<<endl<<"grade   : "<<grade;
    }
};
int main()
{
    student <int,char[10],char[10]>s;
    s.get();
    s.show();
}
