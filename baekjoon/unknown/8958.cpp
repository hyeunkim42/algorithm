#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int t;
    string ans;
    cin >> t;
    while (t--){
        cin >> ans;
        int res = 0;
        for (int i =0;i<ans.length();i++){
            int cnt = 0;
            while(ans[i+cnt]=='O'){
                cnt++;
				res+= cnt;
            }
            i += cnt;
        }
        cout << res << '\n';
    }
}