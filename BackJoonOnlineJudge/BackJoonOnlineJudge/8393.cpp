#include<iostream>
using namespace std;
//����
//n�� �־����� ��, 1���� n���� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� n(1 �� n �� 10, 000)�� �־�����.
//
//���
//1���� n���� ���� ����Ѵ�.
int main()
{
	int n = 0;
	cin >> n;

	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}