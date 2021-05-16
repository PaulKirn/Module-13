
#include <iostream>

using namespace std;


class Example
{
private:
	int a;
public:	
	Example() : a(1)
	{}

	Example(int newA): a(newA)
	{}

	int GetA()
	{
		return a;
	}

	void SetA(int newA)
	{
		a = newA;
	}
};

int main()
{
	/*Example temp, temp1;
	temp.SetA(5);
	temp1.SetA(10);
	cout << temp.GetA() << '\n' << temp1.GetA();*/
	
	Example temp(11);
	cout << temp.GetA();
}