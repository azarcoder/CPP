#include<iostream>
using namespace std;
inline void demo (int &a)
{
	a=100; //no pointer need here
}
int main()
{
	int a=10;
	cout << "Before function call:" << a <<endl;
	demo(a);
	cout <<"after function call:" << a;
	return 0;
}
