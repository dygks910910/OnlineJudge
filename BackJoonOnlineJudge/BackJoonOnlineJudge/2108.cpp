#include<iostream>
#include <vector>
#include<algorithm>
#include<cmath>
#include<map>
using namespace std;
// ù° �ٿ��� �������� ����Ѵ�.�Ҽ��� ���� ù° �ڸ����� �ݿø��� ���� ����Ѵ�.
// 
// ��° �ٿ��� �߾Ӱ��� ����Ѵ�.
// 
// ��° �ٿ��� �ֺ��� ����Ѵ�.���� �� ���� ������ �ֺ� �� �� ��°�� ���� ���� ����Ѵ�.
// 
// ��° �ٿ��� ������ ����Ѵ�.

void InputNumber(vector<int> &v)
{
	int testCase = 0;

	cin >> testCase;

	int tmpNum = 0;
	for (int i = 0; i < testCase; ++i)
	{
		cin >> tmpNum;
		v.push_back(tmpNum);
	}
}

int Avrg(vector<int> &v)
{
	int sum = 0;

	for (int i = 0; i < v.size(); ++i)
	{
		sum += v[i];
	}
	return floor(static_cast<float>(sum) / v.size() + 0.5f) ;
}
int Mid(vector<int> &v)
{
	sort(v.begin(), v.end(), [](const int &a,const int &b) {
		return a < b ? true : false;
	});

	if (v.size() == 1)
	{
		return v[0];
	}

	return v[v.size()/2];
}
int MuchNum(vector<int> &v)
{
	map<int,int> countingSort;

	for (int i = 0; i < countingSort.size(); ++i)
	{
		countingSort[i] = 0;
	}

	for (int i = 0; i < v.size(); ++i)
	{
		auto a = countingSort.find(v[i]);
		if (a == countingSort.end())
		{
			countingSort[v[i]] = 0;
		}
		else
		{
			countingSort[v[i]]++;
		}
	}
	
	int muchNum = 0;
	
	map<int, int>::iterator iter = countingSort.end();
	for (auto p = countingSort.begin(); p != countingSort.end(); ++p)
	{
		if (muchNum < p->second)
		{
			muchNum = p->second;
			iter = p;
		}
	}
	if (iter == countingSort.end())
	{
		if (v.size() == 1)
			return v[0];
		else
		{
			return v[1];
		}
	}
	
	return iter->first;

}
int Range(vector<int> &v)
{
	if (v.size() == 1)
	{
		return 0;
	}
	else
	return abs(v[v.size()-1] - v[0]);
}
int main()
{
	vector<int> arr;

	InputNumber(arr);

	cout << Avrg(arr) << "\n";

	cout << Mid(arr) << "\n";

	cout << MuchNum(arr) << "\n";

	cout << Range(arr) << "\n";



	return 0;
}