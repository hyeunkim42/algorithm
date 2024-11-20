#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n;
	string answer;
	int bonus=0;
	int res=0;
	cin >> n >> answer;
	for (int i = 1; i<=n;i++){
		if (answer[i-1] =='X')
			bonus =0;
		else {
			res+=i +bonus;
			bonus++;
		}
	}
	cout << res <<'\n';
}