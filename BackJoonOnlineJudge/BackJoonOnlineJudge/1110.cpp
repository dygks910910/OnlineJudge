#include<iostream>
#include<string>
using namespace std;

//0���� ũ�ų� ����, 99���� �۰ų� ���� ������ �־��� �� ������ ���� ������ �� �� �ִ�.
//���� �־��� ���� 10���� �۴ٸ� �տ� 0�� �ٿ� �� �ڸ� ���� �����, �� �ڸ��� ���ڸ� ���Ѵ�.
//�� ����, �־��� ���� ���� ������ �ڸ� ���ڿ� �տ��� ���� ���� ���� ������ �ڸ� ���ڸ� �̾� ���̸� ���ο� ���� ���� �� �ִ�.���� ���� ����.
//
//26���� �����Ѵ�. 2 + 6 = 8�̴�.���ο� ���ڴ� 68�̴�. 6 + 8 = 14�̴�.���ο� ���ڴ� 84�̴�. 8 + 4 = 12�̴�.���ο� ���ڴ� 42�̴�. 4 + 2 = 6�̴�.���ο� ���ڴ� 26�̴�.
//
//���� ���� 4������ ���� ���ڷ� ���ƿ� �� �ִ�.���� 26�� ����Ŭ�� ���̴� 4�̴�.
//
//N�� �־����� ��, N�� ����Ŭ�� ���̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� N�� �־�����.N�� 0���� ũ�ų� ����, 99���� �۰ų� ���� �����̴�.
//
//���
//ù° �ٿ� N�� ����Ŭ ���̸� ����Ѵ�.
namespace a {
	string itos(int i)
	{
		string buff;
		//itoa(i, buff, 10);
		buff = to_string(i);
		if (i < 10)
		{
			string tm;
			tm += '0';
			tm += buff;
			return tm;
		}
		return string(buff);
	}
}

int CalCycle(int n)
{
	string tmp = a::itos(n);

	string lastNumOfC;
	string buff;

	int a, b, c = 0;
	a = tmp[0] - 48;
	b = tmp[1] - 48;

	c = a + b;

	//itoa(c,buff,10);
	buff = to_string(c);
	lastNumOfC = buff;

	//cout << tmp[0] << " + " << tmp[1] << " = " << lastNumOfC << "\n";
	string newNumber;
	if (lastNumOfC.size() == 2)
	{
		newNumber += b + 48;
		newNumber += lastNumOfC[1];
	}
	else
	{
		newNumber += b + 48;
		newNumber += lastNumOfC[0];
	}

	//cout << "��������:" << stoi(newNumber);
	return stoi(newNumber);
}
int CountCycle(int n)
{
	static int count = 0;
	static int originNum = n;
	int calcNum = 0;

	calcNum = CalCycle(n);
	if (calcNum != originNum)
	{
		++count;
		CountCycle(calcNum);
	}
	else
	{
		++count;
		return count;
	}

}
int main()
{
	int tmp = 0;
	cin >> tmp;

	cout << CountCycle(tmp);


	return 0;
}