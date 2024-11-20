#include <bits/stdc++.h>

using namespace std;

void	sub(string& n, string& m) {
	string::reverse_iterator nit=n.rbegin();
	string::reverse_iterator nite=n.rend();
	string::reverse_iterator mit=m.rbegin();
	string::reverse_iterator mite=m.rend();

	int leftover=0;
	while(nit!=nite){
		char tmp;
		if(mit!=mite){
			tmp=(*nit-'0')-(*mit-'0')-leftover;
			mit++;
		}
		else
			tmp=(*nit-'0')-leftover;
		if(tmp<0){
			tmp+=10;
			leftover=1;
		}
		tmp+='0';
		if(!isdigit(tmp))
			cout << n << ':' << (int)*nit << ' ' << m << ':' << (int)*mit << "=>" << (int)tmp << endl;
		*nit=tmp;
		nit++;
	}
	string::iterator it=n.begin();
	while (*it=='0'){
		*it=0;
		it++;
	}
}

void	add(string& n, string& m){
	string::reverse_iterator nit=n.rbegin();
	string::reverse_iterator nite=n.rend();
	string::reverse_iterator mit=m.rbegin();
	string::reverse_iterator mite=m.rend();
	int leftover=0;
	while (nit!=nite) {
		char tmp;
		if(mit!=mite){
			tmp=(*nit-'0')+(*mit-'0')+leftover;
			mit++;
		}
		else
			tmp=(*nit-'0')+leftover;
		if(tmp>9){
			tmp-=10;
			leftover=1;
		}
		tmp+='0';
		*nit=tmp;
		nit++;
	}
}


pair<string, string> div(string& n, string& m) {
	string quo="0", one="1";
	while (n.length() > m.length() || n>=m) {
		add(quo, one);
		sub(n, m);
	}
	return {quo, n};
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	string n, m; cin >> n >> m;
	// sub(n,m);
	// add(n,m);
	// cout << ("90">"10") << endl;
	pair<string, string> res=div(n, m);

	cout <<"res " << res.first << ' ' << res.second << endl;
}