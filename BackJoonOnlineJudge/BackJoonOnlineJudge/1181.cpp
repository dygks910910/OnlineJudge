#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmpStr(const string& a , const string& b,const int& startIndex)
{
	if (a[startIndex] != b[startIndex])
	{
		return a[startIndex] < b[startIndex] ? true : false;
	}
	else
	{
		cmpStr(a, b, startIndex+1);
	}
}

int main()
{
	int testCase = 0;
	std::vector<string> arr;

	cin >> testCase;
	string tmp;
	std::vector<string>::iterator iter;
	for (int i = 0; i < testCase; ++i)
	{
		cin >> tmp;
		iter = find(arr.begin(), arr.end(), tmp);
		if (iter == arr.end())
		{
			arr.push_back(tmp);
		}
	}

	sort(arr.begin(), arr.end(), [](string a, string b) {
		if (a.size() == b.size())
		{
			return cmpStr(a,b,0);
		}
		return a.size() < b.size() ? true : false;
	});


	for (auto p : arr)
	{
		cout << p << "\n";
	}
	return 0;
}