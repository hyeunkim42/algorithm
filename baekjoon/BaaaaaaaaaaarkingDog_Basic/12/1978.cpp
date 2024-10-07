#include <bits/stdc++.h>

using namespace std;

bool is_prime[1001];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    fill(is_prime, is_prime+1001, true);
	is_prime[1] = false;
    for (int i=1;i<1001;i++){
        if(is_prime[i]){
            for (int j=2;j*i<1001;j++){
                is_prime[i*j]=false;
            }
        }
    }
    int n; cin >> n;
    int cnt = 0;
    for (int i=0;i<n;i++){
        int tmp; cin >> tmp;
        if(is_prime[tmp]) cnt++;
    }
    cout << cnt << '\n';
}