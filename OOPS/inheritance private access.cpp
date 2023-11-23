#include<iostream>
using namespace std;
class Parent
{
	public:
		string name;
		Parent(int id,string name)
		{
			this->name = name; 
			set_id(id);
			get_id();	
		}	
		void set_id(int id)
		{
			this->id = id;
		}
		void get_id()
		{
			cout <<"Name: "<< name << " Parent ID:" << id << endl;
		}
	private:
		int id;
	
};
class Child1 : public Parent
{
	public:
		string city;
		Child1(int id,string name,string city):Parent(id,name) //child class constructor passing id to the Parent constructor
		{
			this->city = city;
		}
		void child_about()
		{
			cout << "Name:" << name << " " << "city:" << " " << city << endl;
		}
};
int main()
{
	Parent p1(10,"Ancira");
	Child1 c1(100,"Azar","trichy");
	c1.child_about();
	return 0;
}
