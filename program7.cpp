//varad santosh chaudhari RMD college of engineering warje pune-56
// wap to implement class template with multiple parameters 
#include<iostream>
using namespace std;
template <typename t1 ,typename t2 >
class abc 
{
	t1 num1;
	t2 num2;
	
	public :
		abc(t1 a , t2 b)
		{
			num1=a;
			num2=b;
		}
	void display()
	{
			cout<<"\n Value of a is : "<<num1;
			cout<<"\n Value of b is : "<<num2;
	}
};
int main()
{
	int a = 10;
	int b =20;
	//for int
	abc<int,int>a1(a,b);//declare the datatype to be passed as argument
	a1.display();
	
	// for string
	// for more you can give example of string NOT COMPULSORY 	
	abc<string,string>a2("varad","sumeet");//declare the datatype to be passed as argument
	a2.display();
	
	return 0;
}
