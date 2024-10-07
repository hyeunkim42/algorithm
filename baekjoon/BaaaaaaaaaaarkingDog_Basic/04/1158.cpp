#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	list<int> p;
	for (int i = 0; i < n; i++) p.push_back(i + 1);
	list<int>::iterator it = p.begin();
	cout << '<';
	for (int i = 1; i < k; i++) it++;

	// cout << *(p.end()) << '\n';
	// cout << *(++p.end()) << '\n';
	while (p.size()) {
		cout << *it;
		it = p.erase(it);
		it--; // 21, 22를 합하면 it = --p.erase(it);이 됨.
		for (int i = 0; i < k; i++) {
			it++;
			if (it == p.end()) //24, 25를 합하면 if (++it == p.end()) 가 됨
				it = p.begin();
		}
		if (p.size()) cout << "\n";
		else cout << ">\n";
	}
}