
#include <iostream>

using namespace std;

class A
{
protected:
	int x;
public:
	A() {}
	A(int _x) : x(_x)
	{}
	int GetX()
	{
		return x;
	}

	virtual void Show()
	{
		cout << "A";
	}
};

class B : public A
{
private:
	double y;
public:
	B() {}
	B(double _y, int _x) : y(_y), A(_x)
	{}
	double GetY()
	{
		return x + y;
	}

	void Show() override
	{
		cout << "B";
	}
};

int main()
{
	A* p = new B(5.2, 2);
	/*cout << p->GetX() << ' ' << p->GetY();*/
	p->Show();
}


