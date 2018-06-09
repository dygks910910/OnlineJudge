#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a, b = 0;
	cin >> a; cin >> b;
	streamsize pre = cout.precision();
	cout << setprecision(11) << a / b << setprecision(pre);
	return 0;
}