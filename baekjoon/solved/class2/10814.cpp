#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	map<int, vector<string>> p;
	for (int i=0;i<n;i++){
		int age; string name;
		cin >> age >> name;
		if (p.find(age)==p.end()){
			vector<string> names;
			names.push_back(name);
			p.insert({age, names});
		}
		else {
			auto it=p.find(age);
			it->second.push_back(name);
		}
	}
	for (auto it: p){
		for (auto i:it.second){
			cout << it.first << ' ' << i << '\n';
		}
	}
}