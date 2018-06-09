#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//문제
//세 정수 A, B, C가 주어진다.이 때, 두 번째로 큰 정수를 출력하는 프로그램을 작성하시오.
//
//입력
//첫째 줄에 세 정수 A, B, C가 공백으로 구분되어 주어진다. (1 ≤ A, B, C ≤ 100)
//
//출력
//두 번째로 큰 정수를 출력한다.
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