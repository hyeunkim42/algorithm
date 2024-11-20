#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string a, b, c, d;
	cin >> a >> b >> c>> d;
	string first = a+b;
	string second = c+d;
	long long f=stoll(first);
	long long s=stoll(second);
	cout << f+s;
}