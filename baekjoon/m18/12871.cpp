#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string s, t;
	cin>> s>> t;
	int s_len=s.length(),t_len=t.length();
	int big=max(s_len, t_len);
	int small=min(s_len, t_len);
	while(big%small){
		int tmp=big%small;
		big=small;
		small=tmp;
	}
	big=s_len*t_len/small;
	string ss=s;
	big-=s_len;
	while(big){
		ss+=s;
		big-=s_len;
	}
	big=s_len*t_len/small;
	string tt=t;
	big-=t_len;
	while(big){
		tt+=t;
		big-=t_len;
	}
	if(tt==ss)
		cout << '1';
	else
		cout << '0';
}