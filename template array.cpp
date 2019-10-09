#include<iostream>
#include<cstring>
#define max 5
using namespace std;
template<class type>
void swapt(type &a,type &b)
{
    type temp;
    temp=a;
    a=b;
    b=temp;
}
template<class type>
void read(type arr[])
{
    for(int i=0;i<max;i++)
        cin>>arr[i];
}
template<class type>
void sorting(type arr[])
{
    for(int i=0;i<max;i++)
    {
        for(int j=0;j<max-i;j++)
        {
            if(arr[j]>arr[j+1])
                swapt(arr[j],arr[j+1]);
        }
    }
}
template<class type>
void display(type arr[])
{
    for(int i=0;i<max;i++)
        cout<<arr[i]<<endl;
}
int main()
{

    /*char arr[max];
    cout<<"enter the array elements(character) "<<endl;
    read(arr);
    cout<<"\n sorting "<<endl;
    sorting(arr);
    cout<<"\n display "<<endl;
    display(arr);
    */
    float arr1[max];
    cout<<"\nenter the array elements(digit) "<<endl;
    read(arr1);
    cout<<"\n sorting "<<endl;
    sorting(arr1);
    cout<<"\n display "<<endl;
    display(arr1);


}
