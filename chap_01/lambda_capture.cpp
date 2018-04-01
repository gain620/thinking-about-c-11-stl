#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> vecMoney;
	vecMoney.push_back(100);
	vecMoney.push_back(400);
	vecMoney.push_back(50);
	vecMoney.push_back(1000);

	int totalMoney = 0;
	int totalSmallMoney = 0;


	// for_each(vecMoney.begin(), vecMoney.end(), [&totalMoney](int moneyParam) {
	// 	totalMoney += moneyParam;
	// });
	for_each(vecMoney.begin(), vecMoney.end(), [&](int moneyParam) {
	totalMoney += moneyParam;
	if(moneyParam<100) totalSmallMoney += moneyParam;
	});

	cout << totalMoney << endl;

	return 0;
}