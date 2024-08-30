#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> choose;
vector<vector <int> > res;

void	makePerm(vector<int>& combi) {
	do {
		res.push_back(combi);
	} while (next_permutation(combi.begin(), combi.end()));
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		if (i < m)
			choose.push_back(1);
		else
			choose.push_back(0);
	}
	// for (int i = 0; i < n; i++) {
	// 	cout << choose[i] << ' ';
	// }
	// cout << '\n';
	do {
		vector<int> combi;
		for (int i = 0; i < n; i++) {
			if (choose[i] == 1)
				combi.push_back(i + 1);
		}
		// cout << "combi: ";
		// for (int i = 0 ; i < m; i++) {
		// 	cout << combi[i] << ' ';
		// }
		// cout << '\n';
		makePerm(combi);
	} while (prev_permutation(choose.begin(), choose.end()));
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << ' ';
		}
		cout << '\n';
	}
}