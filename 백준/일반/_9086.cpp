//
// Created by SungWoo Hong on 2024. 8. 25..
//
#include <iostream>.
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0);

int n;
string s;
int main() {
    fastio;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> s;
        cout << s[0] << s[s.size() -1] << "\n";
    }
}