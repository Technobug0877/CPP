using namespace std;
#include<iostream>
#include<deque>
int main()
{
    int num;
    deque<int>deq;
    cout<<"\n Enter the elements in the dequeue : ";
    for(int i=0;i<5;i++)
    {
        cin>>num;
        deq.push_back(num);
        cin>>num;
        deq.push_front(num);
    }
    cout<<"\n The contents of the dequeue are : ";
    for(int i=0;i<deq.size();i++)
        cout<<"\t"<<deq[i];
}
