#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#pragma region Function


template<class T>
void mySwap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

void BubbleSort(vector<int>& v)
{
	for (int numberCount = 0; numberCount < v.size(); ++numberCount)
	{
		//numberCount번째 수를 정렬
		for (int i = 0; i < v.size(); ++i)
		{
			if (v[numberCount] < v[i])
			{
				mySwap<int>(v[i], v[numberCount]);
			}
		}
	}
}

void InsertionSort(vector<int>& v)
{
	int compNumber = 0;
	for (int index = 0; index < v.size(); ++index)
	{
		if(index == 0)
			continue;
		compNumber = v[index];
		for (int i = index; i == 0; --i)
		{

		}

	}


}
#pragma endregion

int main()
{
	int inputCount = 0;
	cin >> inputCount;
	
	vector<int> inputNumbers;
	inputNumbers.reserve(inputCount);

	int tmpNumbers = 0;
	for (int i = 0; i < inputCount; ++i)
	{
		cin >> tmpNumbers;
		inputNumbers.push_back(tmpNumbers);
	}
	BubbleSort(inputNumbers);
	for (int i : inputNumbers)
	{
		cout << i << "\n";
	}


	return 0;
}