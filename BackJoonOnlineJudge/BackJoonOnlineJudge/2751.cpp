#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	int testCase = 0;
	int tmp;
	cin >> testCase;
	vector<int> a;
	a.reserve(testCase);

	for (int i = 0; i < testCase; ++i)
	{
		cin >> tmp;
		a.push_back(tmp);
	}
	sort(a.begin(), a.end());

	for (auto p : a)
	{
		cout << p << "\n";
	}




	return 0;
}