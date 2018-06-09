#include<iostream>
#include<string>
using namespace std;

//0보다 크거나 같고, 99보다 작거나 같은 정수가 주어질 때 다음과 같은 연산을 할 수 있다.
//먼저 주어진 수가 10보다 작다면 앞에 0을 붙여 두 자리 수로 만들고, 각 자리의 숫자를 더한다.
//그 다음, 주어진 수의 가장 오른쪽 자리 숫자와 앞에서 구한 합의 가장 오른쪽 자리 숫자를 이어 붙이면 새로운 수를 만들 수 있다.다음 예를 보자.
//
//26부터 시작한다. 2 + 6 = 8이다.새로운 숫자는 68이다. 6 + 8 = 14이다.새로운 숫자는 84이다. 8 + 4 = 12이다.새로운 숫자는 42이다. 4 + 2 = 6이다.새로운 숫자는 26이다.
//
//위의 예는 4번만에 원래 숫자로 돌아올 수 있다.따라서 26의 사이클의 길이는 4이다.
//
//N이 주어졌을 때, N의 사이클의 길이를 구하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 N이 주어진다.N은 0보다 크거나 같고, 99보다 작거나 같은 정수이다.
//
//출력
//첫째 줄에 N의 사이클 길이를 출력한다.
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

	//cout << "최종숫자:" << stoi(newNumber);
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