#include <iostream>

class HomeForSale {
public:

	// method1: define the function as private to avoid compiler-generated function
private:
	HomeForSale(const HomeForSale&);
	HomeForSale& operator=(const HomeForSale);
};

// method2: create a base class avoiding any copying
class Uncopyable {
protected:
	Uncopyable() {}			// allow derived objects constructor and destructor
	~Uncopyable() {}
private:
	Uncopyable(const Uncopyable&);	// avoid copying
	Uncopyable& operator=(const Uncopyable&);
};

class StopCopyMe : private Uncopyable {
	// ... 
};



int main()
{
	StopCopyMe me;
	StopCopyMe you;
	//use of deleted function 'StopCopyMe& StopCopyMe::operator=(const StopCopyMe&)' 
	// you = me;
}
