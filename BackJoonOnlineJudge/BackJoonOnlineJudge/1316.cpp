//����
//�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
//
//�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �ܾ��� ���� N�� ���´�.N�� 100���� �۰ų� ���� �ڿ����̴�.��°�ٺ��� N���� �ٿ� �ܾ ���´�.�ܾ�� ���ĺ� �ҹ��ڷθ� �Ǿ��ְ� �ߺ����� ������, ���̴� �ִ� 100�̴�.
//
//���
//ù° �ٿ� �׷� �ܾ��� ������ ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
bool isGroupWord(string& word)
{
	vector<char> tmpStr;

	vector<char>::iterator p;
	char tmpChar;
	for (int i = 0; i < word.size(); ++i)
	{
		p = find(tmpStr.begin(), tmpStr.end(), word[i]);
		if (p == tmpStr.end())
		{
			tmpStr.push_back(word[i]);
			//cout << tmpStr[i];
		}
		else
		{
			tmpChar = *(--(tmpStr.end()));
			//ã�°� ������ �տ����ڿ� ������ ���ӵǴ��� üũ.
			if (tmpChar == word[i])
			{

			}
			else
			{
				return false;
			}
		}

	}
	return true;
}
int main()
{
	vector<string> strArr;
	string str;
	int a;
	cin >> a;
	for (int i = 0; i < a; ++i)
	{
		cin >> str;
		strArr.push_back(str);
	}

	int count = 0;
	for (int i = 0; i < strArr.size(); ++i)
	{
		if (isGroupWord(strArr[i]))
		{
			count++;
		}
	}

	cout << count;
	return 0;
}