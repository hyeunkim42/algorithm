#include <bits/stdc++.h>

using namespace std;

int	vis[301][301];
int t, n;
pair<int, int> start;
pair<int, int> dest;
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

int	bfs(pair<int, int> start) {
	queue<pair<int, int> > Q;

	Q.push(start);
	while (Q.size()) {
		pair<int, int> curr = Q.front(); Q.pop();

		for (int i = 0; i < 8; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];

			if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
				continue;
			}
			if (vis[ny][nx]) {
				continue;
			}
			vis[ny][nx] = vis[curr.second][curr.first] + 1;
			Q.push({nx, ny});
			if (nx == dest.first && ny == dest.second)
				return (vis[ny][nx]);
		}
	}
	return (-1);
}

void	reset() {
	for (int y = 0; y < n; y++) {
		for (int x = 0; x < n; x++) {
			vis[y][x] = false;
		}
	}
}


int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--){
		cin >> n;
		cin >> start.first >> start.second;
		cin >> dest.first >> dest.second;
		if (start == dest)
			cout << "0\n";
		else
			cout << bfs(start) << '\n';
		reset();
	}
}