//����
//� ���� ���� X�� �ڸ����� ���������� �̷�ٸ�, 
//�� ���� �Ѽ���� �Ѵ�.���������� ���ӵ� �� ���� ���� ���̰� ������ ������ ���Ѵ�.N�� �־����� ��, 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� 1, 000���� �۰ų� ���� �ڿ��� N�� �־�����.
//
//���
//ù° �ٿ� 1���� ũ�ų� ����, N���� �۰ų� ���� �Ѽ��� ������ ����Ѵ�.

//1�ڸ��� 2° �ڸ����� �������Ѽ�
#include<iostream>

using namespace std;
bool CheckHansu(int a)
{
	int first, second, third = 0;
	if (100 > a)
	{
		return true;
	}
	else if (100 <= a && a <= 1000)
	{
		first = a / 100;
		second = (a % 100) / 10;
		third = (a % 100) % 10;
		//cout << first << second << third << endl;
		if (second - first == third - second)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (a == 1000)
	{
		return false;
	}

}
int main()
{
	int n;
	cin >> n;
	int countHanSu = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (CheckHansu(i))
		{
			countHanSu++;
		}
	}
	cout << countHanSu;

	return 0;
}