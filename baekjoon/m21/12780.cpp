#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
	string h, n;
	cin >> h >> n;
	int found=h.find(n,0);
	int cnt=0;
	while (found!=h.npos){
		cnt++;
		found=h.find(n, found+1);
	}
	cout << cnt;
}