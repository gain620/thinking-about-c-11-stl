#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main()
{
	cout << "range based for - vector" << endl;

	vector<int> vecNum;
	vecNum.push_back(1);
	vecNum.push_back(2);
	vecNum.push_back(3);

	for (auto i :vecNum)
	{
		cout << i << endl;
	}

	cout << endl;
	cout <<"range based for - unordered_map"<< endl;

	unordered_map<int, string> mapString;
	mapString.insert(make_pair<int, string>(1, "A"));
	mapString.insert(make_pair<int, string>(2, "B"));
	mapString.insert(make_pair<int, string>(3, "C"));

	for (auto i : mapString)
	{
		cout << "key: "<< i.first << " , value: " << i.second << endl;
	}

	return 0;
}