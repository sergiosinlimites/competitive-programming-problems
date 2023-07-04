//
// Created by sergi on 4/07/2023.
//
#include <iostream>
using namespace std;

int car_factory(){
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        int first, second;
        cin >> first;
        cin >> second;
        co  ut << second + first - 1 << endl;
    }
    return 0;
}