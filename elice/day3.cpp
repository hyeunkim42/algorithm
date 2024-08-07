#include <iostream>
#include <stack>
using namespace std;

// void	unzip(string &str)
// {
// 	int end = str.find(')');
// 	cout << end << endl;
//     int start, rep;
//     while (end >= 0)
//     {
//         start = str.rfind('(', end);
//         rep = str.at(start - 1) - '0';
//         string reps = str.substr(start + 1, end - start - 1);
//         str.replace(start - 1, end - start + 2, reps);
//         for (int i = 1; i < rep; i++) str.insert(start - 1, reps);
//         end = str.find(')');
//     }
// }
bool visited[50];
string str;

int unzip(int idx) {
	int cnt = 0;
	for (int i = idx; i < str.length(); i++) {
		char ch = str[i];
		if (ch == '(' && !visited[i]) {
			visited[i] = true;
			cnt--;
			cnt += (int)(str[i - 1] - '0') * unzip(i + 1);
		}
		else if (ch == ')' && !visited[i]) {
			visited[i] = true;
			return cnt;
		}
		else if (!visited[i]) {
			visited[i] = true;
			cnt++;
		}
	}
	return cnt;
}


int main() {
	cin >> str;
	cout << unzip(0);
}