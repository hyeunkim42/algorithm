#include <iostream>
using namespace std;

int main() {
	int rn;
	cin >> rn;
	int cnt[10] = {0, };
	while (rn > 0) {
		cnt[rn % 10]++;
		rn /= 10;
	}
	int six = cnt[6] + cnt[9];
	if (six % 2)
		six++;
	cnt[6] = six / 2;
	int res = 0;
	for (int i = 0; i < 9; i++) {
		res = max(res, cnt[i]);
	}
	cout << res << '\n';
}