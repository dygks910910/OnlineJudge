#include<iostream>
#include<string>
using namespace std;

//
//����
//���� ��ҹ��ڿ� ���⸸���� �̷���� ������ �־�����.�� ���忡�� �� ���� �ܾ ������ ? �̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù �ٿ� ���� ��ҹ��ڿ� ����� �̷���� ������ �־�����.�� ������ ���̴� 1, 000, 000�� ���� �ʴ´�.�ܾ�� ���� �� ���� ���еȴ�.
//
//���
//ù° �ٿ� �ܾ��� ������ ����Ѵ�.

int FindSpace(const string& a)
{
	int count = 0;
	for (int i = 0; i < a.size(); ++i)
	{
		if (a[i] >= 'A')
		{
			if (a[i + 1] == ' ' || a[i + 1] == NULL)
			{
				++count;
			}
		}
	}
	return count;
}

int main()
{
	string a;


	getline(cin, a);
	cout << FindSpace(a);

	return 0;
}