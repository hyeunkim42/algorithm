// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <utility>

using namespace std;

#define X first
#define Y second

// 남쪽 기준으로 반시계 방향 회전 (남 동 북 서)
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;
int board1[10][10];
int board2[10][10];
vector<pair<int, int> > cam;

// 범위 확인 함수
bool OOB(int a, int b) {
	return a < 0 || a >= n || b < 0 || b >= m;
}

// x, y부터 벽이나 경계까지 진행하면서 만나는 빈칸을 7로 변경
void upd(int x, int y, int dir) {
	dir %= 4;
	while (1) {
		x += dx[dir];
		y += dy[dir];
		if (OOB(x, y) || board2[x][y] == 6)
			return ;
		// cctv를 만난 경우인데, 벽이 아니라서 continue
		if (board2[x][y] != 0)
			continue;
		// cctv에 걸리는 영역
		board2[x][y] = 7;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	int mn = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board1[i][j];
			if (board1[i][j] != 0 && board1[i][j] != 6)
				cam.push_back(make_pair(i, j));
			// 만나는 빈칸의 개수로 초기화
			if (board1[i][j] == 0)
				mn++;
		}
	}
	// cctv 방향 정하기
		// 4^k 를 계산하는 방법(pow 함수는 유효숫자 범위 내의 값을 벗어나면 오차가 날 수 있따!!!)
		// 4^k = 2 ^ 2k라서 가능한 방법
		// 그게 아니라면 정직하게 반복문으로 해결하라
	for (int tmp = 0; tmp < (1 << (2*cam.size())); tmp++) {
		// 1회성 판을 만들어준다.
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++)
				board2[i][j] = board1[i][j];
		}
		// 4진수 자릿수를 계산한다.
		int brute = tmp;
		for (int i = 0; i < cam.size(); i++) {
			int dir = brute % 4;
			brute /= 4;
			// 해당 자릿수의 카메라 종류를 보고 연산한다.
			// upd 존나 깔롱지네 미친
			int x = cam[i].X;
			int y = cam[i].Y;
			if (board1[x][y] == 1){
				upd(x, y, dir);
			}
			else if (board1[x][y] == 2) {
				upd(x, y, dir);
				upd(x, y, dir + 2);
			}
			else if (board1[x][y] == 3) {
				upd(x, y, dir);
				upd(x, y, dir + 1);
			}
			else if (board1[x][y] == 4) {
				upd(x, y, dir);
				upd(x, y, dir + 1);
				upd(x, y, dir + 2);
			}
			else {
				upd(x, y, dir);
				upd(x, y, dir + 1);
				upd(x, y, dir + 2);
				upd(x, y, dir + 3);
			}
		}
		int val = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				val += (board2[i][j] == 0);
			}
		}
		mn = min(mn, val);
	}
	cout << mn;
}