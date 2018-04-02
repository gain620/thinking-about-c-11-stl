#include <tuple>
#include <iostream>
#include <string>

using namespace std;

typedef struct STRUCT_ITEM
{
	int nID;
}ITEM;

int main()
{
	ITEM item;
	item.nID = 1001;

	tuple<int, string, ITEM> UserItem = make_tuple(1, "ABC", item);

	cout << get<0>(UserItem) << endl;
	cout << get<1>(UserItem) << endl;
	cout << get<2>(UserItem).nID << endl;

	auto nCount = tuple_size<decltype(UserItem)>::value;
	cout << "nCount -> " << nCount << endl;

	return 0;
}