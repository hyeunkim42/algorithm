#include <iostream>
#include <queue>
#include <utility>

using namespace std;
int	map[1001][1001];
int	fire[1001][1001];
int	time_d[1001][1001];
int r, c;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> c >> r;
	queue<pair<int, int> > q_fire;
	queue<pair<int, int> > q_time;
	for (int x = 0; x < r; x++) {
		string frag_map;
		cin >> frag_map;
		for (int y = 0; y < c; y++) {
			map[x][y] = frag_map[y];
			if (map[x][y] == 'F')
				q_fire.push(make_pair(x, y));
			if (map[x][y] == 'J')
				q_time.push(make_pair(x, y));
		}
	}
	while (q_fire.size()) {
		pair<int, int> curr = q_fire.front(); q_fire.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = curr.first + dx[dir];
			int ny = curr.second + dy[dir];

			if (nx < 0 || ny < 0 || nx >= r || ny >= c)
				continue;
			if (fire[nx][ny] > 0 || map[nx][ny] == '#')
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
			if (time_d[nx][ny] > 0 || map[nx][ny] == '#')
				continue ;
			if (fire[nx][ny] > 0 && fire[nx][ny] <= time_d[curr.first][curr.second] + 1)
				continue ;
			time_d[nx][ny] = time_d[curr.first][curr.second] + 1;
			q_time.push(make_pair(nx, ny));
		}
	}
	cout << "IMPOSSIBLE";
}