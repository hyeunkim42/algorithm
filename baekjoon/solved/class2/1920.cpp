#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll arr[100001];
int n, m;

bool find_t(int t){
	int l=0, r=n-1, mid;
	while(l<=r){
		mid=(l+r)/2;
		if(arr[mid]==t)
			return true;
		else if(t<arr[mid])
			r = mid-1;
		else
			l = mid+1;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i=0;i<n;i++){
		cin >> arr[i];
	}
	sort(arr, arr+n);
	cin >> m;
	int t;
	for (int i=0;i<m;i++){
		cin >> t;
		cout << find_t(t) << '\n';
	}
}