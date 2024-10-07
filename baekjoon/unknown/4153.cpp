#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int a, b, c;
	while (1) {
		cin >> a >> b >> c;
		if (!a && !b && !c)
			break ;
		if (a*a + b*b == c*c || b*b + c*c == a*a || c*c + a*a == b*b)
			cout << "right\n";
		else
			cout << "wrong\n";
	}
}