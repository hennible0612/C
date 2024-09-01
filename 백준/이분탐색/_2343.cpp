//
// Created by SungWoo Hong on 2024. 8. 30..
//
#include <iostream>

#include <algorithm>

#include <vector>

using namespace std;
#define lld long long
#define fastio cin.tie(0) -> sync_with_stdio(0);
#define MAX 1000000000

lld N, M, answer;
lld leftBound, rightBound;
int v[100001];


int countLength(int mid) {
    int sum = 0;
    int cnt = 1;
    for (int i = 0; i < N; i++) {
        sum += v[i];
        if (sum > mid) {
            cnt++;
            sum = v[i];
        }
    }
    return cnt;
}

int main() {
    fastio;

    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> v[i];

    }
    leftBound = 1;
    rightBound = N;
    int mid = 0;
    while (leftBound <= rightBound) {
        mid = (leftBound + rightBound) / 2;
        int cnt = countLength(mid);
        if (cnt > M) {
            leftBound = mid + 1;
        } else {
            rightBound = mid;
        }

    }
    cout << leftBound;
    return 0;
}

