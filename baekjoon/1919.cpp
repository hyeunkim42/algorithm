#include <iostream>

using namespace std;

int cnt[26];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	string s1, s2;
	cin >> s1 >> s2;
	for (int i = 0; i < s1.length(); i++)
		cnt[s1.at(i) - 'a']++;
	for (int i = 0; i < s2.length(); i++)
		cnt[s2.at(i) - 'a']--;
	int	res = 0;
	for (int i = 0; i < 26; i++)
		res += (cnt[i] > 0) * cnt[i] + (cnt[i] < 0) * cnt[i] * (-1);
	cout << res << '\n';
}