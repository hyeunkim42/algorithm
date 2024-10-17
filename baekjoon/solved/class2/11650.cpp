#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	vector<pair<int, int> > coord;
	for (int i=0;i<n;i++){
		int x, y; cin >> x>> y;
		coord.push_back({x, y});
	}
	sort(coord.begin(), coord.end());
	for (int i=0;i<n;i++){
		cout << coord[i].first << ' ' << coord[i].second << '\n';
	}
}