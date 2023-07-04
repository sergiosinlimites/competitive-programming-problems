//
// Created by sergi on 4/07/2023.
//

#include <iostream>

using namespace std;

int c() {
    int testCases;
    cin >> testCases;
    for(int i = 0; i < testCases; i++) {
        int pathLength;
        int changes;
        cin >> pathLength;
        cin >> changes;
        cout << (pathLength - changes) * 2 << endl;
    }

    return 0;
}