#include<iostream>

using namespace std;
//����
//���� ������ �Է¹޾� 90 ~100���� A, 80 ~89���� B, 70 ~79���� C, 60 ~69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� ������ �־�����.���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �ڿ����̴�.
//
//���
//���� ������ ����Ѵ�.
inline bool Between(const int& min, const int& max, const int& x)
{
	return (min <= x && max >= x) ? true : false;
}
int main()
{
	int n = 0;
	cin >> n;
	if (Between(90, 100, n))
	{
		cout << "A";
	}
	else if (Between(80, 89, n))
	{
		cout << "B";
	}
	else if (Between(70, 79, n))
	{
		cout << "C";
	}
	else if (Between(60, 69, n))
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}

	return 0;
}