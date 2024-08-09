#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int solution(vector<int> ability, int num) {
    int ans = 0, size = ability.size();
	map<int, int> abs;
    int idx = 0;

	for (int i = 0; i < size; i++) {
		int curr = ability[i];
		if (abs.count(curr)) 
			abs[curr] += 1;
		else
			abs.insert({curr, 1});
	}

    for (int i = 0; i < num; i++) {
        int tmp1, tmp2, res;
        idx = 0;
        while (abs[idx] == 0) idx++;
        if (abs[idx] > 1) {
            tmp1 = idx;
            tmp2 = idx;
            abs[idx] -= 2;
        }
        else {
            tmp1 = idx;
            abs[idx] -= 1;
            idx++;
			while (abs[idx] == 0) idx++;
			tmp2 = idx;
			abs[idx] -= 1;
        }
        res = tmp1 + tmp2;
		if (abs.count(res))
			abs[res] += 2;
		else {
        	abs.insert({res, 2});
		}
    }
    for (auto it: abs) {
		ans += it.first * it.second;
	}
    return ans;
}

int main() {
	vector<int> ability;
	ability.push_back(100);
	ability.push_back(100);
	cout << solution(ability, 2) << '\n';
}