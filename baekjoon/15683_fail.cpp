// #include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <utility>
// +x, +y, -x, -y 각 방향에 대해서 연산하는 함수 만든 뒤 cam에서는 조합만 하자

using namespace std;
int n, m;
int office[8][8];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int surv[8][8];
queue< pair<int, int> > cam;

int cam_xpos(pair<int, int> curr, int flag) {
	int area = 0;
	// cout << "curr: " << curr.first << ' ' << curr.second << ' ';
	while (true) {
		curr.first++;
		if (curr.first >= n || office[curr.first][curr.second] == 6) {
			// cout << "breaking loop xpos\n";
			break ;
		}
		// cout << "->" << curr.first << ' ' << curr.second << ' ';
		if (surv[curr.first][curr.second] == false)
			area++;
		if (flag == true) {
			surv[curr.first][curr.second] = true;
		}
	}
	// cout << '\n';
	return area;
}

int cam_xneg(pair<int, int> curr, int flag) {
	int area = 0;
	// cout << "curr: " << curr.first << ' ' << curr.second << ' ';
	while (1) {
		curr.first--;
		if (curr.first < 0 || office[curr.first][curr.second] == 6) {
			// cout << "breaking loop xneg\n";
			break ;
		}
		// cout << "->" << curr.first << ' ' << curr.second << ' ';
		if (!surv[curr.first][curr.second])
			area++;
		if (flag == true)
			surv[curr.first][curr.second] = true;
	}
	// cout << '\n';
	return area;
}

int cam_ypos(pair<int, int> curr, int flag) {
	int area = 0;
	// cout << "curr: " << curr.first << ' ' << curr.second << ' ';
	while (1) {
		curr.second++;
		if (curr.second >= m || office[curr.first][curr.second] == 6) {
			// cout << "breaking loop ypos\n";
			break ;
		}
		// cout << "->" << curr.first << ' ' << curr.second << ' ';
		if (!surv[curr.first][curr.second])
			area++;
		if (flag == true)
			surv[curr.first][curr.second] = true;	}
	// cout << '\n';
	return area;
}

int cam_yneg(pair<int, int> curr, int flag) {
	int area = 0;
	// cout << "curr: " << curr.first << ' ' << curr.second << ' ';
	while (1) {
		curr.second--;
		if (curr.second < 0 || office[curr.first][curr.second] == 6) {
			// cout << "breaking loop yneg\n";
			break ;
		}
		if (!surv[curr.first][curr.second])
			area++;
		if (flag == true)
			surv[curr.first][curr.second] = true;
		}
	// cout << '\n';
	return area;
}

int cam1(pair<int, int> curr) {
	int xpos = cam_xpos(curr, false);
	int ypos = cam_ypos(curr, false);
	int xneg = cam_xneg(curr, false);
	int yneg = cam_yneg(curr, false);
	int answer = max(xpos, ypos);
	answer = max(answer, xneg);
	answer = max(answer, yneg);
	if (answer == xpos)
		cam_xpos(curr, true);
	else if (answer == ypos)
		cam_ypos(curr, true);
	else if (answer == xneg)
		cam_xneg(curr, true);
	else
		cam_yneg(curr, true);
	return answer;
}

int cam2(pair<int, int> curr) {
	int x = cam_xpos(curr, false) + cam_xneg(curr, false);
	int y = cam_ypos(curr, false) + cam_yneg(curr, false);
	if (x > y) {
		cam_xpos(curr, true);
		cam_xneg(curr, true);
	}
	else {
		cam_ypos(curr, true);
		cam_yneg(curr, true);
	}
	return max(x, y);
}

int cam3(pair<int, int> curr) {
	int arr[4] = {cam_xpos(curr, false), cam_ypos(curr, false), cam_xneg(curr, false), cam_yneg(curr, false)};
	int top = arr[0] + arr[1];
	int right = arr[1] + arr[2];
	int bottom = arr[2] + arr[3];
	int left = arr[3] + arr[0];
	int answer = max(top, right);
	answer = max(answer, bottom);
	answer = max(answer, left);
	if (answer == top) {
		cam_xpos(curr, true);
		cam_ypos(curr, true);
	}
	else if (answer == right) {
		cam_ypos(curr, true);
		cam_xneg(curr, true);
	}
	else if (answer == bottom) {
		cam_xneg(curr, true);
		cam_yneg(curr, true);
	}
	else {
		cam_yneg(curr, true);
		cam_xpos(curr, true);
	}
	return answer;
}

int cam4(pair<int, int> curr) {
	int arr[4] = {cam_xpos(curr, false), cam_ypos(curr, false), cam_xneg(curr, false), cam_yneg(curr, false)};
	int top = arr[0] + arr[1] + arr[2];
	int right = arr[1] + arr[2] + arr[3];
	int bottom = arr[2] + arr[3] + arr[0];
	int left = arr[3] + arr[0] + arr[1];
	int answer = max(top, right);
	answer = max(answer, bottom);
	answer = max(answer, left);
	if (answer == top) {
		cam_xpos(curr, true);
		cam_ypos(curr, true);
		cam_xneg(curr, true);
	}
	else if (answer == right) {
		cam_ypos(curr, true);
		cam_xneg(curr, true);
		cam_yneg(curr, true);
	}
	else if (answer == bottom) {
		cam_xneg(curr, true);
		cam_yneg(curr, true);
		cam_xpos(curr, true);
	}
	else {
		cam_yneg(curr, true);
		cam_xpos(curr, true);
		cam_ypos(curr, true);
	}
	return answer;
}

int cam5(pair<int, int> curr) {
	return cam_xpos(curr, true) + cam_ypos(curr, true) + cam_xneg(curr, true) + cam_yneg(curr, true);
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	int area = m * n;
	for (int x = 0; x < n; x++) {
		for (int y = 0; y < m; y++) {
			cin >> office[x][y];
			if (office[x][y] != 0) {
				area--;
				if (office[x][y] != 6) {
					cam.push(make_pair(x, y));
				}
			}
		}
	}
	while (cam.size()) {
		pair<int, int> curr = cam.front();
		cam.pop();
		// cout << "curr: " << curr.first << ' ' << curr.second << ' ' << "(" << office[curr.first][curr.second] << ")\n";
		// cout << cam_xneg(curr, false) << ' ' << cam_yneg(curr, false) << ' ' << cam_xpos(curr, false) << ' ' << cam_ypos(curr, false) << '\n';
		if (office[curr.first][curr.second] == 1)
			area -= cam1(curr);
		else if (office[curr.first][curr.second] == 2)
			area -= cam2(curr);
		else if (office[curr.first][curr.second] == 3)
			area -= cam3(curr);
		else if (office[curr.first][curr.second] == 4)
			area -= cam4(curr);
		else
			area -= cam5(curr);
	}
	cout << area << '\n';
}