#include <bits/stdc++.h>

using namespace std;

int n, ans;
int board[22][22];

void to_left() {
	for (int i=0;i<n;i++){
		int tmp[20]={0,};
		int new_idx=0;
		int prev=0;
		for (int j=0;j<n;j++){
			int curr=board[i][j];
			if(prev&&prev!=curr){
				tmp[new_idx]=prev;
				new_idx++;
				prev=curr;
			}
			else if(prev&&prev==curr){
				prev*=2;
				tmp[new_idx]=prev;
				new_idx++;
				prev=0;
			}
			else if (!prev&&curr){
				prev=curr;
			}
		}
		tmp[new_idx]=prev;
		for(int j=0;j<n;j++){
			board[i][j]=tmp[j];
		}
	}
}

void to_right() {
	for (int i=0;i<n;i++){
		int tmp[20]={0,};
		int new_idx=n-1;
		int prev=0;
		for (int j=n-1;j>=0;j--){
			int curr=board[i][j];
			if(prev&&prev!=curr){
				tmp[new_idx]=prev;
				new_idx--;
				prev=curr;
			}
			else if(prev&&prev==curr){
				prev*=2;
				tmp[new_idx]=prev;
				new_idx--;
				prev=0;
			}
			else if(!prev&&curr){
				prev=curr;
			}
		}
		tmp[new_idx]=prev;
		for(int j=n-1;j>=0;j--)
			board[i][j]=tmp[j];
	}
}

void to_down() {
	for (int i=0;i<n;i++){
		int tmp[20]={0,};
		int new_idx=0;
		int prev=0;
		for(int j=0;j<n;j++){
			int curr=board[j][i];
			if(prev&&prev!=curr){
				tmp[new_idx]=prev;
				new_idx++;
				prev=curr;
			}
			else if(prev&&prev==curr){
				prev*=2;
				tmp[new_idx]=prev;
				new_idx++;
				prev=0;
			}
			else if(!prev&&curr) {
				prev=curr;
			}
		}
		tmp[new_idx]=prev;
		for(int j=0;j<n;j++){
			board[j][i]=tmp[j];
		}
	}
}

void to_up() {
	for (int i=0;i<n;i++){
		int tmp[20]={0,};
		int new_idx=0;
		int prev=0;
		for(int j=n-1;j>=0;j--){
			int curr=board[j][i];
			if(prev) {
				if(prev=curr){
					tmp[new_idx]=prev;
					prev=curr;
				}
				else {
					tmp[new_idx]=prev*2;
					prev=0;
				}
				new_idx--;
			}
			else {
				if(curr)
					prev=curr;
			}
		}
		tmp[new_idx]=prev;
		for(int j=n-1;j>=0;j--){
			board[j][i]=tmp[j];
		}
	}
}

//dir up이나 left인 경우 idx 증가하는 쪽으로 탐색
//dir down이나 right인 경우 idx 감소하는 쪽으로 탐색
// 0: left 1:right 2:up 3: down
// void move_block(int dir) {
// 	for(int i=0;i<n;i++){
// 		int tmp[20]={0,};
// 		int new_idx=0;
// 		int prev=0;
// 		for (int j=0;j<n;j++){
// 			int curr=(dir>1?board[j][i]:board[i][j]);
// 			if(prev){
// 				if(prev!=curr){
// 					tmp[new_idx]=prev;
// 					prev=curr;
// 				}
// 				else {
// 					tmp[new_idx]=prev*2;
// 					prev=0;
// 				}
// 				new_idx += (dir%2?(-1):1);
// 			}
// 			else {
// 				if(curr)
// 					prev=curr;
// 			}
// 		}
// 		tmp[new_idx]=prev;
// 		for(int j=0;j<n;j++){

// 		}
// 	}
// }

void solve(int n){
	if(n==5) {
		ans=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				ans=max(board[i][j], ans);
			}
		}
		return ;
	}
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	cin >> n;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cin>>board[i][j];
		}
	}
	to_down();
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout << board[i][j];
		}
		cout << '\n';
	}
}