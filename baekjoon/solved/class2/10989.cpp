#include <bits/stdc++.h>

using namespace std;

int arr[10001];

int main() {
    int n, tmp; cin >> n;
    while (n) {
        cin >> tmp;
        arr[tmp]++;
        n--;
    }
	// cout << "input done\n";
    for (int i=1;i<10001;i++){
        while(arr[i]){
            cout << i << '\n';
            arr[i]--;
        }
    }
}