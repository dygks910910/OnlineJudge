#include<iostream>
#include<iomanip>
using namespace std;
//ù° �ٿ�(A + B) % C, ��° �ٿ�(A%C + B%C) % C, ��° �ٿ�(A��B) % C, ��° �ٿ�(A%C �� B%C) % C�� ����Ѵ�.
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