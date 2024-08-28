//
// Created by SungWoo Hong on 2024. 8. 27..
//
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define lld long long
#define fastio cin.tie(0)->sync_with_stdio(0);
#include <map>


int N;
map<string, int> scoreMap;

int main()
{

    fastio;
    cin >> N;

    for(int i = 0; i < N; i++){
        string file;
        cin >> file;
        int pos = file.rfind('.');
        string extension = file.substr(pos + 1);
        if(!scoreMap.count(extension)){
            scoreMap[extension] = 1;
        }else{
            scoreMap[extension]++;
        }
    }

    for(auto pair : scoreMap){
        cout << pair.first << " " << pair.second << "\n";
    }


    return 0;
}