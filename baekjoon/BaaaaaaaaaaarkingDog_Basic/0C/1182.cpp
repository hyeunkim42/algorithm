#include <bits/stdc++.h>

using namespace std;

int n, s;
int arr[21];
bool vis[21];
int cnt;

void	check(int k, int tot) {
	if (k == n) {
		if (tot == s)
			cnt++;
		return ;
	}
	check(k + 1, tot); // 현재 원소를 넣는 경우
	check(k + 1, tot + arr[k]); // 현재 원소를 넣지 않는 경우
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	check(0, 0);
	if (s == 0)
		cnt--;
	cout << cnt;
}