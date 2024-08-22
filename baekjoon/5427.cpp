#include <bits/stdc++.h>

using namespace std;

char	board[1001][1001];
string	mymap[1001];
int		dist_f[1001][1001];
int		dist_s[1001][1001];
int		t, w, h;
int		dx[4] = {1, 0, -1, 0};
int		dy[4] = {0, 1, 0, -1};
int		s_x, s_y;
queue<pair<int, int> > Qfire;

void	fire() {
	while (Qfire.size()) {
		pair<int, int> curr = Qfire.front(); Qfire.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];

			if (nx < 0 || ny < 0 || nx >= w || ny >= h)
				continue ;
			if (dist_f[ny][nx] != 0)
				continue ;
			Qfire.push({nx, ny});
			dist_f[ny][nx] = dist_f[curr.second][curr.first] + 1;
		}
	}
}

void	sanghoon(int x, int y) {
	queue<pair<int, int> > Q;

	cout << "map " << w << ' ' << h << ' ';
	cout << "start " << x << ' ' << y << ' ';
	Q.push({x, y});
	while (Q.size()) {
		pair<int, int> curr = Q.front(); Q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];

			if (dist_s[ny][nx] != 0)
				continue ;
			if (nx < 0 || ny < 0 || nx >= w || ny >= h) {
				cout << (dist_s[curr.second][curr.first] + 1) << '\n';
				return ;
			}
			cout << "curr " << curr.first << ' ' << curr.second << ' ';
			cout << "next " << nx << ' ' << ny << ' ';
			dist_s[ny][nx] = dist_s[curr.second][curr.first] + 1;
			cout << dist_s[ny][nx] << '\n';
			if (dist_f[ny][nx] <= dist_s[ny][nx]) {
				cout << "IMPOSSIBLE\n";
				return ;
			}
			Q.push({nx, ny});
		}
	}
	cout << "IMPOSSIBLE\n";
	return ;
}

void	reset() {
	for (int y = 0; y < h; y++) {
		for (int x = 0; x < w; x++) {
			dist_f[y][x] = -1;
			dist_s[y][x] = -1;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t;
	while (t--){
		cin >> w >> h;
		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				cout << dist_f[y][x] << ' ';
			}
			cout << '\n';
		}
		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				cin >> board[y][x];
				if (board[y][x] == '#') {
					dist_f[y][x] = -1;
					dist_s[y][x] = -1;
				}
				if (board[y][x] == '*') {
					Qfire.push({x, y});
				}
				if (board[y][x] == '@') {
					s_x = x;
					s_y = y;
				}
			}
		}
		fire();
		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				cout << dist_f[y][x] << ' ';
			}
			cout << '\n';
		}
		sanghoon(s_x, s_y);
		reset();
	}
}