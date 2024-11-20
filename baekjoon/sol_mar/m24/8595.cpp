#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int len;
	string word;
	cin >> len >> word;
	int i=0;
	long long sum=0;
	while(i<len){
		if(isdigit(word[i])){
			int start=i;
			int tmp=0;
			while(isdigit(word[i])&&i-start<6){
				tmp=tmp*10+word[i]-'0';
				i++;
			}
			sum+=tmp;
		}
		else
			i++;
	}
	cout << sum << '\n';
}