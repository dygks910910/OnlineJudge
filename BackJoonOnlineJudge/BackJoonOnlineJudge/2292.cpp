#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int tmp = 1000000000;
	vector<int> arr;
	arr.push_back(1);
	//���� 6�� �����ŭ �����Ѵ�.
	int weightValue;
	int calcNum = 1;
	for (int i = 1; calcNum <= tmp; ++i)
	{
		calcNum += i * 6;
		arr.push_back(calcNum);
	}

	//cout << *(--(arr.end())) << endl;
	cin >> tmp;

	for (int i = 0; i < arr.size(); ++i)
	{
		if (arr[i] >= tmp)
		{
			cout << i + 1;
			break;
		}
	}


	return 0;
}