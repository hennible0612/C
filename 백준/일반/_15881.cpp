//
// Created by SungWoo Hong on 2024. 8. 29..
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define lld long long
#define fastio cin.tie(0)->sync_with_stdio(0);
#include <map>

int n;
string word;
int main() {
    fastio;
    cin >> n;
    cin >> word;

    int count = 0;

    for (int i = 0; i <= n - 4;) {
        if (word[i] == 'p' && word[i+1] == 'P'
            && word[i+2] == 'A' && word[i+3] == 'p') {
            count++;
            i += 4;
        } else {
            i++;
        }
    }
    cout << count;
    return 0;

}