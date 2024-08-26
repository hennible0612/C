//
// Created by SungWoo Hong on 2024. 8. 25..
//
#include <iostream>.
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0);
#include <string>


int start, endd, n;
string s;



int main() {
    fastio;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s >> start >> endd;
        s.erase(start, endd - start);
        cout << s << "\n";
    }
    return 0;
}