#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string buf;
	bool balance = true;
	stack<char> ps;
	while (1) {
		getline(cin, buf);
		if (buf.length() == 1 && buf[0] == '.') {
			break ;
		}
		for (int i = 0; i < buf.length(); i++) {
			if (buf[i] == '(')
				ps.push('(');
			else if (buf[i] == '[')
				ps.push('[');
			else if (buf[i] == ')'){
				if (ps.empty() || ps.top() != '(')
					balance = false;
				else
					ps.pop();
			}
			else if (buf[i] == ']') {
				if (ps.empty() || ps.top() != '[')
					balance = false;
				else
					ps.pop();
			}
		}
		if (balance == false || ps.size())
			cout << "no\n" ;
		else
			cout << "yes\n";
		balance = true;
		cin.clear();
		while (ps.size()) ps.pop();
	}
}