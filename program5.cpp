//varad santosh chaudhari RMD college of engineering warje pune-56
//overload << and >> operators   (this is binary operator)
// overload binary operators
#include<iostream>
using namespace std;
class str
{
	private :
		string s;
		int a ;
	public :
		void gs()
		{
			cout<<"\nEnter a string : ";

		}
		
		friend void operator <<(ostream &o,str &b)
		{
			o<<b.s;
		}
		friend void operator >>(istream &i,str &c)
		{
			
			i>>c.s;
			
		}
};
int main()
{
	str r;
	r.gs();
	
	cin>>r;
	cout<<r;
	
	return 0;
}
