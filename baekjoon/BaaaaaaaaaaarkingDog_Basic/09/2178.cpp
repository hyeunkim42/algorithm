#include <bits/stdc++.h>

using namespace std;

int board[101][101];
int	dist[101][101];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	for (int x = 0; x < n; x++) {
		string maze;
		cin >> maze;
		for (int y = 0; y < m; y++) {
			board[x][y] = maze[y] - '0';
		}
	}
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			dist[x][y] = -1;
		}
	}
	queue<pair<int, int> > Q;
	dist[0][0] = 0;
	Q.push({0, 0});
	while (Q.size()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue ;
			if (dist[nx][ny] >= 0 || !board[nx][ny])
				continue ;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			Q.push({nx, ny});
		}
	}
	cout << (dist[n - 1][m - 1] + 1) << "\n";
}