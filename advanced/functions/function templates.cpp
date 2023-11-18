#include<iostream>
using namespace std;
template <typename T>//we must initialize function below this template declaration
T maximum(T x,T y)
{
	return (x>y)?x:y;
}
//This is for two different type of datatype
template <typename T, typename U>
auto maxofTwo(T x, U y)
{
	return (x>y)?x:y;
}
int main()
{
	cout << maximum(10.90,10.79) << endl;
	cout << maxofTwo(10,9.98);
	return 0;
}
