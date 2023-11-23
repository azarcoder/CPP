#include<iostream>
using namespace std;
class People
{
	public:
		People()
		{
			cout << "Constructor called!" << endl;
		}	
		~People()
		{
			cout << "Desstructor called!" << endl;
		}
};
int main()
{
	People p;
	return 0;
}
//destructor used to clean memeory allocation and files close like that