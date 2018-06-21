#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	int num = 0;

	cin >> num;

	string a = to_string(num);
	sort(a.begin(), a.end(), [](char a,char b) {
		return a > b ? true : false;
	});

	cout << a;


	return 0;
}