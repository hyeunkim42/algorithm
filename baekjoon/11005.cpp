#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, b; cin >> n >> b;
    string res ="";
    while (n) {
        char c;
		// cout << n << '\n';
		int tmp;
        if (n % b > 9){
            c = n % b - 10 +'A';
        }
        else
            c = n % b + '0';
        res = c + res;
        n/=b;
    }
    cout << res << '\n';
}