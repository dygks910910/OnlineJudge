//����
//������� ���� ����� ������ ���� ���Ѵ�.����� ���ڸ� �дµ� ������ �ִ�.�̷��� ������ ���ϴ� ����� ���ؼ� ����̴� ���� ũ�⸦ ���ϴ� ������ ���־���.����̴� �� �ڸ� ���� �� ���� ĥ�ǿ� ���־���.�� ������ ũ�Ⱑ ū ���� ���غ���� �ߴ�.
//
//����� ���� �ٸ������ �ٸ��� �Ųٷ� �д´�.���� ���, 734�� 893�� ĥ�ǿ� �����ٸ�, ����� �� ���� 437�� 398�� �д´�.����, ����� �� ���� ū ���� 437�� ū ����� ���� ���̴�.
//
//�� ���� �־����� ��, ����� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ����̰� ĥ�ǿ� ���� �� �� A�� B�� �־�����.�� ���� ���� ���� �� �ڸ� ���̸�, 0�� ���ԵǾ� ���� �ʴ�.
//
//���
//ù° �ٿ� ����� ����� ����Ѵ�.

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int ReverseNumber(string a)
{
	string tmp;

	for (auto i = a.rbegin(); i != a.rend(); ++i)
	{
		tmp += *i;
	}

	return stoi(tmp);

}
int main()
{
	string aStr;
	string bStr;
	cin >> aStr;
	cin >> bStr;
	int c, d;
	c = ReverseNumber(aStr);
	d = ReverseNumber(bStr);

	printf("%d", c > d ? c : d);


	return 0;
}