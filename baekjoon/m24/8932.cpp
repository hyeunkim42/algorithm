#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	double a[]={9.23076, 1.84523, 56.0211, 4.99087, 0.188807, 15.9803, 0.11193};
	double b[]={26.7, 75, 1.5, 42.5, 210, 3.8, 254};
	double c[]={1.835, 1.348, 1.05, 1.81, 1.41, 1.04, 1.88};

	int t;cin>>t;
	while(t--){
		int sum = 0;
		for (int i=0;i<7;i++){
			int score; cin >> score;
			switch(i){
				case 0: case 3: case 6:
					sum+=a[i]*pow(b[i]-score, c[i]);
					break;
				default:
					sum+=a[i]*pow(score-b[i], c[i]);
			}
		}
		cout << sum << '\n';
	}
}