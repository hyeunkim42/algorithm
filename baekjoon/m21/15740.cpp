#include <bits/stdc++.h>

using namespace std;

string add(const string& a, const string& b, int sign){
	string res(max(a.size(), b.size()), '0');
	int ai=a.size()-1, bi=b.size()-1, ri=res.size()-1;
	int car=0;
	while(ai>=0 || bi>=0){
		char r = (ai>=0?a[ai]-'0':0)+(bi>=0?b[bi]-'0':0) + car;
		if(r>9) {
			car=1;
			r-=10;
		}
		else
			car=0;
		res[ri]=r+'0';
		ai--;
		bi--;
		ri--;
	}
	if(car)
		res="1"+res;
	if(sign)
		res="-"+res;
	return res;
}

string sub(const string& a, const string& b) {
	string absa(a[0]=='-'?a.substr(1):a);
	string absb(b[0]=='-'?b.substr(1):b);
	string res(max(absa.size(), absb.size()), '0');
	bool sign=false;
	int car=0;
	if(absa.length()==absb.length()?absa<absb:absa.length()<absb.length()) {
		swap(absa,absb);
		if (b[0]=='-')
			sign=true;
	}
	else {
		if (a[0]=='-')
			sign=true;
	}
	int ai=absa.size()-1, bi=absb.size()-1, ri=res.size()-1;
	while (ai>=0||bi>=0){
		char r=(ai>=0?absa[ai]-'0':0)-(bi>=0?absb[bi]-'0':0)-car;
		if(r<0){
			car=1;
			r+=10;
		}
		else
			car=0;
		res[ri]=r+'0';
		ri--;
		ai--;
		bi--;
	}
	if(car){
		res[0]--;
		if(res[0]<'0')
			res=res.substr(1);
	}
	int cnt = 0;
	while(res[cnt]=='0')cnt++;
	res=res.substr(cnt);
	if(res=="")
		return "0";
	if(sign)
		res="-"+res;
	return res;
}

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);
	string a, b; cin >> a >> b;
	if((a[0]=='-'&&b[0]=='-')){
		std::cout << add(a.substr(1), b.substr(1),1);
	}
	else if(a[0]!='-'&&b[0]!='-'){
		std::cout << add(a,b,0);
	}
	else
		std::cout << sub(a, b);
}