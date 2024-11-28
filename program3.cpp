//varad santosh chaudhari RMD college of engineering warje pune-56
//Write a C++ program involving a function template
#include<iostream>
using namespace std;
template < typename T>
T findmax(T a , T b)
{
	if(a>b)
	{
		return a;
	}
	else if(a==b)
	{
		return 0;
	}
	else
	{
		return b;
	}
	
}

int main()
{
	int a =200;
	int b = 20;
	cout<<"if equal then zero will print !!!";
	cout<<"\n\nMaximum element is :"<<findmax(a,b);
	
	// for more you can give example of string NOT COMPULSORY 
	string aa ="apple";
	string bb ="orange";
	
	cout<<"\nGreater string is : "<< findmax(aa,bb);
	
	return 0;
}
