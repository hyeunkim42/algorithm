// solved.ac 마라톤 코스9 G
#include <iostream>

using namespace std;

int	cnt[1001];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, c, jinju, res = 0;
	string d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d >> c;
		if (d == "jinju") jinju = c;
		cnt[c]++;
	}
	cout << jinju << '\n';
	for (int i = jinju + 1; i < 1001; i++) res += cnt[i];
	cout << res << '\n';
}