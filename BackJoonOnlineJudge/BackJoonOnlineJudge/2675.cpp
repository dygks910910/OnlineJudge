//����
//���ڿ� S�� �Է¹��� �Ŀ�, �� ���ڸ� R�� �ݺ��� �� ���ڿ� T�� ���� �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�ٽ� �������ڸ�, ù ��° ���ڸ� R�� �ݺ��ϰ�, �� ��° ���ڸ� R�� �ݺ��ϴ� ������ T�� ����� �ȴ�.S���� QR Code "alphanumeric" ���ڸ� ����ִ�.
//
//QR Code "alphanumeric" ���ڴ� 0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ$%*+-. / : �̴�.
//
//�Է�
//ù° �ٿ� �׽�Ʈ ���̽��� ���� T(1 <= T <= 1, 000)�� �־�����.�� �׽�Ʈ ���̽���  �ݺ� Ƚ�� R(1 <= R <= 8), ���ڿ� S�� �������� ���еǾ� �־�����.S�� ���̴� ��� 1�̸�, 20���ڸ� ���� �ʴ´�.
//
//���
//�� �׽�Ʈ ���̽��� ���� T�� ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int testCase, r = 0;
	cin >> testCase;
	vector<pair<int, string>> strArr;
	string tempStr;
	for (int i = 0; i < testCase; ++i)
	{
		cin >> r;
		cin >> tempStr;
		strArr.push_back(make_pair(r, tempStr));
		cin.clear();
	}

	for (int i = 0; i < strArr.size(); ++i)
	{
		for (int j = 0; j < strArr[i].second.size(); ++j)
		{
			for (int k = 0; k < strArr[i].first; ++k)
				cout << strArr[i].second[j];
		}
		cout << "\n";
	}



	return 0;
}