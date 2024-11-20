#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int j[1001];
    int t, v;
    cin >>t;
    while(t--){
        cin >> v;
        fill(j, j+1001, 0);
        for(int i=0;i<v;i++){
            int s; cin>>s;
            j[s]++;
        }
        int cnt=0, val=0;
        for(int i=1;i<1001;i++){
			// cout << j[i] << ' ' ;
            if(cnt<j[i]){
                cnt=j[i];
                val=i;
            }
        }
		// cout << '\n';
		cout << val << '\n';
    }
}