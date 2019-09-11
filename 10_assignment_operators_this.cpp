#include <iostream>
#include <string.h>

class Widget {
public:
	Widget(int a, std::string b) : score(a), name(b){}
	Widget& operator=(const Widget& rhs) 
	{
		if (this==&rhs) return *this; 	// idnetity test: if a self-assignment, do something

		this->score = rhs.score;
		this->name = rhs.name;
		// return the object
		return *this;
	}

	int score;
	std::string name;
};

int main()
{
	std::string Name_1("Iven");
	std::string Name_2("wen");
	Widget w1(100, Name_1);
	Widget w2(200, Name_2);

	std::cout << w1.name << " " << w1.score << std::endl;
	std::cout << w2.name << " " << w2.score << std::endl;

	w1 = w2;

	std::cout << w1.name << " " << w1.score << std::endl;
	std::cout << w2.name << " " << w2.score << std::endl;

	w1 = Widget(300,std::string("haha"));
	std::cout << w1.name << " " << w1.score << std::endl;

	w1 = w1;
	std::cout << w1.name << " " << w1.score << std::endl;
	return 0;
}
