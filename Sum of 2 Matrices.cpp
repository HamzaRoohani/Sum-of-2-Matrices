#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j,m1[100][100],m2[100][100],sum[100][100];
	
	cout<<"Enter the number of rows: ";
	cin>>r;
	
	cout<<"Enter the number of columns: ";
	cin>>c;
	
	cout<<"Enter the 1st matrix: "<<endl;//1st matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter the element of m1 "<<i+1<<j+1<<": ";
			cin>>m1[i][j];
		}
	}
	
	cout<<"Enter the 2nd matrix: "<<endl;//2nd matrix
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"Enter the element of m2 "<<i+1<<j+1<<": ";
			cin>>m2[i][j];
		}
	}
	for(i=0;i<r;i++)//Adding two matices
	{
		for(j=0;j<c;j++)
		{
			sum[i][j]=m1[i][j]+m2[i][j];
		}
	}
	
	cout<<"The Sum of m1 and m2 is: ";//Displaying the sum of two matices
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<sum[i][j]<<" ";
			if(j==c-1)
			{
				cout<<endl;
			}
		}
	}
	system("pause");
	return 0;
}