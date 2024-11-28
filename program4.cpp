//varad santosh chaudhari RMD college of engineering warje pune-56
//Write a program in C++ to handle divide by zero exception.
#include<iostream>
#include<stdexcept>//include this header file to throw runtime exceptions
using namespace std;
int main()
{
	int num;
	int div;
	
	cout<<"Enter a number";
	cin>>num;
	cout<<"Enter divsor";
	cin>>div;
	
	try
	{
		if(div==0)
		{
			throw runtime_error("divide by zero error");
		}
		else
		{
			cout<<"divison is : "<<(num/div);
		}
	}
	catch(runtime_error &e)
	{
		cout<<e.what();//use .what to print the msg from thrown side
	}
}
