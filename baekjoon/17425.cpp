#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

// f(A): A의 약수의 합
// g(x): x보다 작거나 같은 모든 자연수 y의 f(y)를 합한 값

unsigned int t; // test case number
unsigned int n; // limit
unsigned long long sum[1000001];
unsigned long long gsum[1000001];

void	yaksuhap() {
	for (int i  = 1; i <= 1000000; i++) {
		for (int j = 1; i * j <= 1000000; j++) {
			sum[i * j] += i;
		}
	}
	gsum[1] = sum[1];
	for (int i = 2; i <= 1000001; i++) gsum[i] = gsum[i - 1] + sum[i];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	yaksuhap();
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		cout << gsum[n] << "\n";
	}
}