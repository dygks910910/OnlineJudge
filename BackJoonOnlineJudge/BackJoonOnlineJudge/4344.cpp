#include<iostream>
#include<vector>
using namespace std;
//문제
//대학생 새내기들의 90 % 는 자신이 반에서 평균은 넘는다고 생각한다.당신은 그들에게 슬픈 진실을 알려줘야 한다.
//
//입력
//첫째 줄에는 테스트케이스 C가 주어진다.
//
//둘째 줄부터 각 테스트케이스 마다 첫 수로 정수 N(1 <= N <= 1000)명의 학생이 주어지고 그 다음으로 N명의 0부터 100 사이의 점수가 이어서 주어진다.
//
//출력
//각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 소수점 넷째자리에서 반올림하여 출력한다.
int countOverAvrgPerson(const vector<int>& a, int n)
{
	float avrg = 0;
	for (int i : a)
	{
		avrg += i;
	}
	avrg /= (float)n;
	int count = 0;

	for (int i : a)
	{
		if (avrg < i)
		{
			count++;
		}
	}
	return count;
}
int main()
{
	int c;
	cin >> c;

	int n;

	int tmp;
	vector<vector<int>> vDoubleArr(c);
	for (int i = 0; i < c; ++i)
	{
		cin >> n;
		vDoubleArr[i].reserve(n);
		for (int j = 0; j < n; ++j)
		{
			cin >> tmp;
			vDoubleArr[i].push_back(tmp);
		}
		cout << fixed;
		cout.precision(3);
		cout << (countOverAvrgPerson(vDoubleArr[i], n) / (float)n) * 100.0f << "%\n";
	}
	return 0;
}