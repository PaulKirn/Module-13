
#include <iostream>

using namespace std;

//template<class T>
//T sum(T a, T b)
//{
//	return a + b;
//}

template<class T, class M>
class A
{
	T value;
	M anotherValue;
public:
	A() {}
	A(T _value) : value(_value) {}

	void ShowValue()
	{
		cout << value;
	}

	void SetValue(T newValue)
	{
		value = newValue;
	}

	void SetAnotherValue(M newAnotherVal)
	{
		anotherValue = newAnotherVal;
	}
};


int main()
{
	/*sum<int>(1, 2);
	sum<float>(2.f, 3.f);
	sum<double>(2.0, 3.0);*/

	A<double, int>* ptrInt = new A<double, int>(10.6);
	ptrInt->ShowValue();
	ptrInt->SetValue(2.1);
	ptrInt->ShowValue();
	
}


