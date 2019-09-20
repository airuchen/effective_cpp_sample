#include <iostream>

int main()
{
	int i = 49;
	char ch = i;  // implicit conversion
	std::cout << ch << std::endl;  
	char ch_1 = static_cast<char>(i);  // explicit conversion
	std::cout << ch_1 << std::endl;

	i = 100;
	float x_1 = i / 3;
	std::cout << x_1 << std::endl;
	
	// C-style cast (less use)
	float x_3 = (float)i / 3;
	std::cout << x_3 << std::endl;
	
	// static_cast (better choice)
	float x_2 = static_cast<float>(i) / 3;
	std::cout << x_2 << std::endl;
	return 0;
}

