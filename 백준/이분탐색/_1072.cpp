//
// Created by SungWoo Hong on 2024. 8. 26..
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define lld long long
#define fastio cin.tie(0)->sync_with_stdio(0);
#define MAX 1000000000

lld X, Y, average;
lld leftBound, rightBound;

int main()
{
    fastio;
    cin >> X >> Y;

    average = Y * 100 / X;

    leftBound = 0;
    rightBound = MAX;
    if(average >= 99) {
        cout << -1;
        return 0;
    }

    while (leftBound <= rightBound) {
        lld mid = (leftBound + rightBound) / 2;
        int temp = (Y + mid) * 100 / (X + mid);

        if (temp > average) {

            rightBound = mid - 1;
        }
        else {
            leftBound = mid + 1;
        }
    }
    cout << leftBound;
    return 0;
}
