#include <bits/stdc++.h>
using namespace std;

map<string, char> rec;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	for (int i=0;i<8;i++){
		string time;
		char team;
		cin >> time >> team;
		rec.insert({time, team});
	}
	int rs=0, bs=0;
	auto it=rec.begin();
	if (it->second=='R')
		rs+=10;
	else
		bs+=10;
	it++;
	if (it->second=='R')
		rs+=8;
	else
		bs+=8;
	it++;
	int i=3;
	while (it!=rec.end()){
		if (it->second=='R')
			rs+=(9-i);
		else
			bs+=(9-i);
		i++;
		it++;
	}
	if (rs>bs)
		cout << "Red";
	else
		cout << "Blue";
}