#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	vector<int> val;
	int tmp, sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		val.push_back(tmp);
		sum += tmp;
	}
	sort(val.begin(), val.end());
	cout << sum / 5 << '\n';
	cout << val[2] << '\n';
}