#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int arr[21];
	for (int i = 1; i < 21; i++) {
		arr[i] = i;
	}
	int a, b, tmp;
	for (int i = 0; i < 10; i++) {
		cin >> a >> b;
		while (a < b) {
			tmp = arr[b];
			arr[b] = arr[a];
			arr[a] = tmp;
			a++;
			b--;
		}
	}
	for (int i = 1; i < 21; i++) {
		cout << arr[i] << ' ';
	}
}