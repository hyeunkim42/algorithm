#include <bits/stdc++.h>

using namespace std;

int D[20001];
int h = 10000, t = 10000;

// front : 0, back : 1

void	push(int f) {
	int arg; cin >> arg;
	if (f == 0)
		D[--h] = arg;
	else
		D[t++] = arg;
}

void	pop(int f) {
	if (h == t) {
		cout << "-1\n";
	}
	else {
		if (f == 0) {
			cout << D[h] << '\n';
			h++;
		}
		else {
			cout << D[t - 1] << '\n';
			t--;
		}
	}
}

void	print(int f) {
	if (h == t) {
		cout << "-1\n";
	}
	else {
		if (f == 0)
			cout << D[h] << '\n';
		else
			cout << D[t - 1] << '\n';
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int n;
	string op;

	cin >> n;
	while (n--) {
		cin >> op;
		if (op == "push_front") push(0);
		else if (op == "push_back") push(1);
		else if (op == "size") cout << t - h << '\n';
		else if (op == "empty") {
			if (h == t) cout << "1\n";
			else cout << "0\n";
		}
		else if (op == "pop_front") pop(0);
		else if (op == "pop_back") pop(1);
		else if (op == "front") print(0);
		else print(1);
	}
}
