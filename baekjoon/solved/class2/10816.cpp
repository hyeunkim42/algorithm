#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	map<int, int> card;
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int c;
		cin >> c;
		if(card.find(c)==card.end()){
			card.insert({c, 1});
		}
		else{
			auto it=card.find(c);
			it->second++;
		}
	}
	int m;
	cin >> m;
	for (int i=0;i<m;i++){
		int c;
		cin >> c;
		cout << card.find(c)->second<< ' ' ;
	}
}