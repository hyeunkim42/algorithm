#include <bits/stdc++.h>
using namespace std;

int get_digit(int n) {
    int digit = 0;
    if (n == 0) digit = 1;
    else {
        while (n) {
            digit++;
            n/=10;
        }
    }
    return digit;
}
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m;
    cin >> n >> m;
    int digit = get_digit(n);
	if (digit * n < m) {
		for (int i=0;i<n;i++){
			cout << n;
		}
		return 0;
	}
	int time = m/digit;
	while (time) {
		time--;
		cout << n;
	}
	if (m%digit) {
		int time = m%digit;
		string str=to_string(n);
		for (int i=0;i<time;i++){
			cout << str[i];
		}
	}
}