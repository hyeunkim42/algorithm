#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

    char ml, mr, tl, tr;
    cin >> ml >> mr >> tl >> tr;
	char m = 0, t = 0;
	if(ml==mr) m=ml;
	if(tl==tr) t=tl;
	if(m&&t){
		if(m==t)
			cout << "?";
		else if((m=='R'&&t=='S')||(m=='S'&&t=='P')||(m=='P'&&t=='R'))
			cout << "MS";
		else
			cout << "TK";
	}
	else if(m&&!t){
		if((m=='S'&&(tl=='R'||tr=='R'))||(m=='R'&&(tl=='P'||tr=='P'))||(m=='P'&&(tl=='S'||tr=='S')))
			cout << "TK";
		else
			cout << "?";
	}
	else if(!m&&t){
		if((t=='S'&&(ml=='R'||mr=='R'))||(t=='R'&&(ml=='P'||mr=='P'))||(t=='P'&&(ml=='S'||mr=='S')))
			cout << "MS";
		else
			cout << "?";
	}
	else{
		cout << "?";
	}
}