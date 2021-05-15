#include <iostream>
#include <stdint.h>
#include <iomanip>
#include <string>

namespace A
{
	void a()
	{
		std::cout << "a";
	}

	namespace AB
	{
		void a()
		{
			std::cout << "ab";
		}
	}
}


//void a()
//{
//	std::cout << "b";
//}
//
//namespace AAB = A::AB;

void Calc()
{
	using namespace A;
	a();
}



int main()
{
	/*A::a();
	a();
	A::AB::a();
	AAB::a();*/

	Calc();



}