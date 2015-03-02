#include<iostream>

using namespace std;


class matrix
{
	 private:
		int a[3][3];
		int b[3][3];
		int c[3][3];
	public:
		matrix();
		int set();	
		int add();
		int mul();
		int mul_add();	
};
matrix::matrix(){};

int matrix:: add()
{
	cout<<"Matrix addition:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		a[i][j]=a[i][j]+b[i][j];
		cout<<"\t"<<a[i][j]<<"\t";
		}
	cout<<endl;
	}
return 0;
}
int matrix::mul()
{
cout<<"Matrix multiplication"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		int sum=0;
			for(int k=0;k<3;k++)
			{
			sum=sum+a[i][k]*b[k][j];
			}
		c[i][j]=sum;
		}
	}
for(int l=0;l<3;l++)
{
	for(int m=0;m<3;m++)
	{
	cout<<"\t"<<c[l][m]<<"\t";	
	}
cout<<endl;
}	

return 0;
}
int matrix::mul_add()
{
cout<<"Matrix multiplication"<<endl;
for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		int sum=0;
			for(int k=0;k<3;k++)
			{
			sum=sum+a[i][k]*b[k][j];
			}
		c[i][j]=sum;
		}
	}	
	for(int l=0;l<3;l++)
	{
		for(int m=0;m<3;m++)
		{
		a[l][m]=a[l][m]+c[l][m];
		cout<<"\t"<<a[l][m]<<"\t";
		}
	cout<<endl;

	}


return 0;
}
int matrix:: set()
{
for(int i=0;i<3;i++)
	{
	for(int j=0;j<3;j++)
		{
		a[i][j]=1;
		b[i][j]=2;
		c[i][j]=3;
		}
	}
return 0;
}
