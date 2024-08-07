// solved.ac 마라톤 코스9 E
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

	//크리스마스 축제 2017.11.23 ~ 2017.12.10
	//single long strand of lights run along all four equally long edges of the courtyard
	// electrical wiring
	//one line input of integer a <= a <= 10^18) a: 넓이
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	double area;
	cin >> area;
	cout << setprecision(12);
	cout << sqrt(area) * 4;
}