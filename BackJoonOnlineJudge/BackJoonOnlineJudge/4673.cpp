//���� �ѹ��� 1949�� �ε� ������ D.R.Kaprekar�� �̸� �ٿ���.���� ���� n�� ���ؼ� d(n)�� n�� n�� �� �ڸ����� ���ϴ� �Լ���� ��������.���� ���, d(75) = 75 + 7 + 5 = 87�̴�.
//
//���� ���� n�� �־����� ��, �� ���� �����ؼ� n, d(n), d(d(n)), d(d(d(n))), ...�� ���� ���� ������ ���� �� �ִ�.
//
//���� ���, 33���� �����Ѵٸ� ���� ���� 33 + 3 + 3 = 39�̰�, �� ���� ���� 39 + 3 + 9 = 51, ���� ���� 51 + 5 + 1 = 57�̴�.�̷������� ������ ���� ������ ���� �� �ִ�.
//
//33, 39, 51, 57, 69, 84, 96, 111, 114, 120, 123, 129, 141, ...
//
//n�� d(n)�� �����ڶ�� �Ѵ�.���� �������� 33�� 39�� �������̰�, 39�� 51�� ������, 51�� 57�� �������̴�.�����ڰ� �� ������ ���� ��쵵 �ִ�.���� ���, 101�� �����ڰ� 2��(91�� 100) �ִ�.
//
//�����ڰ� ���� ���ڸ� ���� �ѹ���� �Ѵ�. 100���� ���� ���� �ѹ��� �� 13���� �ִ�. 1, 3, 5, 7, 9, 20, 31, 42, 53, 64, 75, 86, 97
//
//10000���� �۰ų� ���� ���� �ѹ��� �� �ٿ� �ϳ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//�Է��� ����
//
//���
//10, 000���� �۰ų� ���� ���� �ѹ��� �� �ٿ� �ϳ��� �����ϴ� ������ ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int divisionSum(int n)
{
	string tmp;
	tmp = to_string(n);
	if (tmp.size() == 1)
	{
		return n + stoi(tmp);
	}
	else if (tmp.size() == 2)
	{
		return n + (tmp[0] - 48) + (tmp[1] - 48);
	}
	else if (tmp.size() == 3)
	{
		return n + (tmp[0] - 48) + (tmp[1] - 48) + (tmp[2] - 48);
	}
	else if (tmp.size() == 4)
	{
		return n + (tmp[0] - 48) + (tmp[1] - 48) + (tmp[2] - 48) + (tmp[3] - 48);
	}
	else
	{
		return 0;
	}
}
void printSelf()
{
	int n = 0;
	int selfNumber = 0;
	vector<int> vNotSelfNumArr;
	for (int i = 0; i < 10000; ++i)
	{
		vNotSelfNumArr.push_back(divisionSum(i));
	}
	sort(vNotSelfNumArr.begin(), vNotSelfNumArr.end());
	while (n <= 10000)
	{
		++n;
		//if(vNotSelfNumArr.end() != find(vNotSelfNumArr.begin(), vNotSelfNumArr.end(), n));
		if (!binary_search(vNotSelfNumArr.begin(), vNotSelfNumArr.end(), n))
		{
			cout << n << "\n";
		}

	}

}
int main()
{
	printSelf();
	return 0;
}