#include<iostream>
#include<cstring>
using namespace std;
class student
{
int rno;
char course[10];
char name[20];
public:
void getdata()
{
cout<<"enter roll no : ";
cin>>rno;
cout<<endl<<"enter name : ";
cin.ignore();
cin.getline(name,20);
cout<<endl<<"enter course : ";
cin.ignore();
cin.getline(course,10);
}
int getrno()
{
return rno;}
char * getname()
{
return name;}
char * getcourse()
{
return course;}
};
class marks: public student
{
protected:
int marks[3];
public:
void getmarks()
{
cout<<endl<<"enter marks : ";
cin>>marks[0]>>marks[1]>>marks[2];
}
int total()
{
return (marks[0]+marks[1]+marks[2]);
}
};
class result: public marks
{
public:
void display()
{
cout<<"Roll no : "<<getrno()<<endl;
cout<<"Name    : "<<getname()<<endl;
cout<<"course  : "<<getcourse()<<endl;
cout<<"total   : "<<total()<<endl;
}
};
int main()
{
result r;
r.getdata();
r.getmarks();
r.display();
}
