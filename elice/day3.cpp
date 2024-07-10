#include <iostream>
#include <stack>
using namespace std;

// 괄호 개수 찾고
// 1 이면 바로 진행
// 2 이상이면?

void	unzip2(string &str)
{
	stack<int> stack;
	int levelLen[50] = {0, };
	int	level = 0;
	int len = 0, start, end, rep, sub_len;
	string sub;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) == '(') {
			stack.push(i);
			level++;
		}
		else if (str.at(i) == ')') {
			start = stack.top(); stack.pop();
			end = i;
			rep = str.at(start - 1) - '0';
			sub_len = end - start - 1;
			levelLen[level] += sub_len;
			if (!str.find('(', i))
				level--;
		}
		else {
			if (i + 1 == str.length() || str.at(i + 1) != '(')
				levelLen[level]++;
		}
	}
	for (int i = 0; i < 50; i++)
		len += levelLen[i];
	cout << str.length() << endl;
}

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


int main() {
    string  compressed;
    cin >> compressed;
	unzip2(compressed);
}