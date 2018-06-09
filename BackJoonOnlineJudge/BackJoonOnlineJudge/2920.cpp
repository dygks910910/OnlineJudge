//����
//�������� c d e f g a b C, �� 8�� ������ �̷�����ִ�.�� �������� 8�� ���� ������ ���� ���ڷ� �ٲپ� ǥ���Ѵ�.c�� 1��, d�� 2��, ..., C�� 8�� �ٲ۴�.
//
//1���� 8���� ���ʴ�� �����Ѵٸ� ascending, 8���� 1���� ���ʴ�� �����Ѵٸ� descending, �� �� �ƴ϶�� mixed �̴�.
//
//������ ������ �־����� ��, �̰��� ascending����, descending����, �ƴϸ� mixed���� �Ǻ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� 8�� ���ڰ� �־�����.�� ���ڴ� ���� ������ ������ ���̸�, 1���� 8���� ���ڰ� �� ���� �����Ѵ�.
//
//���
//ù° �ٿ� ascending, descending, mixed �� �ϳ��� ����Ѵ�.

#include<iostream>

using namespace std;

bool CheckAscending(int *arr)
{
	for (int i = 1; i <= 8; ++i)
	{
		if (arr[i - 1] != i)
		{
			return false;
		}
	}
	return true;
}
bool CheckDescending(int* arr)
{
	int j = 0;
	for (int i = 8; i >= 1; --i)
	{
		if (arr[j++] != i)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int arr[8];

	for (int i = 0; i < 8; ++i)
	{
		cin >> arr[i];
	}
	if (CheckAscending(arr))
	{
		cout << "ascending";
	}
	else if (CheckDescending(arr))
	{
		cout << "descending";
	}
	else
	{
		cout << "mixed";
	}


	return 0;
}
