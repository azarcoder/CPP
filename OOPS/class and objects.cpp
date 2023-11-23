//class and objects
#include<iostream>
using namespace std;
class Car
{
	public:
		
		int model;
		string name;
		void running()
		{
			cout << "car is running!" << endl;	
		}	
		void stop()
		{
			cout << "car stopped!" << endl;
		}
};
int main()
{
	
	Car car1;//obj
	car1.model=120;
	car1.name="Audi";
	cout << car1.name << "\t" << car1.model<<endl;
	car1.running();
	car1.stop();	
	return 0;
}
