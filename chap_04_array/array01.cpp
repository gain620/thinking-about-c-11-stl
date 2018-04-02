#include <array>
#include <iostream>

int main()
{
	// an integer array storing 5 values
	std::array<int, 5> arr1 = {1, 2, 3, 4, 5};

	for (int i = 0; i < 5; ++i)
	{
		arr1[i] = i + 2;
	}


	for (auto &i : arr1)
	{
		std::cout << i << ", ";
	}

	std::cout << std::endl;


	for (auto iter = arr1.begin(); iter!=arr1.end(); ++iter)
	{
		std::cout << *iter << std::endl;
	}


	return 0;
}