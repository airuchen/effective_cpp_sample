#include <iostream>
#include <string.h>

int main() {
	std::string *stPtr1 = new std::string;
	std::string *stPtr2 = new std::string[100];

	delete stPtr1;
	delete []stPtr2;
	return 0;
}
