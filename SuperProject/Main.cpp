#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

int main()
{
	/*int a = 1;

	if (a!=0)
	{
		std::cout << "true\n";
	}
	else if (a==0)
	{
		std::cout << "else!\n";
	}*/


	//int a = 1;
	//const int b = 1;

	//switch (a)
	//{
	//case b: // a==1
	//	std::cout << "a==1";
	//	break;
	//case 0:
	//	std::cout << "a==0";
	//	break;
	//default:
	//	std::cout << "default";
	//	break;
	//}

	//int i = 0;

	//while (i < 5)
	//{
	//	i++;
	//	std::cout << "yay\n";
	//}

	for (int i = 0; i < 10; i++)
	{
		std::cout << i << "\n";
		if (i < 5)
		{
			continue;
		}
		std::cout << i * i << "\n";
	}
}