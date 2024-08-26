//
// Created by SungWoo Hong on 2024. 8. 25..
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define lld long long
#define fastio cin.tie(0)->sync_with_stdio(0);

string str;

int main() {
    fastio;

    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if ('A' <= str[i] && str[i] <= 'Z') {
            cout << char(str[i] - 'A' + 'a');
        } else if ('a' <= str[i] && str[i] <= 'z') {
            cout << char(str[i] - 'a' + 'A');
        }
    }
    return 0;
}