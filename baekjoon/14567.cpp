//2024 07 23 행운의 편지
	// n 과목의 수 (1 ≤ n ≤ 1000)), m 선수 조건의 수 (0 ≤ M ≤ 500000)
	// M개의 줄에 걸쳐 A, B (A가 B의 선수 과목)
	// 선수 과목 조건을 다 지키면 얼마나 걸릴까요?

#include <iostream>
#include <vector>
using namespace std;

int	n, m, a, b, len = 1;
vector<int>	cond[1001];
int	dp[1001] = {0, };

int	calc(int curr)
{
	if (cond[curr].empty())
		return 1;
	int& ret = dp[curr];
	if (ret != 0)
		return ret;
	ret = 1;
	for (int i = 0 ; i < cond[curr].size(); i++) {
		ret = max(ret, calc(cond[curr][i]) + 1);
	}
	return ret;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;
	if (n == 1 || m == 0)
		return (1);
	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;
		cond[b].push_back(a);
	}

	for (int i = 1;i <= n; i++) {
		cout << calc(i) << ' ';
	}
}