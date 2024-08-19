#include <bits/stdc++.h>

using namespace std;

int	paper[501][501];
bool visited[501][501];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int area = 0;
int cnt = 0;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	cin >> n >> m;
	int tmp;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			cin >> tmp;
			paper[x][y] = tmp;
		}
	}

	queue<pair<int, int> > Q;

	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			if (paper[x][y] == 1 && !visited[x][y]) {
				visited[x][y] = true;
				Q.push({x, y});
				cnt++;
			}
			int tmpArea = 0;
			while (Q.size()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				tmpArea++;
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (visited[nx][ny] || !paper[nx][ny])
						continue;
					visited[nx][ny] = true;
					Q.push({nx, ny});
				}
			}
			area = max(area, tmpArea);
		}
	}
	cout << cnt << '\n' << area << '\n';
}