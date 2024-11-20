#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, tmp, flag; cin >> n;
	for (int i=n;i>=0;i--){
		tmp=i;
		flag=1;
		while(tmp){
			if(tmp%10!=4&&tmp%10!=7){
				flag=0;
				break;
			}
			else{
				tmp/=10;
			}
		}
		if(flag==1){
			cout << i << '\n';
			break ;
		}
	}
}