// solved.ac 랜덤 마라톤 코스 9 A

#include <iostream>
using namespace std;

int main()
{
	int res = 0, tmp;
	for (int i = 0; i < 5; i++) {
		cin >> tmp;
		res += tmp;
	}
	cout << res;
}