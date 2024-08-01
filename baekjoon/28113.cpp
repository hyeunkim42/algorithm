// solved.ac marathon 코스 9 C

// A분 뒤 숭실대별관앞 정류소에 집으로 가는 마지막 버스
// B분 뒤 숭실대입구역에 집으로 가는 마지막 열차 도착
// 지하철 역까지 걸어가는게 빠를수도?
// 숭실대 입구역의 지하철 승강장까지 걸어가는데는 N분

#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie();

	int n, a, b;
	cin >> n >> a >> b;
	// cout << "n: " << n << " a: " << a << " b: " << b << endl;
	if (a > b)
		cout << "Subway";
	else if (a < b)
		cout << "Bus";
	else
		cout << "Anything";
}