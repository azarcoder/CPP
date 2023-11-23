#include<iostream>
using namespace std;
class Person
{
	public:
		int age;
		string name;
		string city;
		Person(int age,string name,string city)
		{
			this->age = age;
			this->name = name;
			this->city = city;	
		}	
		void about()
		{
			cout << "Welcome! " << name << " ,your are " << age << "years old and from " << city << endl;
		}
};
int main()
{
	Person azar(21,"Azarudeen","Tiruchirappalli");
	azar.about();
	Person ancira(55,"Ancira","Madurai");
	ancira.about();
	return 0;
}
