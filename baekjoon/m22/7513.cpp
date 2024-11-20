#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        int m;
        cin >> m;
        vector<string> dict;
        for (int j=0;j<m;j++){
            string w; cin>>w;
            dict.push_back(w);
        }
        cout << "Scenario #" << i << ":\n";
        int n;
        cin >> n;
        for (int j=0;j<n;j++){
            int k; cin >> k;
            while (k--){
                int idx; cin>>idx;
                cout << dict[idx];
            }
            cout << "\n";
        }
        cout << "\n";
    }
}