// #include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;

char	board[101][101];
bool	vis[101][101];
int	n;
int drow[4] = {0, 1, 0, -1};
int dcol[4] = {1, 0, -1, 0};

void	bfs(int row, int col) {
	queue<pair <int, int> > Q;
	Q.push(make_pair(row, col));
	while (Q.size()) {
		pair<int, int> curr = Q.front(); Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nrow = curr.first + drow[dir];
			int ncol = curr.second + dcol[dir];

			if (nrow < 0 || ncol < 0 || nrow >= n || ncol >= n)
				continue ;
			if (vis[nrow][ncol] || board[nrow][ncol] != board[row][col])
				continue ;
			Q.push(make_pair(nrow, ncol));
			vis[nrow][ncol] = true;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> n;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			cin >> board[row][col];
		}
	}
	// for (int r = 0; r < n; r++) {
	// 	for (int c = 0; c < n; c++) {
	// 		cout << vis[r][c] << ' ';
	// 	}
	// 	cout << '\n';
	// }
	int rgb = 0;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (!vis[row][col]) {
				// cout << row << ' ' << col << " update befor cnt " << rgb << ' ' << vis[row][col] << '\n';
				bfs(row, col);
				rgb++;
			}
		}
	}
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			vis[row][col] = false;
			if (board[row][col] == 'G')
				board[row][col] = 'R';
		}
	}
	int rb = 0;
	for (int row = 0; row < n; row++) {
		for (int col = 0; col < n; col++) {
			if (!vis[row][col]) {
				bfs(row, col);
				rb++;
			}
		}
	}
	cout << rgb << ' ' << rb << '\n';
}