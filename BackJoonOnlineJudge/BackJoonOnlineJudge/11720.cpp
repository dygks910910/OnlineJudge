//����
//N���� ���ڰ� ���� ���� �����ִ�.�� ���ڸ� ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ������ ���� N(1 �� N �� 100)�� �־�����.��° �ٿ� ���� N���� ������� �־�����.
//
//���
//�Է����� �־��� ���� N���� ���� ����Ѵ�.

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	string a;
	cin >> a;
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += static_cast<int>(a[i]) - 48;
	}
	cout << sum;



	return 0;
}