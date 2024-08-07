#include <iostream>
#include <cstring>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	int n;
	cin >> n;
	int	str[26];
	string s1, s2;
	for (int i = 0; i < n; i++) {
		cin >> s1 >> s2;
		memset(str, 0, sizeof(str));
		if (s1.length() != s2.length()) {
			cout << "Impossible\n";
			continue ;
		}
		for (int i = 0; i < s1.length(); i++) {
			str[s1.at(i) - 'a']++;
		}
		for (int i = 0; i < s2.length(); i++) {
			str[s2.at(i) - 'a']--;
		}
		for (int i = 0; i < 26; i++) {
			if (str[i] != 0) {
				cout << "Impossible\n";
				break ;
			}
			if (i == 25 && str[i] == 0)
				cout << "Possible\n";
		}
	}
}