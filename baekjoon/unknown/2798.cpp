#include <bits/stdc++.h>

using namespace std;

int arr[101];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n ; i++){
		cin >> arr[i];
	}
	// cout << "----\n";
	// for (int i = 0; i < n ; i++){
	// 	cout << arr[i] << ' ';
	// }
	// cout << '\n';
	int res = -1;
	for (int i=0;i<n-2;i++){
		// cout << i << '\n';
		for  (int j=i+1;j<n-1;j++) {
			for (int k=j+1;k<n;k++){
				// cout << i << ' ' << j << ' ' << k << ' ';
				int tmp = arr[i] + arr[j] + arr[k];
				if (tmp <= m && m-tmp < m-res)
					res = tmp;
				// cout << tmp << ' ' << res << '\n';
			}
		}
	}
	cout << res << '\n';
}