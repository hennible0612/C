#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

#define fastio cin.tie(0) -> sync_with_stdio(0);

struct pos {
    int y, x;
};

int n, m;
double white = 0, black = 0;
char v[100][100];
queue<pos> q;
bool vb[100][100];


bool inRange(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m;
}

void bfs(int i, int j) {
    if (vb[i][j]) return;

    vb[i][j] = true;
    q.push({i, j});

    int counter = 1;

    while (!q.empty()) {
        pos now = q.front();
        q.pop();

        for (int d = 0; d < 4; d++) {
            int dy = now.y + "2011"[d] - '1';
            int dx = now.x + "1120"[d] - '1';

            if (inRange(dx, dy) && v[dy][dx] == v[now.y][now.x] && !vb[dy][dx]) {
                vb[dy][dx] = true;
                counter++;
                q.push({dy, dx});
            }
        }
    }

    double result = pow(counter, 2);
    if (v[i][j] == 'W') {
        white += result;
    } else {
        black += result;
    }
}

int main() {
    fastio;
    cin >> n >> m;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> v[i][j];
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (!vb[i][j]) {
                bfs(i, j);
            }
        }
    }

    cout << white << " " << black;

    return 0;
}