#include <bits/stdc++.h>

using namespace std;

int f(int n) {
	int res = 0;
	while (n) {
		int dig=n%10;
		res += (dig*dig);
		n/=10;
	}
	return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	while(true){
		if(n==1){
			cout << "HAPPY";
			break ;
		}
		else if (n==4||n==16||n==37||n==58||n==89||n==145||n==42||n==20){
			cout << "UNHAPPY";
			break ;
		}
		n=f(n);
	}
}