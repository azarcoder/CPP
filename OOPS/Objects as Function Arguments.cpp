//Objects as Function Arguments
#include<iostream>
using namespace std;
class Dog
{
	public:
		string name;
		void about();
};
void Dog::about()
{
	cout << "hello," << name;
}
inline void printname(Dog dog1)
{	
	dog1.about();
}
int main()
{
	Dog d;
	d.name="susi";
	printname(d);
	return 0;
}
