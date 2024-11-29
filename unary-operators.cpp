//varad santosh chaudhari RMD college of engineering warje pune-56
//Write down program to overload unary operators? (Any three operators i.e ++ , --, !).
#include<iostream>
using namespace std;
class Number {
private:
    int a; // Integer to demonstrate operator overloading
 	int n1;
 	int n2;
public :
 
 Number() {
	cout<<"constructor madhe aalooy";//checking statement
	a=72;
	n1=10;
	n2=0;
	} // Constructor to initialize 'a' to 0

    // Overload the prefix ++ operator
    void operator++() {
        ++a; // Increment the integer member 'a'
    }

    // Overload the prefix -- operator
    void operator--() {
        --a; // Decrement the integer member 'a'
    }
	bool operator!() {
       return n1==n2 ;
    }
    void display() {
        cout << "Value of a: " << a ; // Display the current value of 'a'
    }
};

int main() {
    Number num;//object num 

    cout << "Initial value: ";//print
    num.display(); // Display initial value of 'a'
	cout<<"\n";
    ++num; // Increment the value using overloaded ++ operator
    cout << "After increment (++): ";
    num.display();
		cout<<"\n";
    --num; // Decrement the value using overloaded -- operator
    cout << "After decrement (--): ";
    num.display();
    if(!num)
    {
    	cout<<"\nIs value of n1 equal to value of n2 ? : true";
	}
	else
	{
		cout<<"\nIs value of n1 equal to value of n2 ? : false";
	}
    
	cout<<"\n";
    return 0;
}

