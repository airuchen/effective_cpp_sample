#include <iostream>
#include <string>
#include <stdio.h>

class GamePlayer {
	private:
		// use static ensuring there is only one variable
		static const int NumTurns = 5;
		enum { NumTurns_enum = 5 };
		int scores[NumTurns];
	public:
		const int getNum(){
			return NumTurns;
		}
		const int getenum(){
			return NumTurns_enum;
		}
		void print(const char* input){
			std::cout << "&input: " << &input << "; input: " << input << "; *input:" << *input << std::endl;
		}
		void print(const char& input){
			std::cout << "&input: " << &input << "; input: " << input << std::endl;
		}
};

int main()
{
	// prefer const , enum, inline to define
	const std::string authorName_1("Scottttttt");
	const char* const authorName = "Scott Meyers";


	printf("fist author %s \n", authorName_1.c_str());
	printf("%s \n", authorName);

	GamePlayer gp;
	std::cout << gp.getNum() << std::endl;
	std::cout << gp.getenum() << std::endl;

	gp.print(authorName);
	gp.print(*authorName);

	
	return 0;
}
