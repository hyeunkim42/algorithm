#include <iostream>
using namespace std;

int	cnt[27];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	string s;
	cin >> s;
	auto i = s.begin();
	while (i != s.end())
	{
		cnt[*i - 'a']++;
		i++;
	}
	for (int j = 0 ; j < 26; j++)
		cout << cnt[j] << ' ';
	cout << '\n';
}