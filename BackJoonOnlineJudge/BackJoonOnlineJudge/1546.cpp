#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//����
//�����̴� �⸻��縦 ���ƴ�.�����̴� ������ �����ؼ� ���� ��������� �ߴ�.�ϴ� �����̴� �ڱ� ���� �߿� �ִ밪�� �����.�� ���� M�̶�� �Ѵ�.�׸��� ���� ��� ������ ���� / M * 100���� ���ƴ�.
//
//���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50 / 70 * 100�� �Ǿ� 71.43���� �ȴ�.
//
//�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
//
//�Է�
//ù° �ٿ� ���� �� ������ ���� N�� �־�����.�� ���� 1000���� �۰ų� ����.��° �ٿ� �������� ���� ������ �־�����.�� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.
//
//���
//ù° �ٿ� ���ο� ����� ����Ѵ�.������� ���� / ��� ������ 10 - 2���� ����Ѵ�.
int main()
{
	int tmp = 0;
	float n = 0;
	float m = 0;
	float sum = 0;

	cin >> n;

	vector<int> vScore;
	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		vScore.push_back(tmp);
	}

	sort(vScore.begin(), vScore.end(), [](int a, int b) {return a > b ? true : false; });
	m = vScore[0];
	vector<float> vNewScore;
	for (auto p : vScore)
	{
		vNewScore.push_back((static_cast<float>(p) / m) * 100.0f);
	}
	float newScoreAvrg = 0;
	for (auto p : vNewScore)
	{
		newScoreAvrg += p;
	}
	cout << fixed;
	cout.precision(2);
	cout << static_cast<float>(newScoreAvrg / n);





	return 0;
}