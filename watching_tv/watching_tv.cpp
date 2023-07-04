#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <map>
using namespace std;

int watching_tv() {
    int testCases = 0;
    cin >> testCases;
    for(int i = 0; i < testCases; i++){
        int channels; cin >> channels;
        int top = 0;
        int maxFreq = 100000;
        int freq;
        map<int, int> dictionary;
        for(int j = 0; j < channels; j++){
            string name = "";
            cin >> name;
            cin >> freq;
            if(dictionary.find(freq) == dictionary.end()){
                dictionary[freq] = 1;
            } else {
                dictionary[freq] = dictionary[freq] + 1;
            }
            if(top < dictionary[freq]) {
                top = dictionary[freq];
                maxFreq = freq;
            }
            else if (top == dictionary[freq]) {
                maxFreq = min(maxFreq, freq);
            }
        }
        cout << maxFreq << endl;
    }
    return 0;
}
