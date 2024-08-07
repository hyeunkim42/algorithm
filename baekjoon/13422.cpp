#include <iostream>
#include <cstring>
using namespace std;

int	arr[100001], n, m, k;

int	check_case(void) {
	int start, end, res = 0, sum = 0;

	start = 0;
	end = start + m - 1;
	for (int i = 0; i < m; i++) sum += arr[i];
	if (sum < k)
		res = 1;
	if (n == m)
		return (res);
	for (start = 1; start < n; start++) {
		end = (end + 1) % n;
		sum = sum - arr[start - 1] + arr[end];
		if (sum < k)
			res++;
	}
	return (res);
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int case_num;
	cin >> case_num;
	for (int i = 0; i < case_num; i++) {
		memset(arr, 0, 100001);
		cin >> n >> m >> k;
		for (int j = 0; j < n; j++) {
			cin >> arr[j];
		}
		cout << check_case() << "\n";
	}
	// cout << endl;
	// cout << n << " " << m << " " << k << "\n";

}