#include<iostream>
using namespace std;
class Parent
{
	public:
		string name;
		int age;
		void about()
		{
			cout << name << "\t" << age << endl;
		}
};
class Child : public Parent
{
	public:
		string occupation;	
		void abt_child()
		{
			cout << "He is a " << occupation << endl;
		}
};
class Grandchild : public Child
{
	public:
		string city;
		void abt_grand_child()
		{
			cout << "He is from " << city;
		}
};
int main()
{
	Child azar;
	azar.name = "Azarudeen";
	azar.age = 21;
	azar.occupation = "Programmer";
	azar.about();
	azar.abt_child();
	//grandchild
	Grandchild anci;
	anci.name = "Ancira";
	anci.age = 18;
	anci.about();
	anci.occupation = "Teacher";
	anci.city = "Bangalore";
	anci.abt_child();
	anci.abt_grand_child();
	return 0;
}
