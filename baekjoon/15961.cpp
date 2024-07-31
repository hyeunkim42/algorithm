// 연관문제 13422

#include <iostream>
using namespace std;
int N[3000001], D[3001];
int	n, d, k, c, cnt, st, ed, res;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	cin >> n >> d >> k >> c;
	D[c]++;
	cnt++;
	for (int i = 0; i < n; i++) {
		cin >> N[i];
		if (i < k) {
			if (D[N[i]] == 0)
				cnt++;
			D[N[i]]++;
		}
	}
	res = cnt;
	for (st = 1; st < n; st++) {
		ed = (st + k - 1) % n;
		if (D[N[ed]] == 0)
			cnt++;
		D[N[ed]]++;
		D[N[st - 1]]--;
		if (D[N[st - 1]] == 0)
			cnt--;
		res = max(cnt, res);
	}
	cout << res << "\n";
}