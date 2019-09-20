#include <iostream>

struct Day {
	explicit Day(int d) : val(d) {}
	int val;
};
struct Month {
	explicit Month(int m) : val(m) {}
	int val;
};
struct Year {
	explicit Year(int y) : val(y) {}
	int val;
};

class Date {
public:
	Date(const Month& m, const Day& d, const Year& y) {
		std::cout << "m:" << m.val << "/ d:" << d.val << "/ y:" << y.val << std::endl;
	}
	
};

int main()
{
	// error wrong type
	// Date d(30, 3, 1995);
	// error wrong order
	// Date d(Day(30), Month(3), Year(1995));
	Date d(Month(3), Day(30), Year(1995));
	return 0;
}
