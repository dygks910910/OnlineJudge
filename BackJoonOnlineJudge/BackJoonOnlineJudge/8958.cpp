//"OOXXOXXOOO"�� ���� OX������ ����� �ִ�.O�� ������ ���� ���̰�, X�� ������ Ʋ�� ���̴�.������ ���� ��� �� ������ ������ �� �������� ���ӵ� O�� ������ �ȴ�.���� ���, 10�� ������ ������ 3�� �ȴ�.
//
//"OOXXOXXOOO"�� ������ 1 + 2 + 0 + 0 + 1 + 0 + 0 + 1 + 2 + 3 = 10���̴�.
//
//OX������ ����� �־����� ��, ������ ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �׽�Ʈ ���̽��� ������ �־�����.�� �׽�Ʈ ���̽��� �� �ٷ� �̷���� �ְ�, ���̰� 0���� ũ�� 80���� ���� ���ڿ��� �־�����.���ڿ��� O�� X������ �̷���� �ִ�.
//
//���
//�� �׽�Ʈ ���̽����� ������ ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int CountScore(const string& str)
{
	int score = 0;

	int countO = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == 'O')
		{
			for (int j = i; j < str.size(); ++j)
			{
				if (str[j] == 'O')
				{
					countO++;
					i++;
				}
				else
				{
					break;
				}
			}

			for (int k = 1; k <= countO; ++k)
			{
				score += k;
			}
			countO = 0;
		}
	}
	return score;
}
int main()
{

	int testCase = 0;
	cin >> testCase;
	vector<string> arr;
	string tmpStr;
	for (int i = 0; i < testCase; ++i)
	{
		cin >> tmpStr;
		cout << CountScore(tmpStr) << "\n";
	}
	return 0;
}