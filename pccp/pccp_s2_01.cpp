#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string op) {
    vector<int> ans;
    vector<int> dir;
    int len = op.length();

    ans.push_back(0);
    ans.push_back(0);
    dir.push_back(0);
    dir.push_back(1);

    int tmp;
    for (int i = 0; i < len; i++) {
		cout << op[i] << ": (" << ans[0] << ", " << ans[1] << "), (" << dir[0] << ", " << dir[1] << ") -> ";
        if (op[i] == 'R') {
            tmp = dir[0];
            dir[0] = dir[1];
            dir[1] = (-1) * tmp;
        }
        else if (op[i] == 'L') {
            tmp = dir[0];
            dir[0] = (-1) *dir[1];
            dir[1] = tmp;
        }
        else if (op[i] == 'G') {
            ans[0] += dir[0];
            ans[1] += dir[1];
        }
        else {
            ans[0] -= dir[0];
            ans[1] -= dir[1];
        }
		cout << "(" << ans[0] << ", " << ans[1] << "), ("<< dir[0] << ", " << dir[1] << ")\n";
    }
    return ans;
}

int main() {
	vector<int> res = solution("GRGRGRB");
	cout << res.front() << ' ' << res.back() << '\n';
}