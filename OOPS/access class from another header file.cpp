#include<iostream>
#include "gradebook.h"
using namespace std;
int main()
{
	Gradebook g1("Python");
	cout << g1.get_grade();
	return 0;
}
