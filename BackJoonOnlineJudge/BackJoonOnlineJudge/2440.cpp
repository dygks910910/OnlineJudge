#include<iostream>

using namespace std;

//����
//ù° �ٿ��� �� 1��, ��° �ٿ��� �� 2��, N��° �ٿ��� �� N���� ��� ����
//
//�Է�
//ù° �ٿ� N(1 <= N <= 100)�� �־�����.
//
//���
//ù° �ٺ��� N��° �� ���� ���ʴ�� ���� ����Ѵ�.
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n - i; ++j)
		{
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}