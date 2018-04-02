#include <tuple>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	cout << "- tuple storing ref data" << endl;
	{
		int nUserIndex = 11;
		string strUserName = "Gain Chang";

		auto refUserItem = tie(nUserIndex, strUserName);

		cout << get<0>(refUserItem) << endl;
		cout << get<1>(refUserItem) << endl;

		get<0>(refUserItem) = 12;
		get<1>(refUserItem) = "ABCDEF";

		cout << nUserIndex << ", " << strUserName << endl;

	}

	cout << "- assign data on a variable" << endl;
	{
		tuple<int, string> UserInfo(1002, "TEST");

		int nUserIndex = 0;
		string strUserName = "";

		tie(nUserIndex, strUserName) = UserInfo;

		cout << nUserIndex << endl;
		cout << strUserName << endl;

	}

	cout << "- assign data, ignoring some elements" << endl;
	{
		tuple<int, string, int> UserInfo(1002, "TEST", 22);

		int nUserIndex = 0;
		string strUserName = "";

		tie(nUserIndex, strUserName, ignore) = UserInfo;

		cout << nUserIndex << endl;
		cout << strUserName << endl;

	}

	return 0;
}