#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    string str = to_string(n);
    int res = 0;
    for(auto it:str){
        if(it=='7') {
            res+=2;
            break ;
        }
    }
    if(n%7==0)
        res+=1;
    cout << res;
    return 0;
}