#include <iostream>
#include <queue>
#include <utility>

using namespace std;
string board[1001];
int	fire[1001][1001];
int	time_d[1001][1001];
int r, c;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> r >> c;
	queue<pair<int, int> > q_fire;
	queue<pair<int, int> > q_time;
	for (int i = 0; i < r; i++) {
		fill(fire[i], fire[i] + c, -1);
		fill(time_d[i], time_d[i] + c, -1);
	}
	for (int x = 0; x < r; x++) {
		cin >> board[x];
	}
	for (int x = 0; x < r; x++) {
		for (int y = 0; y < c; y++) {
			if (board[x][y] == 'F') {
				q_fire.push(make_pair(x, y));
				fire[x][y] = 0;
			}
			if (board[x][y] == 'J') {
				q_time.push(make_pair(x, y));
				time_d[x][y] = 0;
			}
		}
	}
	while (q_fire.size()) {
		pair<int, int> curr = q_fire.front(); q_fire.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];

			if (nx < 0 || ny < 0 || nx >= r || ny >= c)
				continue;
			if (fire[nx][ny] != -1 || board[nx][ny] == '#')
				continue;
			fire[nx][ny] = fire[curr.first][curr.second] + 1;
			q_fire.push(make_pair(nx, ny));
		}
	}

	while (q_time.size()) {
		pair<int, int> curr = q_time.front(); q_time.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];

			if (nx < 0 || ny < 0 || nx >= r || ny >= c) {
				cout << time_d[curr.first][curr.second] + 1;
				return (0);
			}
			if (time_d[nx][ny] > 0 || board[nx][ny] == '#')
				continue ;
			if (fire[nx][ny] != -1 && fire[nx][ny] <= (time_d[curr.first][curr.second] + 1))
				continue ;
			// if (fire[nx][ny] != -1 && fire[nx][ny] <= time_d[curr.first][curr.second] + 1) {
			// 	cout << curr.first << ' ' << curr.second << '\n';
			// 	cout << "fire: " << fire[nx][ny] << '\n';
			// 	cout << "jihoon: " << time_d[curr.first][curr.second] << '\n';
			// 	continue ;
			// }
			time_d[nx][ny] = time_d[curr.first][curr.second] + 1;
			q_time.push(make_pair(nx, ny));
		}
	}
	cout << "IMPOSSIBLE";
}