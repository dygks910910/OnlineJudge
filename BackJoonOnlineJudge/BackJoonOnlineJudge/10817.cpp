#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//����
//�� ���� A, B, C�� �־�����.�� ��, �� ��°�� ū ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� �� ���� A, B, C�� �������� ���еǾ� �־�����. (1 �� A, B, C �� 100)
//
//���
//�� ��°�� ū ������ ����Ѵ�.
int main()
{
	int tmp;
	vector<int> arr;

	cin >> tmp;
	arr.push_back(tmp);
	cin >> tmp;
	arr.push_back(tmp);
	cin >> tmp;
	arr.push_back(tmp);

	sort(arr.begin(), arr.end());

	cout << arr[1];

	return 0;
}