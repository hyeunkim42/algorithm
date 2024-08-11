#include <bits/stdc++.h>

using namespace std;

vector<int> h;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int tmp, sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> tmp;
		h.push_back(tmp);
		sum += tmp;
	}
	sort(h.begin(), h.end());
	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 9; j++) {
			if ((sum - h[i] - h[j]) == 100) {
				for (int x = 0; x < 9; x++) {
					if (x != i && x != j) cout << h[x] << '\n';
				}
				return 0;
			}
		}
	}
}