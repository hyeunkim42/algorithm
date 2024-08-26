// #include <bits/stdc++.h>
#include <iostream>
#include <queue>

using namespace std;

int t, w, h;
char board[1001][1001];
int	time_f[1001][1001];
int	time_s[1001][1001];
int	dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
queue<pair<int, int> > fire;
queue<pair<int, int> > sanghoon;

void	reset() {
	for (int x = 0; x < w; x++) {
		for (int y = 0; y < h; y++) {
			time_f[y][x] = -1;
			time_s[y][x] = -1;
			board[y][x] = 0;
		}
	}
	while (fire.size())
		fire.pop();
	while (sanghoon.size())
		sanghoon.pop();
}

void	bfs_sanghoon() {
	while (sanghoon.size()) {
		pair<int, int> curr = sanghoon.front(); sanghoon.pop();
		for (int i = 0; i < 4; i++) {
			int nx = curr.first + dx[i];
			int ny = curr.second + dy[i];

			if (nx < 0 || ny < 0 || nx >= w || ny >= h) {
				// cout << "curr " << curr.first << ' ' << curr.second << " curr time " << time_s[curr.second][curr.first] << '\n';
				// cout << "next " << nx << ' ' << ny << " next time " << time_s[curr.second][curr.first] + 1<< '\n';
				cout << time_s[curr.second][curr.first] + 1 << '\n';
				return ;
			}
			if (time_s[ny][nx] != -1 || board[ny][nx] == '#')
				continue ;
			if (time_f[ny][nx] != -1 && time_f[ny][nx] <= time_s[curr.second][curr.first] + 1)
				continue ;
			sanghoon.push(make_pair(nx, ny));
			time_s[ny][nx] = time_s[curr.second][curr.first] + 1;
		}
	}
	cout << "IMPOSSIBLE\n";
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> t;

	while (t--) {
		cin >> w >> h;
		reset();
		for (int y = 0; y < h; y++) {
			for (int x = 0; x < w; x++) {
				cin >> board[y][x];
				if (board[y][x] == '*') {
					fire.push(make_pair(x, y));
					time_f[y][x] = 0;
				}
				else if (board[y][x] == '@') {
					sanghoon.push(make_pair(x, y));
					time_s[y][x] = 0;
				}
			}
		}
		while (fire.size()) {
			pair<int, int> curr = fire.front(); fire.pop();
			for (int i = 0; i < 4; i++) {
				int nx = curr.first + dx[i];
				int ny = curr.second + dy[i];

				if (nx < 0 || ny < 0 || nx >= w || ny >= h)
					continue ;
				if (time_f[ny][nx] != -1 || board[ny][nx] == '#')
					continue ;
				fire.push(make_pair(nx, ny));
				time_f[ny][nx] = time_f[curr.second][curr.first] + 1;
			}
		}
		bfs_sanghoon();
	}
}