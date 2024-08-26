// #include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		string buf;
		getline(cin, buf);
		int len = buf.length();
		if (buf[len - 1] != '.')
			cout << buf << ".\n";
		else
			cout << buf << '\n';
	}
}