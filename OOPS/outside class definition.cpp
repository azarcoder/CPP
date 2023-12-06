#include<iostream>
using namespace std;
class Demo
{
	public:
		void demo();	
};
//outside class definition
void Demo::demo()
{
	cout << "hey!" << endl;
}
int main()
{
	Demo d;
	d.demo();
	return 0;
}