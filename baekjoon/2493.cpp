#include <bits/stdc++.h>

using namespace std;

stack<pair <int, int> > tower;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, h;
	cin >> n;
	tower.push({100000001, 0});
	for (int i = 1; i <= n; i++) {
		cin >> h;
		while (tower.top().first < h)
			tower.pop();
		cout << tower.top().second << ' ';
		tower.push({h, i});
	}
}
// 탑 n개, 순서대로 높이 (1 <= h <= 100,000,000) <- h는 int 이내
// 앞에 현재보다 낮은 탑의 정보를 가지고 있을 필요가 없음

// max+ 1, 0
// h = 6인 경우 0 출력 push (6, 1)
// h = 9  pop(6,1) 0 출력 push(9,2)
// h = 5 2 출력 push(5,3)
// h = 7 pop(5,3) 2출력 push(7,4)
// h = 4 4 출력
