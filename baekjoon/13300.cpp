//same sex, same grade
// k: maximum number

// n: student num, k
// Nline > s, y (s: sex, y: grade)
#include <iostream>
using namespace std;

int	stud[13];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n, k, s, y;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> s >> y;
		stud[s * 6 + y]++;
	}
	int res = 0;
	for (int i = 1; i < 13; i++) {
		cout << i << " : " << stud[i] << ' ';
		cout << stud[i] / k + (stud[i] % k > 0) << '\n';
		res += stud[i] / k + (stud[i] % k > 0);
	}
	cout << res << '\n';
}