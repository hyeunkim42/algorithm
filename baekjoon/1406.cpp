#include <iostream>
#include <list>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string	init;
	cin >> init;
	list<char> str;
	for (auto c: init) str.push_back(c);
	auto cursor = str.end();
	int	n;
	cin >> n;
	char cmd;
	for (int i = 0; i < n; i++)
	{
		cin >> cmd;
		if (cmd == 'L') {
			if (cursor != str.begin()) cursor--;
		}
		else if (cmd == 'D') {
			if (cursor!= str.end()) cursor++;
		}
		else if (cmd == 'P') {
			char add;
			cin >> add;
			str.insert(cursor, add);
		}
		else {
			if (cursor != str.begin()) {
				cursor--;
				cursor = str.erase(cursor);
			}
		}
	}
	for (auto c: str) cout << c;
}