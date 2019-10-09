#include <iostream>
using namespace std;
class matrix
{
	int m[3][3];
	public:
		void read(void)
		{
			cout<<"enter the element "<<endl;
			int i,j;
			for(i=0;i<3;i++)
			    for(j=0;j<3;j++)
			    {
			    	cout<<"m["<<i<<"]["<<j<<"] = ";
			    	cin>>m[i][j];
				}
		}
	void display(void)
	{
		int i,j;
		for(i=0;i<3;i++)
		{
			cout<<endl;
			for(j=0;j<3;j++)
			{
				cout<<m[i][j]<<"\t";
			}
		}
	}
	friend matrix trans(matrix);
};
matrix trans(matrix m1)
{
	matrix m2;
	int i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
		m2.m[i][j]=m1.m[j][i];            //transposed
		/*if(i==j)                      //diagonal elements
		m2.m[i][j]=m1.m[j][i];
		else
		m2.m[i][j]=0;*/
		
	}
		return (m2);
}
int main()
{
	matrix mat1,mat2;
	
	cout<<"enter matrix\n";
	mat1.read();
	mat2=trans(mat1);
	cout<<"transposed matrix"<<endl;
	mat2.display();
	return 0;
}
	

