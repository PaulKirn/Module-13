

#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	int* p = &x;
	cout << p << '\n';
	cout << *p << '\n';

	double a = 5.2;

	void* p1;
	p1 = &x;
	p1 = &a;

	cout << *(static_cast<double*>(p1));
}


