#include<iostream>
using namespace std;
int x=100;
int main()
{
	int x=10;
	cout << x << endl; //10
	cout << ::x;//100
	return 0;
}
