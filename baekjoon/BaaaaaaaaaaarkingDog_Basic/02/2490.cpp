#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int tmp, cnt;
	for (int x = 0; x < 3; x++) {	
		cnt = 0;
		for (int i = 0; i < 4; i++) {
			cin >> tmp;
			cnt += tmp;
		}
		if (cnt == 0) cout << "D\n";
		else if (cnt == 1) cout << "C\n";
		else if (cnt == 2) cout << "B\n";
		else if (cnt == 3) cout << "A\n";
		else if (cnt == 4) cout << "E\n";
	}
}