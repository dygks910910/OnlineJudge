#include<iostream>

using namespace std;
//문제
//시험 점수를 입력받아 90 ~100점은 A, 80 ~89점은 B, 70 ~79점은 C, 60 ~69점은 D, 나머지 점수는 F를 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 시험 점수가 주어진다.시험 점수는 0보다 크거나 같고, 100보다 작거나 같은 자연수이다.
//
//출력
//시험 성적을 출력한다.
inline bool Between(const int& min, const int& max, const int& x)
{
	return (min <= x && max >= x) ? true : false;
}
int main()
{
	int n = 0;
	cin >> n;
	if (Between(90, 100, n))
	{
		cout << "A";
	}
	else if (Between(80, 89, n))
	{
		cout << "B";
	}
	else if (Between(70, 79, n))
	{
		cout << "C";
	}
	else if (Between(60, 69, n))
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}

	return 0;
}