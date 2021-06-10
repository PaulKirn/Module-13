
#include <iostream>

using namespace std;

class A
{
private:
	int x;
public:
	int GetX()
	{
		return x;
	}
	A()
	{
		cout << "A constructor\n";
	}
};

class B : A
{
private:
	double y;
public:
	double GetY()
	{
		return y;
	}
	B()
	{
		cout << "B constructor\n";
	}
};

class  C : B
{
public:
	C()
	{
		cout << "C constructor\n";
	}
};

int main()
{
	/*A* p1 = new A;*/
	C* p = new C;

	
}


