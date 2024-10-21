#include <bits/stdc++.h>

using namespace std;

queue<int>	nums;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, k;
	cin >> n >> k;
	for (int i=1;i<=n;i++){
		nums.push(i);
	}
	cout << "<";
	int idx=1;
	while (nums.size()){
		if(idx%k==0){
			cout << nums.front();
			if(nums.size()>1)
				cout << ", ";
			nums.pop();
		}
		else {
			int tmp=nums.front();
			nums.pop();
			nums.push(tmp);
		}
		idx++;
	}
	cout << ">\n";
}