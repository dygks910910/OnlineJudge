#include<iostream>
#include<vector>
using namespace std;
//����
//���л� ��������� 90 % �� �ڽ��� �ݿ��� ����� �Ѵ´ٰ� �����Ѵ�.����� �׵鿡�� ���� ������ �˷���� �Ѵ�.
//
//�Է�
//ù° �ٿ��� �׽�Ʈ���̽� C�� �־�����.
//
//��° �ٺ��� �� �׽�Ʈ���̽� ���� ù ���� ���� N(1 <= N <= 1000)���� �л��� �־����� �� �������� N���� 0���� 100 ������ ������ �̾ �־�����.
//
//���
//�� ���̽����� ���پ� ����� �Ѵ� �л����� ������ �Ҽ��� ��°�ڸ����� �ݿø��Ͽ� ����Ѵ�.
int countOverAvrgPerson(const vector<int>& a, int n)
{
	float avrg = 0;
	for (int i : a)
	{
		avrg += i;
	}
	avrg /= (float)n;
	int count = 0;

	for (int i : a)
	{
		if (avrg < i)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int c;
	cin >> c;

	int n;

	int tmp;
	vector<vector<int>> vDoubleArr(c);
	for (int i = 0; i < c; ++i)
	{
		cin >> n;
		vDoubleArr[i].reserve(n);
		for (int j = 0; j < n; ++j)
		{
			cin >> tmp;
			vDoubleArr[i].push_back(tmp);
		}
		cout << fixed;
		cout.precision(3);
		cout << (countOverAvrgPerson(vDoubleArr[i], n) / (float)n) * 100.0f << "%\n";
	}
	return 0;
}