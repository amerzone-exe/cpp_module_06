#include <iostream>
#include <string>

int main()
{
	std::string str = "45.2float";
	char *endptr;
	float i = 	40.12354345841638416834136841368451;
	float s1 = strtof(str.c_str(), &endptr);	

	std::cout << i << std::endl;
	std::cout << endptr << std::endl;
	std::cout << s1 << std::endl;
	std::cout << 5.2e+2 << std::endl;

	return 0;
}		
