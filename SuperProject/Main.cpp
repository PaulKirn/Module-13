#include <iostream>
#include <stdint.h>
#include <iomanip>

int main()
{
	int x = 10;
	long long y = 0;

	int x1 = 0;
	int x2(100);
	int x3{ 100500 };

	double x4{ 100.0 }, x5(100.0);

	bool b1 = true;
	bool b2 = false;

	char cr = 'A'; // -128 до 127
	short srt = 100; // -32700 до 32700
	int int1 = 1002; // -2000000000 до 2000000000
	long long1 = 10000; // -2000000000 до 2000000000
	long long longlong1 = 10000000000; // -2000000000 до 2000000000
	float float1 = 0.99999999999; // -9 15 нулей до 9 15 нулей
	double double1 = 0.99999999999999999;
	long double longdouble1 = 0.39999999999999999991;

	int8_t; // -128 до 127
	uint8_t; // 0 до 255
	int16_t; // -32700 до 32700
	uint16_t; // 6500
	int32_t;
	uint32_t;
	int64_t;
	uint64_t; // 18 15 нулей


	char ch = ',';
	int16_t number = 44;

	double ScientificNotation = 5e-10;

	bool b100 = true;
	bool b200 = false;

	if (100 < 200)
	{
		std::cout << "100 < 200" << "\n";
	}
	else
	{
		std::cout << "100 > 200" << "\n";
	}

	char;
	char16_t char16;
	char32_t char32;


	std::cout << std::fixed << std::setprecision(10) << ScientificNotation << "\n";

	std::cout << number << "\n";

	std::cout << x << "\n";


	std::cin;
	return 0;
}