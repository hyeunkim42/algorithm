#include <iostream>
#include <cstring>
#include <limits>

using namespace std;
typedef long long ll;

bool	is_prime[10000001];
ll llmax = numeric_limits<long long>::max();

int main() {
	ll a, b, tmp_a, tmp_b;
	int	cnt = 0, cnt_a = 0, cnt_b = 0;

	memset(is_prime, true, sizeof(is_prime));
	for (int i = 2; i < 10000001; i++) {
		if (!is_prime[i])
			continue;
		for (int j = i + i; j < 10000001; j += i)
			is_prime[j] = false;
	}
	cin >> a >> b;

			// tmp_a = a; tmp_b = b;
			// while (tmp_a > i) {tmp_a /= i; cnt_a++;}
			// while (tmp_b > i) {tmp_b /= i; cnt_b++;}
			// cnt += (cnt_b - cnt_a);
			// cout << "i: " << i << ", cnt: " << cnt << ", cnt a: " << cnt_a << ", cnt b: " << cnt_b << "\n";

			// tmp = i;
			// while (tmp < a) tmp *= i;
			// if (tmp == i)
			// 	tmp *= i;
			// while (tmp < b) {
			// 	tmp *= i;
			// 	// if (tmp < 0)
			// 	// 	cout << "over\n";
			// 	cnt++;
			// }
			// cout << "i: " << i << ", cnt: " << cnt << ", tmp: " << tmp << "\n";
	cout << cnt << "\n";
	// cout <<( is_prime[3]? "true" : "false" )<< endl;
}