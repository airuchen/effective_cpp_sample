#include <iostream>

using namespace std;

class Integer {
public:
	int data;
	// explicit
	explicit Integer(int i) { data = i;}
	// implicit 
	// Integer(int i) { data = i };
};

int main() {
	// explicit need to follow the constructor method
	Integer i(10);

	// implicit work somehow
	// Integer i = 10;
	cout << i.data << endl;
	return 0;
}
