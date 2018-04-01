#include <iostream>

using namespace std;

// unscoped enumeration
enum ITEMTYPE : short
{
	SWORD,
	SHIELD,
	BOW = 10,
	ARMOR,
};

// scoped enumeration
enum class CHARACTER_CLASS : short
{
	NORD = 1,
	BRETON,
	IMPERIAL,
	DUNMER,
	KHAJIIT,
};

enum struct BATTLE_TYPE : short
{
	SOLO = 1,
	DUO,
	SQUAD,
};

int main()
{
	cout << "ITEM SWORD NO : " << ITEMTYPE::SWORD << endl;

	short ItemType = BOW;
	cout << "ITEM BOW NO : " << ItemType << endl;


	short CharClassType3 = (short)CHARACTER_CLASS::NORD;

	CHARACTER_CLASS CharClass = CHARACTER_CLASS::KHAJIIT;

	cout << "CHARACTER KHAJIIT NO : " << (short)CharClass << endl;

	return 0;

}