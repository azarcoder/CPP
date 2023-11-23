//Abstraction - hiding unnessary data from outside a class
//setter - function that makes private attributes writtable
//setter - function that makes private attributes readable 
#include<iostream>
using namespace std;
class Customer
{
	public:
		string name;	
		void set_contact(long long int num)
		{
			this->contact = num;
		}
		long long int get_contact()
		{
			return contact;
		}
	private:
		long long int contact;
};
int main()
{
	Customer c;
	c.name = "Azarudeen";
//	cout << c.name;//Azarudeen
	//we can't access contact because it's declares inside private so that we need setter funtion
	c.set_contact(9790147890);
	cout << c.get_contact();
	return 0;
}
