#include <iostream>

#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define lld long long
#define fastio cin.tie(0) -> sync_with_stdio(0);
#define MAX 1000000000

vector<pair<int, int>> vec;
int N;
int main() {
    fastio;
    cin >> N;

    for(int i = 0; i < N; i++){
        int temp;
        cin >> temp;
        vec.push_back(make_pair(temp, i));


    }
    sort(vec.begin(), vec.end());


    // for (int i = 0; i < N; i++) {
    //     cout << vec[i].second << " ";
    // }


    vector<int> P(N);
    for (int i = 0; i < N; i++) {
        P[vec[i].second] = i;

    }

    for (int i = 0; i < N; i++) {
        cout << P[i] << ' ';
    }

    return 0;
}
