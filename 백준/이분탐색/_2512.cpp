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

int N, M, answer;
int v[10000];

int main()
{

    fastio;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    cin >> M;

    int start, end;

    sort(v, v + N);
    start = 0;
    end = v[N - 1];
    int sum;
    while(start <= end)
    {
        sum = 0;

        int mid = (start + end) / 2;
        for(int i = 0; i < N; i++)
        {
            sum += min(mid, v[i]);
        }
        if(sum > M)
        {
            end = mid - 1;
        }else
        {
            answer = mid;
            start = mid + 1;
        }
    }
    cout << answer;


    return 0;
}
