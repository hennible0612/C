//
// Created by SungWoo Hong on 2024. 9. 2..
//
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;
#define lld long long
#define fastio cin.tie(0) -> sync_with_stdio(0);
#define MAX 1000000000


int N;

struct Info {

    string name;
    int day;
    int month;
    int year;

    bool operator<(Info info){

        if(info.year == year){
            if(info.month == month){

                return day > info.day;
            }
            return month > info.month;

        }
        return year > info.year;
    }

};



Info v[100];

int main() {
    fastio;
    cin >> N;


    for(int i = 0; i < N; i++){
        cin >> v[i].name >> v[i].day >> v[i].month >> v[i].year;
    }

    sort(v, v + N);

    cout << v[0].name << '\n';
    cout << v[N-1].name << '\n';


    return 0;
}
