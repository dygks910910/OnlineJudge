//문제
//어떤 양의 정수 X의 자리수가 등차수열을 이룬다면, 
//그 수를 한수라고 한다.등차수열은 연속된 두 개의 수의 차이가 일정한 수열을 말한다.N이 주어졌을 때, 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 1, 000보다 작거나 같은 자연수 N이 주어진다.
//
//출력
//첫째 줄에 1보다 크거나 같고, N보다 작거나 같은 한수의 개수를 출력한다.

//1자리수 2째 자리수는 무조건한수
#include<iostream>

using namespace std;
bool CheckHansu(int a)
{
	int first, second, third = 0;
	if (100 > a)
	{
		return true;
	}
	else if (100 <= a && a <= 1000)
	{
		first = a / 100;
		second = (a % 100) / 10;
		third = (a % 100) % 10;
		//cout << first << second << third << endl;
		if (second - first == third - second)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (a == 1000)
	{
		return false;
	}

}
int main()
{
	int n;
	cin >> n;
	int countHanSu = 0;
	for (int i = 1; i <= n; ++i)
	{
		if (CheckHansu(i))
		{
			countHanSu++;
		}
	}
	cout << countHanSu;

	return 0;
}