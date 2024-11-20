#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<string> meme={"Never gonna give you up", "Never gonna let you down", "Never gonna run around and desert you", "Never gonna make you cry", \
					"Never gonna say goodbye", "Never gonna tell a lie and hurt you", "Never gonna stop"};

	int n; cin >> n; cin.ignore();
	//cin>>을 쓰다가 getline 을 쓰려면 남아있는 버퍼를 비워줘야해서 ignore함수를 호출해야함
	string str;
	bool mod =false;
	// cout << cin.eof() << endl;
	while (n){
		getline(cin, str);
		if(find(meme.begin(), meme.end(), str)==meme.end()){
			// cout << "trouble " << str << '\n';
			mod=true;
		}
		n--;
	}
	if (mod)
		cout << "Yes\n";
	else
		cout << "No\n";
}