#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	vector<set<string>> words;
	for (int i=0;i<50;i++){
		set<string> tmp;
		words.push_back(tmp);
	}
	string tmp;
	int n; cin >> n;
	while (n--) {
		cin >> tmp;
		words[tmp.length()-1].insert(tmp);
	}
	for (int i=0;i<50;i++){
		set<string>::iterator it=words[i].begin();
		set<string>::iterator ite=words[i].end();

		while(it!=ite){
			cout << *it << '\n';
			it++;
		}
	}
}