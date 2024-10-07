#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> input;

int main() {
	int n;
	cin >> n;
	int tmp;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		input.push_back(tmp);
	}
	sort(input.begin(), input.end());
	auto st = input.begin(), ed = input.end() - 1;
	int x, cnt = 0;;
	cin >> x;
	while (st < ed) {
		if (*st + *ed > x)
			ed--;
		else if (*st + *ed < x)
			st++;
		else
		{
			st++;
			ed--;
			cnt++;
		}
	}
	cout << cnt << "\n";
}