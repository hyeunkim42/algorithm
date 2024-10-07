#include <bits/stdc++.h>

using namespace std;

int	mq[20000001];
int head, tail;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n, arg;
	string op;
	
	cin >> n;
	while (n--) {
		cin >> op;
		
		if (op == "push") {
			cin >> arg;
			mq[tail] = arg;
			tail++;
		}
		else if (op == "pop") {
			if (head == tail) {
				cout << "-1\n";
			}
			else {
				cout << mq[head] << '\n';
				head++;
			}
		}
		else if (op == "empty") {
			if (head == tail) {
				cout << "1\n";
			}
			else
				cout << "0\n";
		}
		else if (op == "front") {
			if (head == tail) {
				cout << "-1\n";
			}
			else
				cout << mq[head] << '\n';
		}
		else if (op == "back") {
			if (head == tail) {
				cout << "-1\n";
			}
			else
				cout << mq[tail - 1] << '\n';
		}
		else
			cout << tail - head << '\n';
	}
}