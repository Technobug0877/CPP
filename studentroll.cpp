#include<iostream>
#include<cstring>
using namespace std;
class student
{
int rno;
protected:
char course[10];
public:
void getrno()
{
cout<<"enter rno"<<endl;
cin>>rno;
}
void show()
{
cout<<endl<<"roll no "<<rno;
}
};
class result: public student
{
int marks[3];
int totalmarks=0;
public:
void get()
{
getrno();
cout<<endl<<"enter course name"<<endl;
cin.ignore();
cin.getline(course,10);
cout<<"enter marks"<<endl;
for(int i=0;i<3;i++)
cin>>marks[i];
}
int total()
{

for(int i=0;i<3;i++)
totalmarks += marks[i];
return totalmarks;
}
void display()
{
show();
cout<<endl<<"course name : "<<course;
cout<<endl<<"total marks : "<<total();
}
};
int main()
{
result r;
r.get();
r.display();

}
