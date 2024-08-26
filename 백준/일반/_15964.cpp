//
// Created by SungWoo Hong on 2024. 8. 25..
//
#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0);
#include <string>
using lld = long long;
lld A, B;

lld caculate(lld A, lld B){

  return (A+B) * (A-B);
}

int main() {
    fastio;
    cin >> A >> B;
    cout << caculate(A, B);
    return 0;
}