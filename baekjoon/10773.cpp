#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	int	k, curr;
	stack<int> input;
	unsigned int sum = 0;

	cin >> k;
	for (int i = 0; i < k; i++) {
		cin >> curr;
		if (curr == 0) 
			input.pop();
		else
			input.push(curr);
	}
	while (input.size()) {
		sum += input.top();
		input.pop();
	}
	cout << sum << '\n';
}