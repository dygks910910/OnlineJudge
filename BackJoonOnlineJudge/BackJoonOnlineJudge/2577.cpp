//����
//�� ���� �ڿ��� A, B, C�� �־��� �� A��B��C�� ����� ����� 0���� 9���� ������ ���ڰ� �� ���� ���������� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//���� ��� A = 150, B = 266, C = 427 �̶��
//
//A �� B �� C = 150 �� 266 �� 427 = 17037300 �� �ǰ�,
//
//����� ��� 17037300 ���� 0�� 3��, 1�� 1��, 3�� 2��, 7�� 2�� ������.
//
//�Է�
//ù° �ٿ� A, ��° �ٿ� B, ��° �ٿ� C�� �־�����.A, B, C�� ��� 100���� ���ų� ũ��, 1, 000���� ���� �ڿ����̴�.
//
//���
//ù° �ٿ��� A��B��C�� ����� 0 �� �� �� �������� ����Ѵ�.���������� ��° �ٺ��� �� ��° �ٱ��� A��B��C�� ����� 1���� 9������ ���ڰ� ���� �� �� �������� ���ʷ� �� �ٿ� �ϳ��� ����Ѵ�.

#include<iostream>
#include<string>
using namespace std;

int main()
{
	int a, b, c = 0;
	int sum = 0;
	cin >> a >> b >> c;

	sum = a * b * c;
	string strTemp;
	strTemp = to_string(sum);
	int numArr[10] = { 0 };

	for (int i = 0; i < strTemp.size(); ++i)
	{
		if (strTemp[i] == '0')
		{
			numArr[0]++;
		}
		else if (strTemp[i] == '1')
		{
			numArr[1]++;

		}
		else if (strTemp[i] == '2')
		{
			numArr[2]++;

		}
		else if (strTemp[i] == '3')
		{
			numArr[3]++;

		}
		else if (strTemp[i] == '4')
		{
			numArr[4]++;

		}
		else if (strTemp[i] == '5')
		{
			numArr[5]++;

		}
		else if (strTemp[i] == '6')
		{
			numArr[6]++;

		}
		else if (strTemp[i] == '7')
		{
			numArr[7]++;

		}
		else if (strTemp[i] == '8')
		{
			numArr[8]++;

		}
		else if (strTemp[i] == '9')
		{
			numArr[9]++;

		}
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << numArr[i] << "\n";
	}

	return 0;
}