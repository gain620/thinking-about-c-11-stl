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

	tuple<int, string, ITEM> UserItem = tuple<int, string, ITEM>(1, "A", item);

	cout << get<0>(UserItem) << endl;
	cout << get<1>(UserItem) << endl;
	cout << get<2>(UserItem).nID << endl;

	get<0>(UserItem) = 2;
	get<1>(UserItem) = "B";
	get<2>(UserItem).nID = 1002;

	cout << get<0>(UserItem) << endl;
	cout << get<1>(UserItem) << endl;
	cout << get<2>(UserItem).nID << endl;


	return 0;
}