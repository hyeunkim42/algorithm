//solved.ac 마라톤 코스 9 F
#include <iostream>
#include <map>

using namespace std;

map<char, bool> res;
string	mobis = "MOBIS";

int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);

	string	in;
	cin >> in;
	for (int i = 0; i < in.length(); i++)
	{
		if (in[i] == 'M' || in[i] == 'O' || in[i] == 'B' || in[i] == 'I' || in[i] == 'S')
		{
			res.insert(make_pair(in[i], true));
		}
	}
	if (res.size() == 5)
		cout << "YES";
	else
		cout << "NO";
}