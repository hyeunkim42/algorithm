#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n;
	string in;
	list<char> pass;
	list<char>::iterator cursor;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		cursor = pass.begin();
		for (auto i: in) {
			if (i == '<') {
				if (cursor != pass.begin()) cursor--;
			}
			else if (i == '>') {
				if (cursor != pass.end()) cursor++;
			}
			else if (i == '-') {
				if (cursor != pass.begin()) {
					cursor--;
					cursor = pass.erase(cursor);
				}
			}
			else {
				pass.insert(cursor, i);
			}
		}
		while (pass.size() != 0) {
			cout << pass.front();
			pass.pop_front();
		}
		cout << '\n';
	}
}