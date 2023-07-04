//
// Created by sergi on 4/07/2023.
//
#include <iostream>
using namespace std;

int main(){
    int velocity, time;
    while(cin >> velocity){
        cin >> time;
        cout << velocity * time * 2 << endl;
    }
    return 0;
}