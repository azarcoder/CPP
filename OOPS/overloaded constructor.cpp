#include<iostream>
using namespace std;
class Pizza
{
	public:
		string topping1;
		string topping2;
		Pizza(string t1)
		{
			topping1 = t1;
		}
		Pizza(string t1,string t2)
		{
			topping1 = t1;
			topping2 = t2;
		}
		void onetopping()
		{
			cout << "This is single topping " << topping1 << " Pizza" <<endl;
		}
		void twotopping()
		{
			cout << "This is double topping " << topping1 <<"," << topping2 << " Pizza" <<endl;
		}
};
int main()
{
	Pizza p1("Cheese");
//	cout << p1.topping1 << p1.topping2; //topping2 didn't assigned
//	p1.onetopping();
//	p1.twotopping();
	Pizza p2("Chicken","Musroom");
	p2.twotopping();
	return 0;
}
