#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
	int x, y;
	cout << "a and b: " << a << " " << b << "\n";
	while (a % b) {
		x = b; y = a % b;
		a = x; b = y;
		cout << a << ", " << b << "\n";
	}
	return b;
}

int main() {
	int a, b, lim;
	cin >> a >> b;
	lim = min(a, b) + 1;
	gcd(max(a, b), min(a, b));
	for (int i = 1; i < lim; i++) {
		if (a % i == 0 && b % i == 0)
			cout << i << ' ' << a / i << ' ' << b / i << '\n';
	}
}