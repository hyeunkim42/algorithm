//solved.ac 마라톤 코스 9 D
// N 개의 줄에 걸쳐 Hello World, Judge i! (i는 줄번호)
#include <iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cout << "Hello World, Judge " << i + 1 << "!\n";
}