// 크기가 N인 수열 an
// ai 에 대해 오큰수 NGE(i)
// 오큰수: 오른쪽에 있으면서 Ai보다 큰 수 중에서 가장 왼쪽에 있는 수 
// 없다면 -1
// 1 <= N <= 1,000,000, 1 <= Ai <= 1,000,000

#include <bits/stdc++.h>

using namespace std;

int a[1000001];
int ans[1000001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n;
	
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	stack<int> S;
	for (int i = n; i > 0; i--) {
		while (!S.empty() && S.top() <= a[i])
			S.pop();
		if (S.empty())
			ans[i] = -1;
		else
			ans[i] = S.top();
		S.push(a[i]);
	}
	for (int i = 1; i <= n; i++)
		cout << ans[i] << ' ';
}