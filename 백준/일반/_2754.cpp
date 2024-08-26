//
// Created by SungWoo Hong on 2024. 8. 25..
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0);


map<string, string> gradeMap = {
    {"A+", "4.3"}, {"A0", "4.0"}, {"A-", "3.7"}
    ,{"B+", "3.3"},{"B0", "3.0"},{"B-", "2.7"}
    ,{"C+", "2.3"},{"C0", "2.0"},{"C-", "1.7"}
    ,{"D+", "1.3"},{"D0", "1.0"},{"D-", "0.7"}
    ,{"F", "0.0"}
};

string temp;
int main() {
    fastio;
    cin >> temp;
    cout << gradeMap[temp];

    return 0;
}
