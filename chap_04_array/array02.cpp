#include <array>
#include <iostream>

using namespace std;

int main()
{
	// an integer array storing 5 values
	std::array<int, 5> arr1 = {11, 22, 33, 44, 55};

	cout << arr1.at(2) << endl;
	cout << arr1.front() << endl;
	cout << arr1.back() << endl;

	int *ptr = arr1.data();
	cout << *ptr++ << endl;
	cout << *ptr << endl;
	cout << ++(*ptr) << endl;
	cout << ++*ptr << endl;
	cout << *++ptr << endl;


	// fill, size
	array<int, 3> arr2;
	arr2.fill(123);

	for (auto i : arr2)
	{
		cout << i << ", ";
	}

	cout << arr2.size() << endl;

	return 0;
}