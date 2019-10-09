using namespace std;
#include<iostream>
#include<vector>
int main()
{
    int num;
    vector<int>vect;
    cout<<"\n Enter the elements of the vector ";
    for(int i=0;i<10;i++)
    {
        cin>>num;
        vect.push_back(num);
    }
    cout<<"\n Elements of the vector are : "<<endl;
    for(int i=0;i<<vect.size();i++)
        cout<<vect[i]<<" ";
    vector<int> :: iterator itr = vect.begin();
    vect.insert(itr+4,1,25);
    vect.erase(vect.begin()+8);
    cout<<"\n content after vector used : "<<endl;
    for(int i=0;i<vect.size();i++)
        cout<<vect[i]<<endl;

}
