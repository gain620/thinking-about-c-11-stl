#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class User
{
private:
	int mIndex;
	bool m_bDie = false;

public:
	User(){}
	~User(){}

	void SetIndex(int numParam)
	{
		this->mIndex = numParam;
	}

	int GetIndex() const
	{
		return mIndex;
	}

	void SetDie()
	{
		this->m_bDie = true;
	}

	bool IsDead() const
	{
		return m_bDie;
	}

};

int main()
{
	vector<User&> vecUsers;

	User tUser1;
	tUser1.SetIndex(1);
	vecUsers.push_back(tUser1);

	User tUser2;
	tUser2.SetIndex(2);
	tUser2.SetDie();
	vecUsers.push_back(tUser2);

	User tUser3;
	tUser3.SetIndex(3);
	vecUsers.push_back(tUser3);


	auto Iter = find_if(vecUsers.begin(), vecUsers.end(),
		[](User &tUser) -> bool {return true == tUser.IsDead();});

	cout << "found dead user index : " << Iter->GetIndex() << endl;

	return 0;
}