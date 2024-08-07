#include <iostream>
#include <cstdlib>
using namespace std;

int	cnt[10];

int main() {
	int a, b, c;
	cin >> a  >> b >> c;
	int res = a*b*c;
	while (res != 0) {
		cnt[res%10]++;
		res /= 10;
	}
	for (int i = 0; i < 10; i++)
		cout << cnt[i] << '\n';
}