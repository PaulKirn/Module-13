#include <iostream>
//#include "Math.h"
#define PI 3.14
//#define LOG

int main()
{
	/*int result = sum(10, 20);
	std::cout << "Result = " << result << std::endl;*/

#ifdef LOG
	std::cout << "log message" << std::endl;
#endif // LOG
	std::cout << "pi = " << PI << std::endl;
	return 0;
}