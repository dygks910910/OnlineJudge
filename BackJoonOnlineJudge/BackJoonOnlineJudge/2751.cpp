//#include<iostream>
//using namespace std;
//
//int main()
//{
//	short testCase = 0;
//	short tmp;
//	cin >> testCase;
//
//	short *arr = new short[testCase];
//
//	short maxNum = 0;
//	for (short i = 0; i < testCase; ++i)
//	{
//		cin >> tmp;
//		if (maxNum < tmp)
//		{
//			maxNum = tmp;
//		}
//		arr[i] = tmp;
//	}
//
//
//	//���Ľ���.
//	//index��ȣ + 1���ؾ� ��ǲ����.
//	short *sortedArr = new short[maxNum];
//	for (short i = 0; i < maxNum; ++i)
//	{
//		sortedArr[i] = 0;
//	}
//
//	for (short i = 0; i < testCase; ++i)
//	{
//		sortedArr[arr[i] - 1]++;
//	}
//
//	for (short i = 0; i < maxNum; ++i)
//	{
//		for (short j = 0; j < sortedArr[i]; ++j)
//		{
//			cout << sortedArr[i] << "\n";
//		}
//	}
//
//	delete[] sortedArr;
//
//
//	return 0;
//}
//


#include <stdio.h>

int main() {

	int n = 0, counts[10001] = { 0, }, input = 0;

	//1 ���� 10000 ������ ���� ������ �����ϱ� ���� �迭�� �Ҵ�

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		scanf("%d", &input);

		counts[input]++;

		//���ڿ� �ε����� ���� ������ ������ ���� ����

	}

	for (int i = 1; i <= 10000; i++)

		counts[i] = counts[i] + counts[i - 1];

	//���ĵ� ������ �ε����� ���� ������ ��Ŵ

	for (int i = 1; i <= 10000; i++) {

		int index = counts[i] - counts[i - 1];

		if (i == 1) {

			index = counts[i];

			//ù ���ڴ� ���� ���ڿ� ���� �ʿ䰡 ����

		}

		while (index--) {

			printf("%d\n", i);

			//�� ���ڿ� ���̸�ŭ ���� ���

		}

	}

	return 0;

}

