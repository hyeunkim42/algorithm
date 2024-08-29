#include <bits/stdc++.h>

using namespace std;

int 	n, cnt;
bool	isused1[40]; // row [y]
bool	isused2[40]; // to right upper conner [x + y]
bool	isused3[40]; // to right lower conner [x - y + n - 1] // n - 1은 양수로 보내기 위함

void	play(int k) {
	if (k == n) {
		cnt++;
		return ;
	}
	for (int i = 0; i < n; i++) {
		if (isused1[i] || isused2[i + k] || isused3[k - i + n - 1])
			continue ;
		isused1[i] = true;
		isused2[i + k] = true;
		isused3[k - i + n - 1] = true;
		play(k + 1);
		isused1[i] = false;
		isused2[i + k] = false;
		isused3[k - i + n - 1] = false;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	play(0);
	cout << cnt;
}