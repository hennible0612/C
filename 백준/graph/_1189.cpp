//
// Created by SungWoo Hong on 2024. 9. 27..
//
#include <algorithm>
#include <iostream>
using namespace std;
#define lld long long
#define fastio cin.tie(0) -> sync_with_stdio(0);
#include <queue>
#include <cmath>


int R, C, K;
int map[5][5];
bool vmap[5][5];

int answer = 0;

bool inRange(int y, int x) { return y >= 0 && y < R && x >= 0 && x < C; }

void dfs (int i, int j, int counter){


    if(i == 0 && j == C - 1 && K == counter){
        answer++;
        return;
    }

    vmap[i][j] = true;

    for(int d = 0; d < 4; d++){
        int dx = j + "2011"[d] - '1';
        int dy = i + "1120"[d] - '1';
        if(inRange(dy, dx) && !vmap[dy][dx] && map[dy][dx] == 0){
            vmap[dy][dx] = true;
            dfs(dy, dx, counter + 1);
            vmap[dy][dx] = false;
        }

    }

}

int main()
{
    fastio;
    cin >> R >> C >> K;

    for(int i = 0; i < R; i++){
        for(int j = 0; j < C; j++){
            char c;
            cin >> c;
            if(c == '.'){
                map[i][j] = 0;;
            }else{
                map[i][j] = 1;
            }

        }
    }
    vmap[R - 1][0] = true;
    dfs(R - 1, 0, 1);
    cout << answer;
}
