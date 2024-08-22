#include <bits/stdc++.h>

using namespace std;

int	tom[101][101][101];
int	vis[101][101][101];
int	day[101][101][101];
int row, col, h;
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> row >> col >> h;
	queue<tuple<int, int, int> > Q;
	for (int z = 0; z < h; z++) {
		for (int y = 0; y < col; y++) {
			for (int x = 0; x < row; x++) {
				cin >> tom[z][y][x];
				if (tom[z][y][x] == 1)
					Q.push({x, y, z});
				if (tom[z][y][x] == 0)
					day[z][y][x] = -1;
			}
		}
	}
	while (Q.size()) {
		tuple<int, int, int> curr = Q.front(); Q.pop();
		int	cur_x, cur_y, cur_z;
		tie(cur_x, cur_y, cur_z) = curr;
		for (int i = 0; i < 6; i++) {
			int nx = cur_x + dx[i];
			int ny = cur_y + dy[i];
			int nz = cur_z + dz[i];

			if (nx < 0 || nx >= row || ny < 0 || ny >= col || nz < 0 || nz >= h)
				continue;
			if (vis[nz][ny][nx] || tom[nz][ny][nx] == -1 || day[nz][ny][nx] >= 0)
				continue;
			day[nz][ny][nx] = day[cur_z][cur_y][cur_x] + 1;
			Q.push({nx, ny, nz});
		}
	}
	// cout << "-----\n";
	// for (int z = 0; z < h; z++) {
	// 	for (int y = 0; y < col; y++) {
	// 		for (int x = 0; x < row; x++) {
	// 			cout << day[z][y][x] << ' ';
	// 		}
	// 		cout << '\n';
	// 	}
	// 	cout << '\n';
	// }
	int ans = 0;
	for (int z = 0; z < h; z++) {
		for (int y = 0; y < col; y++) {
			for (int x = 0; x < row; x++) {
				if (day[z][y][x] == -1) {
					cout << "-1\n";
					return 0;
				}
				ans = max(ans, day[z][y][x]);
			}
		}
	}
	cout << ans << '\n';
}