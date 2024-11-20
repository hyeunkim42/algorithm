#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int len; cin >> len;
    string st; cin >> st;
    int s=0, t=0;
    for (auto it:st){
        if(it=='s')s++;
        else t++;
    }
    int i=0;
    while (s!=t&&i<len){
        if(st[i]=='s')s--;
        else t--;
        i++;
    }
    st=st.substr(i);
	cout << st << "\n";
}