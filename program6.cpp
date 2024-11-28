//varad santosh chaudhari RMD college of engineering warje pune-56
// overload == operator (this is binary operator)
#include <iostream>
using namespace std;

class Number {
private:
    int a; // Integer to compare

public:
    Number(int value) {
	a=value;
	} // Constructor to initialize 'a'

    // Overload the == operator
    bool operator==(Number &ob)
	{
	
        return a == ob.a; // Compare the integer values of two objects
    }
};

int main() {
    Number num1(5), num2(5), num3(10); // Create objects with different values

    if (num1 == num2) {
        cout << "num1 and num2 are equal." << endl;
    } else {
        cout << "num1 and num2 are not equal." << endl;
    }

    if (num1 == num3)
	{
        cout << "num1 and num3 are equal." << endl;
    }
	else {
        cout << "num1 and num3 are not equal." << endl;
    }

    return 0;
}

