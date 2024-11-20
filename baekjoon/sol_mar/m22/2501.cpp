#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n, k; cin >> n >> k;
    vector<int> ks;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ks.push_back(i);
			if (n / i != i)
				ks.push_back(n/i);
		}
    }
    sort(ks.begin(), ks.end());
    if (ks.size() < k)
        cout << "0\n";
    else
        cout << ks[k-1] << "\n";
}