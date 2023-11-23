#include<iostream>
using namespace std;
class Employee
{
	public:
		string name;
	Employee(int sal)
	{
		set_sal(sal);
		get_sal();	
	}	
	void set_sal(int sal)
	{
		this->salary = sal;
	}
	void get_sal()
	{
		cout << "salary:" << salary << endl;
	}
	private:
		int salary;
};
int main()
{
	Employee azar(17000);
	return 0;
}
