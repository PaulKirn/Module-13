#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>



int main()
{
	/*const int size = 10;
	int array[size] = { 1,2,3,4,5,6,7,8,9,10 };*/

	/*std::cout << array[0];*/

	/*for (int i = 0; i < size; i++)
	{
		std::cout << array[i];
	}*/


	const int size = 2;
	int array[size][size] = { {0, 1}, {2, 3} };

	/*std::cout << array[0];*/

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << array[i][j];
		}
		std::cout << '\n';
	}
}