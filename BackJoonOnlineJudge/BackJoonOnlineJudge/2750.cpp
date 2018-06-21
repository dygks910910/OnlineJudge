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
	for (int sortingTargetIndex = 1; sortingTargetIndex < v.size(); ++sortingTargetIndex)
	{
		for (int cmpTargetIndex = 0; cmpTargetIndex <= sortingTargetIndex - 1; ++cmpTargetIndex)
		{
			if (v[sortingTargetIndex] < v[cmpTargetIndex])
			{
				int tmp = v[sortingTargetIndex];
				for (int a = sortingTargetIndex - 1; a >= cmpTargetIndex; --a)
				{
					v[a + 1] = v[a];
				}
				v[cmpTargetIndex] = tmp;
				break;
			}
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
	InsertionSort(inputNumbers);
	for (int i : inputNumbers)
	{
		cout << i << "\n";
	}


	return 0;
}