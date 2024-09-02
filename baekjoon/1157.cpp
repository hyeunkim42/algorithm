#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	std::string input;
	cin >> input;
	int cnt[26] = {0, };
	for (int i = 0; i < input.length(); i++) {
		if (input[i] < 91)
			cnt[input[i] - 'A']++;
		else
			cnt[input[i] - 'a']++;
	}
	char target;
	int max_cnt = 0;
	bool flag = false;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] > max_cnt) {
			max_cnt = cnt[i];
			target = 'A' + i;
			flag = false;
		}
		else if (max_cnt != 0 && cnt[i] == max_cnt) {
			flag = true;
		}
	}
	if (flag == true) {
		cout << "?\n";
	}
	else
		cout << target << '\n';
}