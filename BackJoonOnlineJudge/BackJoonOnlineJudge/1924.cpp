#include<iostream>
using namespace std;
//����
//������ 2007�� 1�� 1�� �������̴�.�׷��ٸ� 2007�� x�� y���� ���� �����ϱ� ? �̸� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �� ĭ�� ���̿� �ΰ� x(1��x��12)�� y(1��y��31)�� �־�����.����� 
//2007�⿡�� 1, 3, 5, 7, 8, 10, 12���� 31�ϱ���, 4, 6, 9, 11���� 30�ϱ���, 2���� 28�ϱ��� �ִ�.
//
//���
//ù° �ٿ� x�� y���� ���� ���������� ���� SUN, MON, TUE, WED, THU, FRI, SAT�� �ϳ��� ����Ѵ�.

int main()
{
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	char* day[] = { "SUN","MON","TUE","WED","THU","FRI","SAT" };
	int x, y = 0;
	cin >> x >> y;
	int counyDay = 0;
	for (int i = 1; i < x; ++i)
	{
		counyDay += month[i - 1];
	}
	counyDay += y;

	cout << day[(counyDay % 7)];


	return 0;
}