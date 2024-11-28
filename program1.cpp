//varad santosh chaudhari RMD college of engineering warje pune-56

//Write a program in C++ to use scope resolution operator.
#include<iostream>
using namespace std;

int x=99;//global variable

int main()
{
	int x =10 ;//local variable
	cout<<"local value without scope resolution operator is : "<<x;
	cout<<"\nglobal value with scope resolution operator is : "<<::x;//global is accessed by :: (scope resolution)
}
