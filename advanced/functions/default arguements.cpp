#include<iostream>
using namespace std;
//declaration must for this default arguments
int add(int a=0,int b=0);
//function overloading doesn't work for default arguements
int main()
{
	cout << add() <<endl;//0
	cout << add(2,5) << endl;//7
	return 0;
}
int add(int a,int b)
{
	return a+b;
}

