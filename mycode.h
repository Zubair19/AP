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

