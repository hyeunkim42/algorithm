#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	int a, b, c, d, e;
	while (t--){
		cin >> a>>b>>c>>d>>e;
		double p=a*350.34+b*230.90+c*190.55+d*125.30+e*180.90;
		cout << '$'<<fixed<<setprecision(2) <<p<< "\n";
	}
}