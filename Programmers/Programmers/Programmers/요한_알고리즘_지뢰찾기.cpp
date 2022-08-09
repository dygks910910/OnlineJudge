//지뢰찾기를 해본 적이 있는 독자들이 많을 것이다.
//이름은 잘 기억나지 않지만 어떤 운영체제에 이작고 귀여운 게임이 깔려있다.
//지뢰 찾기는 M* N크기의 지뢰밭에서 모든 지뢰의 위치를 찾아내는 게임이다.
//
//이 게임에서는 각 칸에 인접한 칸에 몇 개의 지뢰가 있는지를 보여준다.
//각 칸에는 최대 여덟 개의 인접한 칸이 있을 수 있다.
//아래에서 왼쪽에 있는 4 * 4 지뢰밭에는 지뢰 두 개가 있으며 각각은 '*' 문자로 표시되어 있다.
//이 지뢰밭을 방금 설명한 힌트 숫자로 표기하면 오른쪽에 있는 것과 같은 필드 가 만들어 진다.
//
//*...                           *100
//....                           2210
//.*..                           1 * 10
//....                           1110
//
//
//>> 입력
//입력은 임의 개수의 지뢰밭으로 구성된다.
//각 지뢰밭의 첫번째 줄에는 각각 행과 열의 개수를 나타내는 두개의 정수 n과 m(0 < n, m <= 100)이 들어있다.
//	그 다음 줄부터는 n개의 줄에 걸쳐서 각 줄마다 정확하게 m개씩의 문자가 들어있으며 이는 지뢰밭을 나타낸다.
//
//	지뢰가 없는 칸은 '.'으로, 지뢰 '*'로 표시되며 이때 따옴표는 쓰지 않는다.
//	n = m = 0인 줄은 입력이 끝났음을 나타내는 것이므로 그 줄은 처리하지 않는다.
//
//
//	>> 출력
//	각 지뢰밭에 대해 Field #x:라고 적혀있는 메시지를 출력한다.
//	이때 x는 필드 번호를 나타내며 1에서 시작한다.
//	그 다음 줄부터는 n개의 줄에 걸쳐서 '.'문자 대신 그 칸에 인접한 칸에 들어있는 지뢰의 개수를 출력한다.
//	각 지뢰밭에 대한 출력 사이에는 반드시 빈 줄이 하나씩 있어야 한다.
//
//
//	>> 입력 예 >> 출력 예
//	4 4                                                Field #1:
//*...                                               *100
//....                                               2210
//.*..                                               1 * 10
//....                                               1110
//
//
//3 5                                                Field #2:
//**...                                              **100
//.....                                              33200
//.*...                                              1 * 100
//0 0

#include<iostream>
#include<vector>
#include <conio.h>
#include <unordered_set>
#include<functional>
#include <chrono>
using namespace std;

vector<char> g_mineField;

unordered_set<int> g_minePos;
int row, col = 0;

void InputProcess()
{
	g_mineField.clear();
	g_minePos.clear();
	row = 0;
	col = 0;
	cin >> row >> col;

	if((row > 0 && col <= 100) == false)
		return;

	g_mineField.resize(row * col);

	for (int i = 0; i < g_mineField.size(); ++i)
	{
		char c = _getch();
		if (c == '*') g_minePos.insert(i);
		if (c == '\r')
		{
			i--;
			continue;
		}
		g_mineField[i] = c;
	}
	cout << endl << endl;
}
bool IsMinePos(int pos)
{
	auto iter = g_minePos.find(pos);
	return iter == g_minePos.end() ? false : true;
}
int GetArroundMineCnt(int pos)
{
	//좌측 체크
	bool checkLeft		= !(0 == pos || pos % col == 0);
	bool checkRight		= !((((row*col-1) -pos) % col== 0));
	//첫번째 행만 위가 없음
	bool checkTop		= !(pos < col);
	//마지막 행만 밑이 없음
	bool checkBottom		= !((row - 1) * col <= pos);
	
	auto CheckMineLeft		= [](int pos,const unordered_set<int>& minePos)		{int targetPos = pos - 1; return IsMinePos(targetPos);};
	auto CheckMineLeftTop   = [](int pos, const unordered_set<int>& minePos)	{int targetPos = pos - 1 - col; return IsMinePos(targetPos); };
	auto CheckMineLeftBtm   = [](int pos, const unordered_set<int>& minePos)	{int targetPos = pos - 1 + col; return IsMinePos(targetPos); };

	auto CheckMineRight		= [](int pos,const unordered_set<int>& minePos)		{int targetPos = pos + 1; return IsMinePos(targetPos); };
	auto CheckMineRightTop  = [](int pos, const unordered_set<int>& minePos)	{int targetPos = pos + 1 - col; return IsMinePos(targetPos); };
	auto CheckMineRightBtm  = [](int pos, const unordered_set<int>& minePos)	{int targetPos = pos + 1 + col; return IsMinePos(targetPos); };

	auto CheckMineTop		= [](int pos,const unordered_set<int>& minePos)		{int targetPos = pos - col; return IsMinePos(targetPos); };
	auto CheckMineBottom	= [](int pos,const unordered_set<int>& minePos)		{int targetPos = pos + col; return IsMinePos(targetPos); };

	vector<function<bool(int, const unordered_set<int>&)>> directionCheckFuncArr;
	//최대8방향
	directionCheckFuncArr.reserve(8);
	//좌측 묶음
	function<bool(int, const unordered_set<int>&)> CheckLeftList[] = { CheckMineLeft, CheckMineLeftBtm, CheckMineLeftTop };
	//우측 묶음
	function<bool(int, const unordered_set<int>&)> CheckRightList[] = { CheckMineRight, CheckMineRightTop, CheckMineRightBtm };

	if (checkLeft)
		for (auto pLeftFunc : CheckLeftList)
			directionCheckFuncArr.push_back(pLeftFunc);
	if(checkRight)
		for (auto pRightFunc : CheckRightList)
			directionCheckFuncArr.push_back(pRightFunc);
	if (checkBottom)
		directionCheckFuncArr.push_back(CheckMineBottom);
	if (checkTop)
		directionCheckFuncArr.push_back(CheckMineTop);
	
	int cnt = 0;
	for (auto func : directionCheckFuncArr)
		if (func(pos, g_minePos))
			cnt++;

	return cnt;
}
void OutputProcess()
{
	int cnt = 0;
	for (int i = 0; i < g_mineField.size(); ++i)
	{
		if (IsMinePos(i))
			cout << '*';
		else
			cout << GetArroundMineCnt(i);
		
		if (++cnt >= col)
		{
			cout << endl;
			cnt = 0;
		}
	}
}
void main()
{
	InputProcess();
	auto startTime = chrono::system_clock::now();
	OutputProcess();
	auto endTime = chrono::system_clock::now();

	chrono::nanoseconds ns = chrono::duration_cast<chrono::nanoseconds>(endTime - startTime);
	cout << "수행시간=" << ns.count() << "nano sec";
}