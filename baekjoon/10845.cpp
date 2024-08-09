#include <bits/stdc++.h>

using namespace std;

int	mq[10001];
int head, tail;

void	push() {
	int x;
	cin >> x;
	mq[tail] = x;
	tail++;
}

void	pop() {
	if (head == tail) {
		cout << "-1\n";
	}
	else {
		cout << mq[head] << '\n';
		head++;
	}
}

void	empty() {
	if (head == tail) {
		cout << "1\n";
	}
	else
		cout << "0\n";
}

void	front() {
	if (head == tail) {
		cout << "-1\n";
	}
	else 
		cout << mq[head] << '\n';
}

void	back() {
	if (head == tail) {
		cout << "-1\n";
	}
	else
		cout << mq[tail - 1] << '\n';
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int n;
	string op;

	cin >> n;
	while (n) {
		cin >> op;
		if (op == "push") push();
		else if (op == "pop") pop();
		else if (op == "size") {
			cout << tail - head << '\n';
		}
		else if (op == "empty") empty();
		else if (op == "front") front();
		else back();
		n--;
	}
}