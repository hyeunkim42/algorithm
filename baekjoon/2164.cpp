#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n, tmp;
	queue<int> Q;
	cin >> n;
	n++;
	for (int i = 1; i < n; i++) {
		Q.push(i);
	}
	while (Q.size() > 1) {
		Q.pop();
		tmp = Q.front();
		Q.pop();
		Q.push(tmp);
	}
	cout << Q.front();
}