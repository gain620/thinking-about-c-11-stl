#include <tuple>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	tuple<int, string> UserInfo(1002, "ABCDEF");
	tuple<int, int> tupGameResult = make_tuple(12, 3);
	// concatenate two tuples
	auto UserGameResult = tuple_cat(UserInfo, tupGameResult);

	cout << get<0>(UserGameResult) << endl;
	cout << get<1>(UserGameResult) << endl;
	cout << get<2>(UserGameResult) << endl;
	cout << get<3>(UserGameResult) << endl;

	return 0;
}