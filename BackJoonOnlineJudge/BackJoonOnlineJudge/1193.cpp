#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
//분자Get
int GetNumerator(string fracNum);
//분모Get
int GetDenominator(string fracNum);

void Right(string& fractionalNum);
void LeftDown(string& fractionnalNum);
void Down(string& fractionalNum);
void RightUp(string& fractionalNum);
enum
{
	STEP1,
	STEP2,
	STEP3,
	STEP4

};
int main()
{
	string fractional = "1/1";
	int n = 0;
	cin >> n;




	auto func = Right;

	for (int i = 1; i < n;)
	{
		Right(fractional);
		++i;
		if (i == n)
		{
			break;
		}

		while (1 != GetDenominator(fractional))
		{
			LeftDown(fractional);
			++i;
			if (i == n)
			{
				goto stop;
			}
		}

		Down(fractional);
		++i;
		if (i == n)
		{
			break;
		}
		while (1 != GetNumerator(fractional))
		{
			RightUp(fractional);
			++i;
			if (i == n)
			{
				goto stop;
			}
		}
	}

	/*while(1)
	{

	Right(fractional);
	++i;
	if (i == n)
	{
	break;
	}

	while (1 != GetDenominator(fractional))
	{
	LeftDown(fractional);
	++i;
	if (i == n)
	{
	break;
	}
	}

	Down(fractional);
	++i;
	if (i == n)
	{
	break;
	}
	while (1 != GetNumerator(fractional))
	{
	RightUp(fractional);
	++i;
	if (i == n)
	{
	break;
	}
	}
	}*/


stop: cout << fractional;
	return 0;
}
//분자Get
int GetNumerator(string fracNum)
{
	int size = fracNum.find('/');

	string numerator(fracNum.begin(), fracNum.begin() + size);

	//cout << numerator << endl;

	return stoi(numerator);

}
//분모Get
int GetDenominator(string fracNum)
{
	int n = fracNum.find('/') + 1;

	string Denominator(fracNum.begin() + n, fracNum.end());

	//cout << Denominator << endl;

	return stoi(Denominator);
}

void Right(string& fractionalNum)
{
	int n, d{};
	n = GetNumerator(fractionalNum);
	d = GetDenominator(fractionalNum) + 1;

	fractionalNum.clear();
	fractionalNum = to_string(n) + "/" + to_string(d);

	//cout << fractionalNum << "->";

}

void LeftDown(string& fractionalNum)
{
	int n, d{};
	n = GetNumerator(fractionalNum) + 1;
	d = GetDenominator(fractionalNum) - 1;

	fractionalNum.clear();
	fractionalNum = to_string(n) + "/" + to_string(d);
	//cout << fractionalNum << "->";

}

void Down(string& fractionalNum)
{
	int n, d{};
	n = GetNumerator(fractionalNum) + 1;
	d = GetDenominator(fractionalNum);

	fractionalNum.clear();
	fractionalNum = to_string(n) + "/" + to_string(d);
	//cout << fractionalNum << "->";

}

void RightUp(string& fractionalNum)
{
	int n, d{};
	n = GetNumerator(fractionalNum) - 1;
	d = GetDenominator(fractionalNum) + 1;

	fractionalNum.clear();
	fractionalNum = to_string(n) + "/" + to_string(d);
	//cout << fractionalNum << "->";
}
