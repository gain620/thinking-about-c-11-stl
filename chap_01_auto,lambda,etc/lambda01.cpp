#include <iostream>

using namespace std;

int main()
{
	auto lambdaFunc = [](int numParam) {
		cout << "Hello, lambda!" << numParam << endl;
	};

	lambdaFunc(666);
	lambdaFunc(620);

	auto func1 = []{ return 3.14; };
	auto func2 = [](float f){ return f; };
	auto func3 = []()->float{ return 3.14; };

	cout << func1() << endl;
	cout << func2(5.32f) << endl;
	cout << func3() << endl;

	return 0;
}