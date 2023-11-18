#include<iostream>
using namespace std;
//should be used before main
inline int add(int a,int b)
{
	return a+b;
}
inline double add(double a,double b)
{
	return a+b;
}
int main()
{
	cout << add(10,30) << endl;
	cout << add(12.3,11.2)<< endl;
	return 0;
}

