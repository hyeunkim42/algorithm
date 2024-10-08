#include <bits/stdc++.h>

using namespace std;


int arr[15][15];

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin >> t;
	while(t--){
		int k, n; cin >> k >> n;
		for (int i=0;i<=k;i++){
			for(int j=0;j<n;j++)
				arr[k][n]=0;
		}
		for (int i=0;i<n;i++){
			arr[0][i]=i+1;
		}
		for (int floor=1;floor<=k;floor++){
			for (int num=0;num<n;num++){
				if(num==0){
					arr[floor][num]=1;
				}
				else {
					arr[floor][num]=arr[floor][num-1]+arr[floor-1][num];
				}
				// cout << floor << ' ' << num << ' ' << arr[floor][num] << '\n';
			}
		}
		// cout << "floor stat\n";
		// for (int i=0;i<=k;i++){
		// 	for(int j=0;j<n;j++)
		// 		cout << arr[i][j] << ' ';
		// 	cout << '\n';
		// }
		cout << arr[k][n-1] << '\n';
	}
}