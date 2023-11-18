#include<iostream>
using namespace std;
int add(int a,int b);
double add(double a,double b);
inline void azar(int a,char b,double s)
{
	cout << a << b << s << endl;
}
inline void azar(int a,char b,double s,float f)
{
	cout << a << b << s << f << endl;
}
int main()
{
	cout << add(10,10) << endl;
	cout << add(1.1,2.1) <<endl;
	azar(10,'a',10.123456);
	azar(100,'x',500.567,36.90f);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
double add(double a,double b)
{
	return a+b;
}