#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n, m; cin >> n >> m;
    int s = m;
    while (n--){
        int in, out;
        cin >> in >> out;
		m = m + in - out;
		if (s != -1) s = max(s, m);
        if (m < 0)
			s = -1;
    }
	if (s < 0)
		cout << "0\n";
	else
    	cout << s << '\n';
}