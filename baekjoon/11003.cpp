#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n; cin >> n;
	int l; cin >> l;
	deque<pair<int, int> >  a;

	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		if (a.empty() == false) {
			if (a.front().second < i - l + 1)
				a.pop_front();
		}
		while (a.empty() == false && a.back().first > tmp)
			a.pop_back();
		a.push_back(make_pair(tmp, i));
		cout << a.front().first << ' ';
	}
}