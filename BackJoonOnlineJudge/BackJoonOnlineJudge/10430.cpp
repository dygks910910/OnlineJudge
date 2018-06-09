#include<iostream>
#include<iomanip>
using namespace std;
//첫째 줄에(A + B) % C, 둘째 줄에(A%C + B%C) % C, 셋째 줄에(A×B) % C, 넷째 줄에(A%C × B%C) % C를 출력한다.
int main()
{
	int a, b, c = 0;
	cin >> a; cin >> b; cin >> c;

	cout << (a + b) % c << endl;
	cout << (a%c + b%c) % c << endl;
	cout << (a * b) % c << endl;
	cout << (a% c  * b% c) % c << endl;


	return 0;
}