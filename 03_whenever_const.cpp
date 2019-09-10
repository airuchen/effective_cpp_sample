#include <iostream>
#include <stdio.h>
#include <string.h>

class CTextBlock{
	public:
		std::size_t length() const;

		// always remember initializing the parameters
		CTextBlock(const char* const input) : pText(input), lengthIsValid(!true){};
	private:
		const char* const pText;
		// mutable allows you to change variable in side a const function
		mutable std::size_t textLength;
		mutable bool lengthIsValid;
};

std::size_t CTextBlock::length() const 
{
	if (!lengthIsValid) {
		textLength = strlen(pText);
		lengthIsValid = true;
	}
	return textLength;
}


int main()
{
	CTextBlock ctb("fdsa");
	std::cout << ctb.length() << std::endl;

	int greeting[] = {12, 13};

	// former const->value, later const->pointer
	int* p_1 = greeting;
	const int* p_2 = greeting;
	const int* const p_3 = greeting;
	int* const p_4 = greeting;
	
	std::cout << "p_1 = " << p_1 << std::endl;
	std::cout << "p_2 = " << p_2 << std::endl;
	std::cout << "p_3 = " << p_3 << std::endl;
	std::cout << "p_4 = " << p_4 << std::endl;
	// p_1 = p_2 = p_3 = p_4
	
	std::cout << "*p_1 = " << *p_1 << std::endl;
	std::cout << "*p_2 = " << *p_2 << std::endl;
	std::cout << "*p_3 = " << *p_3 << std::endl;
	std::cout << "*p_4 = " << *p_4 << std::endl;


	std::cout << "*(++p_1+1) = " << *(++p_1) << std::endl;
	std::cout << "*(++p_2+1) = " << *(++p_2) << std::endl;
	// const pointer shows error
	// std::cout << "*(++p_3) = " << *(++p_3) << std::endl;
	// std::cout << "*(++p_4) = " << *(++p_4) << std::endl;

	std::cout << "p_1 = " << p_1 << std::endl;
	std::cout << "p_2 = " << p_2 << std::endl;
	std::cout << "p_3 = " << p_3 << std::endl;
	std::cout << "p_4 = " << p_4 << std::endl;

	p_1--;
	std::cout << "++*p_1 = " << ++*p_1 << std::endl;
	// const value shows error
	// std::cout << "++*p_2 = " << ++*p_2 << std::endl;
	// std::cout << "++*p_3 = " << ++*p_3 << std::endl;
	std::cout << "++*p_4 = " << ++*p_4 << std::endl;
	// p_4 shows 14 because it shares the same address with p_1. 
	// Thus, p_1 has already added the value by 1 one times. p_4 did the second times.

	std::cout << "p_1 = " << p_1 << std::endl;
	std::cout << "p_2 = " << p_2 << std::endl;
	std::cout << "p_3 = " << p_3 << std::endl;
	std::cout << "p_4 = " << p_4 << std::endl;
	
	return 0;
}
