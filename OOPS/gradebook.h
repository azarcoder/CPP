#include<iostream>
using namespace std;
class Gradebook
{
	public:
		Gradebook(string name)
		{
			set_grade(name);	
		}
		void set_grade(string name)
		{
			grade = name;
		}	
		string get_grade()
		{
			return grade;
		}
	private:
		string grade;
};
