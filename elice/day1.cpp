#include <iostream>
#include <string>

using namespace std;

string	answer = "999999";
int		visit[6];

void	DFS(string str, string res, int idx, int digit)
{
	if (idx >= digit)
	{
		if (res > str)
			answer = min(answer, res);
		return ;
	}
	for (int i = 0; i < digit; i++)
	{
		if (visit[i] == 1) continue;
		visit[i] = 1;
		DFS(str, res + str[i], idx + 1, digit);
		visit[i] = 0;
	}
}

int main()
{
	string	str;
	string	res = "";

	cin >> str;
	DFS(str, res, 0, str.length());
}