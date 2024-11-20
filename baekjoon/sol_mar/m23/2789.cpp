#include <iostream>
using namespace std;
int main() {
    string cam="CAMBRIDGE";
    string w; cin >> w;
    for (auto c:w) {
        if (cam.find(c)!=cam.npos)
            continue;
        else
            cout << c;
    }
}