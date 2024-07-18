// 투 포인터
// 두 개의 포인터를 이동시키는데, 첫번째 지점을 기준으로 두번째 지점을 움직이면서
// 의도한 목적을 달성하면 첫번째 지점을 다음걸로 옮겨서 탐색한다.
#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int>	value(100000);
int	mn = 0x7fffffff;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) cin >> value[i];
	int end = n - 1;
	int start = 0;
	while (start != end) {
		// cout << start << ", " << end << " ";
		// cout << abs(value[start] + value[end]) << " vs " << abs(mn);
		if (abs(value[start] + value[end]) < abs(mn))
			mn = value[start] + value[end];
		if (value[start] + value[end] < 0)
			start++;
		else if (value[start] + value[end] > 0)
			end--;
		else if (value[start] + value[end] == 0)
		{
			mn = 0;
			break ;
		}
		// cout << " --> " << mn << endl;
	}
	// for (int start = 0; start < n; start++) {
	// 	end = start + 1;
	// 	while (end < n) {
	// 		if (abs(value[end] + value[start]) < abs(mn)) {
	// 			mn = value[start] + value[end];
	// 			break ;
	// 		}
	// 		end++;
	// 	}
	// }
	cout <<  mn;
}
