#include <bits/stdc++.h>

using namespace std;

int	tomato[1002][1002];
int	dist[1002][1002];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> m >> n;
	queue<pair<int, int> > Q;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			cin >> tomato[x][y];
			if (tomato[x][y] == 0)
				dist[x][y] = -1;
			if (tomato[x][y] == 1)
				Q.push({x, y});
		}
	}

	while (Q.size()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue ;
			if (dist[nx][ny] >= 0)
				continue ;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			Q.push({nx, ny});
		}
	}

	int ans = 0;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			if (dist[x][y] == -1) {
				cout << -1;
				return 0;
			}
			ans = max(ans, dist[x][y]);
		}
	}
	cout << ans;
}