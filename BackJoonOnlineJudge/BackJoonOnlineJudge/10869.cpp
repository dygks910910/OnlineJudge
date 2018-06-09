#include<iostream>
#include<iomanip>
using namespace std;
//첫째 줄에 A + B, 둘째 줄에 A - B, 셋째 줄에 A*B, 넷째 줄에 A / B, 다섯째 줄에 A%B를 출력한다.
int main()
{
	int a, b = 0;
	cin >> a; cin >> b;

	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a%b << endl;

}