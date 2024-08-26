//
// Created by SungWoo Hong on 2024. 8. 26..
//

#include <iostream>
#include <map>
#include <algorithm>
#include <queue>
using namespace std;
#define fastio cin.tie(0)->sync_with_stdio(0);
#include <string>
#include <climits>

string X, Y;
int xSize, ySize, answer;

int main() {
    fastio;

    cin >> X >> Y;
    xSize = X.size();
    ySize = Y.size();

    answer = INT_MAX;

    for(int i = 0; i <= ySize - xSize; i++) {
        int currentDiff = 0;
        for(int j = 0; j < xSize; j++) {

            if(X[j] != Y[i + j]) {
                currentDiff++;
            }
        }
        answer = min(answer, currentDiff);
    }
    cout << answer;

    return 0;
}