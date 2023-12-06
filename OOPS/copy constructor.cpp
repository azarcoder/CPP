//copy constructor
#include<iostream>
using namespace std;
class Demo
{
	public:
		string name,city;
		Demo(string nm,string cy)
		{
			name = nm;
			city = cy;
			cout << "constructor called!" << endl;
		}	
		void about()
		{
			cout << name << " " << city << endl;
		}
		//copy constructor
		Demo(const Demo &obj)
		{
			name = obj.name;
			city = obj.city;
		}
};
int main()
{
	Demo d1("Azar","Trichy");
	cout << d1.city << endl;
	cout << d1.name << endl;
	Demo d2 = d1;
	cout <<"this is from copy:" << d2.city << endl;
	return 0;
}
