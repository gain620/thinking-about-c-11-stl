#include <iostream>

using namespace std;

struct CharacterInventoryInfo
{
	int slotNum;
	int itemCode;
	
};

int main()
{
	int userMode = 4;
	auto *pUserMode = &userMode;

	cout << "pUserMode -> value : " << *pUserMode << endl;

	auto &refUserMode = userMode;
	refUserMode = 5;

	cout << "userMode -> value : " << userMode << "refUserMode -> value : " << refUserMode << endl;

	auto *pCharInvenInfo = new CharacterInventoryInfo();

	return 0;
}