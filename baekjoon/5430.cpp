#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string p, arr;
		int n;
		bool reverse = false;
		bool error = false;
		deque<int> dq;
		cin >> p >> n >> arr;
		for (int i = 0; i < arr.length(); i++) {
			int tmp = 0;
			if (isdigit(arr[i])) {
				while (isdigit(arr[i])) {
					tmp = tmp * 10 + arr[i] - '0';
					i++;
				}
				dq.push_back(tmp);
			}
		}
		for (int i = 0; i < p.length(); i++) {
			if (p[i] == 'R')
				reverse = reverse? false : true;
			else {
				if (dq.size() == 0)
					error = true;
				if (reverse == false)
					dq.pop_front();
				else
					dq.pop_back();
			}
		}
		if (error == true)
			cout << "error\n";
		else {
			cout << '[';
			while (dq.size() > 0) {
				if (reverse == true) {
					cout << dq.back();
					dq.pop_back();
				}
				else {
					cout << dq.front();
					dq.pop_front();
				}
				if (dq.size())
					cout << ',';
			}
			cout << "]\n";
		}
	}
}