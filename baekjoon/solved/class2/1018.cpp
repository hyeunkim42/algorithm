#include <bits/stdc++.h>

using namespace std;

string BW[8]={"WBWBWBWB", "BWBWBWBWBW", "WBWBWBWB", "BWBWBWBWBW", "WBWBWBWB", "BWBWBWBWBW", "WBWBWBWB", "BWBWBWBWBW"};
string WB[8]={"BWBWBWBW", "WBWBWBWB", "BWBWBWBWBW", "WBWBWBWB", "BWBWBWBWBW", "WBWBWBWB", "BWBWBWBWBW", "WBWBWBWBWB"};

vector<string> board;

int BWcnt(int x, int y){
	int cnt=0;
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if(BW[i][j]!=board[x+i][y+j]) cnt++;
		}
	}
	return cnt;
}

int WBcnt(int x, int y){
	int cnt=0;
	for (int i=0;i<8;i++){
		for (int j=0;j<8;j++){
			if(WB[i][j]!=board[x+i][y+j]) cnt++;
		}
	}
	return cnt;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m; cin >> n >> m;
	for (int i=0;i<n;i++){
		string tmp; cin >> tmp;
		board.push_back(tmp);
	}
	int cnt=3000;
	for (int i=0;i+8<=n;i++){
		for (int j=0;j+8<=m;j++){
			cnt=min(BWcnt(i,j), cnt);
			cnt=min(WBcnt(i,j), cnt);
		}
	}
	cout << cnt << '\n';
}