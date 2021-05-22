

#include <iostream>

using namespace std;

class Test
{
private:
	int x;
public:
	int GetX()
	{
		return x;
	}
};

void f(int& x, int& y)
{
	//*x *= *x; // x = x * x
	x = 1;
	y = 1;
}

int main()
{
	//int x = 5;
	//int& ref = x;
	//int y = 10;
	//ref = y;
	//cout << x << '\n';
	//cout << ref;


	/*Test* p = new Test;
	p->GetX();*/

	//int a[5] = { 1,2,3,4,5 };
	//for (const auto& element : a)
	//{
	//	cout << element;
	//}

	/*int a = 10;
	f(&a);
	cout << a;*/

	int a, b;
	f(a, b);
	cout << a << '\n' << b;

}


