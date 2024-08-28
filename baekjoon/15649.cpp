#include <bits/stdc++.h>

using namespace std;

int n, m;
int arr[10];
bool isused[10];

// k개까지 수를 택한 상황에서 arr[k]를 정하는 함수
void	track(int k) {
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return ;
	}
	for (int i = 1; i <= n; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = true; // 현재 인덱스를 사용
			track(k + 1); // k + 1개를 선택했음
			isused[i] = false; // 현재 인덱스를 사용 해제
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	track(0); // 0개를 선택했음.
}