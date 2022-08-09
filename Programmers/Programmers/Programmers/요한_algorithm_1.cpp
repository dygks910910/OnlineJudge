//어떤 수열을 만들어내는 다음과 같은 알고리즘을 생각해보자.
//어떤 정수 n에서 시작해 n이 짝수면 2로 나누고, 홀수면 3을 곱한 다음 1을 더한다.
//이렇게 해서 새로 만들어진 숫자를 n으로 놓고 n = 1이 될 때까지 같은 작업을 계속 반복한다.
//예를 들어, n = 22이면 다음과 같은 수열이 만들어진다.
//
//22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
//
//아직 증명되진 않았지만 모든 정수 n에 대해 이 알고리즘을 적용시키면 결국에는 n = 1에 이르게 되는 것으로 추측된다.
//그리고 이 가설은 적어도 1, 000, 000까지의 정수에 대해서는 참이다.
//
//n이라는 값이 입력되었을 때 1이 나올 때까지 만들어진 수의 개수(1 포함)를 n의 사이클 길이(cycle - length)라고 한다.
//위에 있는 수열을 예로 들면 22의 사이클 길이는 16이다.
//i와 j라는 두 개의 수가 주어졌을 때 i와j사이의 모든 수(i, j포함)에 대해 최대 사이클 길이를 구하라.
//
//>> 입력
//입력은 일련의 정수쌍 i와 j로 구성되며 한 줄에 한 쌍의 수가 입력된다.
//모든 정수는 1, 000, 000보다 작고 0보다 크다.
//
//>> 출력
//각 정수쌍 i와 j에 대해 i와 j를 입력된 순서대로 출력하고 i와 j 사이(i, j포함)의 최대 사이클 길이를 출력한다.
//이 세 수는 각각 하나씩의 스페이스로 구분되어야 하며 세 수가 모두 한 줄에 출력되어야 하고 입력된 각 줄마다 한 줄씩 출력해야 한다.
//
//>> 입력 예
//1 10
//100 200
//201 210
//900 1000
//
//>> 출력 예
//1 10 20
//100 200 125
//201 210 89
//900 1000 174




#include <iostream>
#include <vector>
#include<algorithm>
#include <chrono>
using namespace std;

//
////재귀함수ver
//
static int g_cycle = 0;
int GetCycleRecursive(unsigned int num) {
	g_cycle++;
	if (num == 1) {
		return g_cycle;
	}
	if (num % 2 == 0)
		num = num / 2;
	else
		num = num * 3 + 1;

	return GetCycleRecursive(num);

};
//반복문 버전
int CalcCycleLoop(int num) 
{
	//1부터 카운팅
	int cycle = 1;
	__int64 resultVal = num;
	
	while (resultVal != 1)
	{
		cycle++;
		if (resultVal % 2 == 0)
			resultVal = resultVal / 2;
		else
			resultVal = resultVal * 3 + 1;
	}

	return cycle;


}
void main()
{
	int firstInput = 0;
	int secondInput = 0;

	while (1)
	{
		cin >> firstInput;
		cin >> secondInput;
		int maxval = 0;
		//{
		//	//재귀 버전
		//	cout << "재귀호출 버전--------------------" << endl;
		//	chrono::system_clock::time_point startT = chrono::system_clock::now();

		//	for (int i = firstInput; i < secondInput; ++i)
		//	{
		//		int curCycle = GetCycleRecursive(i);
		//		g_cycle = 0;
		//		maxval = curCycle > maxval ? curCycle : maxval;
		//	}
		//	chrono::system_clock::time_point endT = chrono::system_clock::now();

		//	cout << firstInput << " " << secondInput << " " << maxval << endl;
		//	chrono::milliseconds mili = chrono::duration_cast<chrono::milliseconds>(endT - startT);
		//	cout << "실행타임:" << mili.count() << "ms" << endl;
		//}

		{
			cout << "반복문 버전--------------------" << endl;
			//loop version
			chrono::system_clock::time_point startT = chrono::system_clock::now();

			for (int i = firstInput; i < secondInput; ++i)
			{
				int curCycle = CalcCycleLoop(i);
				g_cycle = 0;
				maxval = curCycle > maxval ? curCycle : maxval;
			}
			cout << firstInput << " " << secondInput << " " << maxval << endl;
			chrono::system_clock::time_point endT = chrono::system_clock::now();
			chrono::nanoseconds mili = chrono::duration_cast<chrono::nanoseconds>(endT - startT);
			cout << "실행타임:" << mili.count() << "ns" << endl;
		}


	}

}
