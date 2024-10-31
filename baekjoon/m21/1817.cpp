#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m; cin >> n >> m;
    int w = 0, cnt =0;
    while (n--) {
        int tmp; cin >> tmp;
        if (tmp + w > m){
            cnt++;
            w = tmp;
        }
		else if (tmp+w == m) {
			cnt++;
			w = 0;
		}
        else
            w+=tmp;
    }
	if (w)
		cnt++;
	cout << cnt << "\n";
}