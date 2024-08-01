#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
typedef long long ll;
typedef __int128_t bigint;

bool	is_prime[10000001];

int main() {
	ll a, b;
	bigint tmp;
	int	cnt = 0, cnt_a = 0, cnt_b = 0;

	memset(is_prime, true, sizeof(is_prime));
	cin >> a >> b;
	for (int i = 2; i < 10000001; i++) {
		if (!is_prime[i])
			continue;
		for (int j = i + i; j < 10000001; j += i)
			is_prime[j] = false;
		tmp = i;
		while (tmp < a) tmp *= i;
		if (tmp == i)
			tmp *= i;
		while (tmp <= b) {
			tmp *= i;
			// if (tmp < 0)
			// 	cout << "over\n";
		cnt++;
		}
	}

	// bigint limit = sqrt(b) + 1;
	// for (int i = 2; i < limit; i++)
	// {
	// 	if (is_prime[i])
	// 	{
	// 		tmp_a = a - 1; tmp_b = b; cnt_a = 0; cnt_b = 0;
	// 		while (tmp_a > i) {
	// 			tmp_a /= i;
	// 			cnt_a++;
	// 		}
	// 		while (tmp_b > i) {
	// 			tmp_b /= i;
	// 			cnt_b++;
	// 		}
	// 		cout << "i " << i << " cnt a " << cnt_a << " cnt b " << cnt_b;
	// 		cnt += (cnt_b - cnt_a);
	// 		// if (a < i)
	// 		// 	cnt--;
	// 		cout << " cnt " << cnt_b - cnt_a << "\n";
	// 	}
			// tmp_a = a; tmp_b = b;
			// while (tmp_a > i) {tmp_a /= i; cnt_a++;}
			// while (tmp_b > i) {tmp_b /= i; cnt_b++;}
			// cnt += (cnt_b - cnt_a);
			// cout << "i: " << i << ", cnt: " << cnt << ", cnt a: " << cnt_a << ", cnt b: " << cnt_b << "\n";

			// }
			// cout << "i: " << i << ", cnt: " << cnt << ", tmp: " << tmp << "\n";
	cout << cnt << "\n";
	// cout <<( is_prime[3]? "true" : "false" )<< endl;
}