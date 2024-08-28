// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int	board[3000][3000];
int n;
int cnt[3];

bool	check(int r, int c, int n) {
	if (n == 1)
		return true;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			if (board[r][c] != board[r + x][c + y])
				return false;
		}
	}
	return true;
}

void	cnt_paper(int r, int c, int n) {
	if (!check(r, c, n)) {
		// cout << r << ' ' << c << '\n';
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cnt_paper(r + i * n / 3, c + j * n / 3, n / 3);
			}
		}
	}
	else {
		// cout << "got here \n";
		if (board[r][c] == -1) cnt[0]++;
		else if (board[r][c] == 0) cnt[1]++;
		else cnt[2]++;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < n; y++) {
			cin >> board[x][y];
		}
	}
	// for (int x = 0; x < n; x++) {
	// 	for (int y = 0; y < n; y++) {
	// 		cout << board[x][y] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	cnt_paper(0, 0, n);
	for (int i = 0; i < 3; i++) {
		cout << cnt[i] << '\n';
	}
}