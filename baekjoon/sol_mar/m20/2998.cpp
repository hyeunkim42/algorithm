#include <bits/stdc++.h>

using namespace std;
string octet[8]={"000", "001", "010", "011", "100", "101", "110", "111"};

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string binary; cin >> binary;
	while (binary.length()%3){
		string tmp="0" + binary;
		binary = tmp;
	}
	int idx=0;
	while (idx < binary.length()){
		string part=binary.substr(idx, 3);
		for (int i=0;i<8;i++){
			if(part==octet[i]){
				cout << i;
				break;
			}
		}
		idx+=3;
	}
}