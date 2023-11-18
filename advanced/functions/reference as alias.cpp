#include<iostream>
using namespace std;
int main()
{
	int a=3;
	int &y = a;
	cout << a <<endl;//3
	cout << y <<endl;//3
	y=100;
	cout << a <<endl;//100
	return 0;
}
