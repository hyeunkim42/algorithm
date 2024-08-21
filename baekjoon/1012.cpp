#include <iostream>
#include <queue>

using namespace std;

int		map[51][51];
bool	vis[51][51];
int t, m, n, k;
int	dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int cnt;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> m >> n >> k;
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		// for (int y = 0; y < n; y++) {
		// 	for (int x = 0; x < m; x++) {
		// 		cout << map[y][x] << ' ';
		// 	}
		// 	cout << '\n';
		// }
		queue<pair <int, int> > Q;
		cnt = 0;
		for (int y = 0; y < n; y++) {
			for (int x = 0; x < m; x++) {
				if (map[y][x] && vis[y][x] == false) {
					vis[y][x] = true;
					cnt++;
					Q.push(make_pair(x, y));
				}
				while (Q.size()) {
					pair<int, int> curr = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = curr.first + dx[dir];
						int ny = curr.second + dy[dir];

						if (nx < 0 || nx >= m || ny < 0 || ny >= n)
							continue;
						if (vis[ny][nx] == true || !map[ny][nx])
							continue;
						vis[ny][nx] = true;
						Q.push(make_pair(nx, ny));
					}
				}
			}
		}
		cout << cnt << '\n';
		for (int j = 0; j < n; j++) {
			fill(map[j], map[j] + m, 0);
			fill(vis[j], vis[j] + m, false);
		}
	}
}